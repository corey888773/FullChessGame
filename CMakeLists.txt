cmake_minimum_required(VERSION 3.21)
project(FullChessGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(FullChessGame main.cpp Board.cpp Board.h Piece.cpp Piece.h Rook.cpp Rook.h)
