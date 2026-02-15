add_subdirectory(common)

add_executable(smtp_callbacks_to_coroutines main.c)

target_link_libraries(smtp_callbacks_to_coroutines
  PRIVATE common
)