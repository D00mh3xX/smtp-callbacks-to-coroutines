# Root build entry point for smtp_callbacks_to_coroutines project.
# - declares the project (name, version, languages)
# - delegates the actual build targets to the src/ directory

cmake_minimum_required(VERSION 3.20)

project(smtp_callbacks_to_coroutines
    VERSION 0.1.0
    LANGUAGES C CXX
)

add_subdirectory(src)