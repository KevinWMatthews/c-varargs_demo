add_executable(PrintfWrapperDemo
    printf_wrapper_demo.c
)
target_link_libraries(PrintfWrapperDemo
    PRIVATE
        PrintfWrapper
)
