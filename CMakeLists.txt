#CMakeLists.txt 
cmake_minimum_required(VERSION 3.10)
project(HelloProject)
add_executable(prm ./prime_num.c)
add_executable(pattern ./patterns/pattern.c)
add_executable(triangle ./patterns/triangle.c)
add_executable(bt ./patterns/bottomTop.c)
add_executable(matrix_input ./matrix/matrix_input.c)
add_executable(diagonal ./matrix/diagonal.c)
add_executable(transpose ./matrix/transpose.c)
add_executable(prt ./practice/pattern.c)

#sorting
add_executable(bub ./sortings/bubble_sort.c)
add_executable(sel ./sortings/selection_sort.c)
#recursive
add_executable(fibo ./recursive/fibo.c)
add_executable(fact ./recursive/factorial.c)
#dma
add_executable(sum ./dma/sum.c)
add_executable(cmp ./dma/compare.c)
add_executable(largest ./dma/find_largests.c)
#structure 
add_executable(std ./strucuture/student.c)
add_executable(dstruct ./strucuture/dma_struct.c)

#file_handling
add_executable(writeM ./file_handling/write_mode.c)
add_executable(readM ./file_handling/read_mode.c)
add_executable(formattedM ./file_handling/formatted_data.c)
add_executable(mutipleM ./file_handling/mutiple_data.c)
add_executable(wn ./file_handling/write_numbers.c)
add_executable(wpn ./file_handling/write_prime_numbers.c)
