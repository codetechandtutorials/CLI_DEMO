add_executable(demo "main.cpp")
target_link_libraries(demo PRIVATE CLI_DEMO)
target_include_directories(demo PRIVATE "../cli/")
