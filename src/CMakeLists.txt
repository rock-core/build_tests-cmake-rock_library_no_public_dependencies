rock_no_public_dependencies(rock_library_no_public_dependencies PKGCONFIG)
rock_library(rock_library_no_public_dependencies
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_PKGCONFIG plain_package)

rock_executable(rock_library_no_public_dependencies_bin Main.cpp
    DEPS rock_library_no_public_dependencies)

