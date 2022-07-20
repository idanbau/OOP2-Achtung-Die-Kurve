#pragma once
#include "GameObjects/StaticObjects/Gift.h"


class RemoveBoundaries : public Gift
{
public:
	RemoveBoundaries(const sf::Vector2f& pos = getRandomPosition()) : Gift(textures_type::boundaries, pos) {};
	~RemoveBoundaries() override = default;
	void collisionHandle(CollisionHandling& collisionHandling, size_t index) override {
		collisionHandling.collisionWith(*this, index);
	}
};