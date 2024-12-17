# Take the Catch2 test framework
find_package(Catch2 3 REQUIRED CONFIG)

# Executable for tests
add_executable(tests)

# Include the source files for the test executable
        target_sources( tests PRIVATE 
        exercise1.cpp
        exercise2.cpp exercise3.cpp
        exercise4.cpp)

# include NYU system verilog library 
nyu_link_sv(tests PRIVATE lab4)

# specify top module for verilator to use
                nyu_target_verilate(tests TOP_MODULES exercise1 exercise2 exercise3 exercise4)

#link the Catch2 test framework to the test executable
                    target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

#Enable test discovery with 
include(Catch) 
catch_discover_tests(tests)
