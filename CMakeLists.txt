#CMakeLists.txt 
cmake_minimum_required(VERSION 3.10)
project(HelloProject)

add_executable(pattern ./patterns/pattern.c)
add_executable(triangle ./patterns/triangle.c)
add_executable(matrix_input ./matrix/matrix_input.c)
add_executable(diagonal ./matrix/diagonal.c)
add_executable(transpose ./matrix/transpose.c)
add_executable(prt ./practice/pattern.c)

#sorting
add_executable(bub ./sortings/bubble_sort.c)
add_executable(sel ./sortings/selection_sort.c)

#dma
add_executable(sum ./dma/sum.c)
add_executable(cmp ./dma/compare.c)

#structure 
add_executable(std ./strucuture/student.c)
add_executable(dstruct ./strucuture/dma_struct.c)

#file_handling
add_executable(writeM ./file_handling/write_mode.c)
add_executable(readM ./file_handling/read_mode.c)
add_executable(formattedM ./file_handling/formatted_data.c)
add_executable(mutipleM ./file_handling/mutiple_data.c)
