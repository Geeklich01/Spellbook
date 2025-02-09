cmake_minimum_required(VERSION 3.10)
project(Spellbook VERSION 0.1)
add_executable(spellbook main.cpp verbalComponent.cpp)

# Setting variable with project prefix for future reference.
set(SPBK_PREFIX "SPBK")
