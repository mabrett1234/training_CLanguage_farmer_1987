cmake_minimum_required(VERSION 4.1)
project(book_Farmer_1987 C)

set(CMAKE_C_STANDARD 11)

include_directories(Inc)


# Default:
#add_executable(book_Farmer_1987 Src/main.c)

# Example 1.1:
#add_executable(book_Farmer_1987 Src/chapter_1/circle.c)

# Example 1.2:
#add_executable(book_Farmer_1987 Src/chapter_1/hello.c)

# Assignment 1.2:
#add_executable(book_Farmer_1987 Src/chapter_1/circumference.c)

# Example 2.1:
#add_executable(book_Farmer_1987 Src/chapter_2/sizeof.c)

# Example 2.2:
#add_executable(book_Farmer_1987 Src/chapter_2/ctof1.c)

# Example 2.3:
#add_executable(book_Farmer_1987 Src/chapter_2/hailstone.c)

# Example 2.4:
#add_executable(book_Farmer_1987 Src/chapter_2/wordlength.c)

# Example 2.5:
#add_executable(book_Farmer_1987 Src/chapter_2/nibble.c)

# Example 2.6:
#add_executable(book_Farmer_1987 Src/chapter_2/blanks.c)

# Example 2.7 is left as a 'macro'

# Assignment 2.2:
#add_executable(book_Farmer_1987 Src/chapter_2/averageSalary.c)

# Example 3.1
#add_executable(book_Farmer_1987 Src/chapter_3/itoh.c)

# Example 3.2
#add_executable(book_Farmer_1987 Src/chapter_3/random.c)

# Example 3.3
#add_executable(book_Farmer_1987 Src/chapter_3/normal.c)

# Example 3.4: Struct definition
#add_executable(book_Farmer_1987 Inc/chapter_3/date1.h)

# Assignment 3.2
#add_executable(book_Farmer_1987 Src/chapter_3/salary.c)

# Example 4.1
#add_executable(book_Farmer_1987 Src/chapter_4/bubble.c)

# Example 4.2
#add_executable(book_Farmer_1987 Src/chapter_4/whitespace.c)

# Example 4.3
#add_executable(book_Farmer_1987 Src/chapter_4/calculator1.c)

# Example 4.4
#add_executable(book_Farmer_1987 Src/chapter_4/while.c)

# Example 4.5
#add_executable(book_Farmer_1987 Src/chapter_4/do.c)

# Example 4.6
#add_executable(book_Farmer_1987 Src/chapter_4/for.c)

# Example 4.7
#add_executable(book_Farmer_1987 Src/chapter_4/perfect.c)

# Example 4.8: Function definition only, used in Example 4.9.

# Example 4.9
#add_executable(book_Farmer_1987 Src/chapter_4/uniq.c Inc/chapter_4/getline.h Src/chapter_4/getline.c)

# Example 4.10
# Uncomment the function call in main.c to test this.
#add_executable(book_Farmer_1987 Src/chapter_4/quadratic1.c Inc/chapter_4/quadratic.h Src/main.c)

# Example 4.11
# Using bubble sort function also
# Uncomment function call in main.c to test this program
#add_executable( book_Farmer_1987
#               Inc/chapter_4/
#               Src/chapter_4/bubble.c
#               Src/chapter_4/binary.c
#               Src/main.c
#            )

# Assignment 4.2
# Included some useful functions from chapter 3.
add_executable( book_Farmer_1987
                Inc/chapter_4/
                Src/chapter_4/bubble.c
                Src/chapter_4/binary.c
                Src/chapter_4/salary.c
                Src/chapter_4/assignment_4_2.c
)