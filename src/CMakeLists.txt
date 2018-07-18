add_library(PrintfWrapper
    printf_wrapper.c
)
target_include_directories(PrintfWrapper
    PUBLIC
        "${CMAKE_HOME_DIRECTORY}/include"
)
add_library(PrintfWrapper::PrintfWrapper ALIAS PrintfWrapper)
