cmake_minimum_required (VERSION 3.15)

project (oop2_project_Idan_Baumer_David_Zeev)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
if (MSVC)
    add_compile_options (/W4 /permissive- /Zc:externConstexpr /Zc:inline)
endif ()

add_executable (oop2_project_Idan_Baumer_David_Zeev WIN32 "")

add_subdirectory (include)
add_subdirectory (src)
add_subdirectory (resources/sound)
add_subdirectory (resources/texture)
add_subdirectory (resources/font)

set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR "C:/SFML/SFML-2.5.1/lib/cmake/SFML")

find_package (SFML 2.5 COMPONENTS graphics audio REQUIRED)

set_target_properties (sfml-main sfml-system sfml-window sfml-graphics sfml-audio sfml-network PROPERTIES MAP_IMPORTED_CONFIG_RELWITHDEBINFO RELEASE)

target_link_libraries (oop2_project_Idan_Baumer_David_Zeev sfml-graphics sfml-audio sfml-main)

configure_file (C:/SFML/SFML-2.5.1/bin/openal32.dll ${CMAKE_BINARY_DIR} COPYONLY)