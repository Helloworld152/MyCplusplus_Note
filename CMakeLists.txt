cmake_minimum_required(VERSION 3.12)
project(MyCppNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(mainproject main.cpp Myclass.h stock00.cpp Myclass.cpp tabtenn0.h tabtenn0.cpp exc_mean.h)
add_executable(filetest Codes/filetest.cpp Codes/Mystack.h)
add_executable(test_CPP Codes/test_CPP.cpp Codes/LinkNode.h)
add_executable(Polynomial_add Codes/Polynomial_add.cpp)
add_executable(Joseph_ring Codes/Joseph_ring.cpp)
add_executable(memory Codes/memory.cpp)
add_executable(homework2_2 Codes/homework2_2.cpp)
add_executable(homework2_3 Codes/homework2_3.cpp)
add_executable(homework2_4 Codes/homework2_4.cpp)
add_executable(MyStack Codes/MyStack.cpp Myclass.h)
add_executable(Myclass  Myclass.cpp Myclass.h)

add_executable(classTest Codes/classTest.cpp Codes/MyPriorityQueue.h)
add_executable(homework3_3 Codes/homework3_3.cpp)
add_executable(Myqueue Codes/Myqueue.cpp)
add_executable(test test.cpp)
add_executable(simulator Codes/simulator.cpp)
add_executable(homework3_5 Codes/homework3_5.cpp)

add_executable(homework4_5 Codes/homework4_5.cpp)
add_executable(homework4_6 Codes/homework4_6.cpp)

add_executable(homework5_4 Codes/homework5_4.cpp)
