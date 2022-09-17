cmake_minimum_required(VERSION 3.23)
project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# The version number.
set(CMAJOR 1)
set(CMINOR 0)

configure_file(TutorialConfig.h.in TutorialConfig.h)

#add_subdirectory(include)
#list(APPEND EXTRA_LIBS include)

# add the executable
add_executable(Nopencv main.cpp)
target_link_libraries(Nopencv PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Nopencv PUBLIC
        "${PROJECT_BINARY_DIR}"
        )
# add the install targets
install (TARGETS Nopencv DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
        DESTINATION include
        )

enable_testing()

# does it sqrt of 25
add_test(NAME InputValue COMMAND Nopencv 25)
set_tests_properties(InputValue PROPERTIES PASS_REGULAR_EXPRESSION ": 25")