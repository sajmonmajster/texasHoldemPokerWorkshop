project(TexasHoldemPokerLib)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. SRC_FILES)

add_library(TexasHoldemPokerLib STATIC ${SRC_FILES} ConsoleGameView.cpp ConsoleGameView.h)

target_include_directories(TexasHoldemPokerLib INTERFACE .)