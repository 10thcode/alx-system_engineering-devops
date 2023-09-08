
# 0x04. C - More functions, more nested loops

C Programming - Functions in details and nested loops.

## Tasks

- ***[main.h](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/main.h)***

    The header file containing all the function prototypes

- ***[0-isupper.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/0-isupper.c)***

    A function that checks for uppercase character.

    *Example*
    ```
    ...
    char c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    ...
    ```
    
    *Output*
    ```
    A: 1
    ```

- ***[1-isdigit.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/1-isdigit.c)***

    A function that checks for a digit (0 through 9).

    *Example*
    ```
    ...
    char c = '0';
    char e = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    printf("%c: %d\n", c, _isdigit(e));
    ...
    ```

    *Output*
    ```
    0: 1
    a: 0
    ```

- ***[2-mul.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/2-mul.c)***

    A function that multiplies two integers.

    *Example*
    ```
    ...
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    ...
    ```

    *Output*
    ```
    100352
    -1646592
    ```

- ***[3-print_numbers.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/3-print_numbers.c)***

    A function that prints the numbers, from 0 to 9.

    *Example*
    ```
    ...
    print_numbers();
    ...
    ```

    *Output*
    ```
    0123456789
    ```

- ***[4-print_most_numbers.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/4-print_most_numbers.c)***

    A function that prints the numbers, from 0 to 9, except 2 and 4

    *Example*
    ```
    ...
    print_most_numbers();
    ...
    ```

    *Output*
    ```
    01356789
    ```

- ***[5-more_numbers.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/5-more_numbers.c)***

    A function that prints 10 times the numbers, from 0 to 14

    *Example*
    ```
    ...
    more_numbers();
    ...
    ```

    *Output*
    ```
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    01234567891011121314
    ```

- ***[6-print_line.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/6-print_line.c)***

    A function that draws a straight line in the terminal.

    *Example*
    ```
    ...
    print_line(2);
    print_line(10);
    ...
    ```

    *Output*
    ```
    __
    __________
    ```

- ***[7-print_diagonal.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/7-print_diagonal.c)***

    A function that draws a diagonal line on the terminal.

    *Example*
    ```
    ...
    print_diagonal(2);
    print_diagonal(10);
    ...
    ```

    *Output*
    ```
    \
     \
    \
     \
      \
       \
        \
         \
          \
           \
            \
             \
    ```

- ***[8-print_square.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/8-print_square.c)***

    A function that prints a square

    *Example*
    ```
    ...
    print_square(2);
    print_square(10);
    ...
    ```

    *Output*
    ```
    ##
    ##
    ##########
    ##########
    ##########
    ##########
    ##########
    ##########
    ##########
    ##########
    ##########
    ##########
    ```

- ***[9-fizz_buzz.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/9-fizz_buzz.c)***

    A program that prints the numbers from 1 to 100.
    - For multiples of three print `Fizz` instead of the number.
    - For the multiples of five print `Buzz`.
    - For numbers which are multiples of both three and five print `FizzBuzz`.

    *Example*
    ```
    julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
    julien@ubuntu:~/0x04$ ./9-fizz_buzz 
    1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
    julien@ubuntu:~/0x04$
    ```

- ***[10-print_triangle.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/10-print_triangle.c)***

    A function that prints a triangle.

    *Example*
    ```
    ...
    print_triangle(2);
    print_triangle(10);
    ...
    ```

    *Output*
    ```
     #
    ##
             #
            ##
           ###
          ####
         #####
        ######
       #######
      ########
     #########
    ##########
    ```

- ***[100-prime_factor.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/100-prime_factor.c)***

    A program that finds and prints the largest prime factor of the number `612852475143`.

- ***[101-print_number.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x04-more_functions_nested_loops/101-print_number.c)***

    A function that prints an integer.

    *Example*
    ```
    ...
    print_number(98);
    print_number(1024);
    print_number(0);
    print_number(-98);
    ...
    ```

    *Output*
    ```
    98
    1024
    0
    -98
    ```
