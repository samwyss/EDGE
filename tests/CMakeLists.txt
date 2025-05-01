# dependencies ---------------------------------------------------------------------------------------------------------
# FetchContent for installing CMake managed projects in git repositories
include(FetchContent)

# GTest for automated tests
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.16.0
        GIT_PROGRESS TRUE
        GIT_SHALLOW TRUE
        EXCLUDE_FROM_ALL
)
FetchContent_MakeAvailable(googletest)

# GTest setup ----------------------------------------------------------------------------------------------------------
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

# compiling and linking ------------------------------------------------------------------------------------------------
add_executable(example_test example_test.cpp)
target_link_libraries(example_test
        PRIVATE GTest::GTest)
add_test(example_gtests example_test)