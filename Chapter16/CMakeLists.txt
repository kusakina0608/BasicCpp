cmake_minimum_required(VERSION 3.15)
project(Chapter16)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter16 PowerfullCasting.cpp DynamicCasting.cpp StaticCasting.cpp ConstCasting.cpp ReinterpretCasting.cpp PolymorphicDynamicCasting.cpp PolymorphicStableCasting.cpp DynamicBadCastRef.cpp)