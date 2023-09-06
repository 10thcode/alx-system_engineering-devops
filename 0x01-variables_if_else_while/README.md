
# 0x01. C - Variables, if, else, while

C Programming - Variables, conditions and while loop.

## Tasks

- ***[0-positive_or_negative.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/0-positive_or_negative.c)***

    A program that assigns a random number to the variable `n` each time it is executed,
    and print whether the number stored in the variable `n` is positive, 0 or negative.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
    ulien@ubuntu:~/0x01$ ./0-positive_or_negative 
    266853958 is positive
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    -48147767 is negative
    julien@ubuntu:~/0x01$ ./0-positive_or_negative 
    0 is zero
    julien@ubuntu:~/0x01$
    ```

- ***[1-last_digit.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/1-last_digit.c)***

    A program that assigns a random number to the variable `n` each time it is executed,
    and print the last digit of the number stored in the variable `n`.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 45528266 is 6 and is greater than 5
    julien@ubuntu:~/0x01$ ./1-last_digit 
    Last digit of 809065140 is 0 and is 0
    julien@ubuntu:~/0x01$
    ```

- ***[2-print_alphabet.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/2-print_alphabet.c)***

    A program that prints the alphabet in lowercase.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
    julien@ubuntu:~/0x01$ ./2-print_alphabet 
    abcdefghijklmnopqrstuvwxyz
    julien@ubuntu:~/0x01$
    ```

- ***[3-print_alphabets.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/3-print_alphabets.c)***

    A program that prints the alphabet in lowercase, and then in uppercase

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
    julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
    abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
    julien@ubuntu:~/0x01$ 
    ```

- ***[4-print_alphabt.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/4-print_alphabt.c)***

    A program that prints the alphabet in lowercase except `q` and `e`.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
    julien@ubuntu:~/0x01$ ./4-print_alphabt 
    abcdfghijklmnoprstuvwxyz
    julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
    julien@ubuntu:~/0x01$ 
    ```

- ***[5-print_numbers.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/5-print_numbers.c)***

    A program that prints all single digit numbers of base 10 starting from 0

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
    julien@ubuntu:~/0x01$ ./5-print_numbers 
    0123456789
    julien@ubuntu:~/0x01$ 
    ```

- ***[6-print_numberz.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/6-print_numberz.c)***

    A program that prints all single digit numbers of base 10 starting from 0

- ***[7-print_tebahpla.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/7-print_tebahpla.c)***

    A program that prints the lowercase alphabet in reverse

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
    julien@ubuntu:~/0x01$ ./7-print_tebahpla
    zyxwvutsrqponmlkjihgfedcba
    julien@ubuntu:~/0x01$
    ```

- ***[8-print_base16.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/8-print_base16.c)***

    A program that prints all the numbers of base 16 in lowercase

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
    julien@ubuntu:~/0x01$ ./8-print_base16
    0123456789abcdef
    julien@ubuntu:~/0x01$
    ```

- ***[9-print_comb.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c)***

    A program that prints all possible combinations of single-digit numbers,
    separated by `,`.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
    julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
    julien@ubuntu:~/0x01$ 
    ```

- ***[100-print_comb3.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/100-print_comb3.c)***

    A program that prints all possible different combinations of two digits 
    separated by `,`.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
    julien@ubuntu:~/0x01$ ./100-print_comb3
    01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
    julien@ubuntu:~/0x01$
    ```

- ***[101-print_comb4.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/101-print_comb4.c)***

    A program that prints all possible different combinations of three digits 
    separated by `,`.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
    julien@ubuntu:~/0x01$ ./101-print_comb4
    012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
    julien@ubuntu:~/0x01$ 
    ```

- ***[102-print_comb5.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x01-variables_if_else_while/102-print_comb5.c)***

    A program that prints all possible combinations of two two-digit numbers.

    *Example*
    ```
    julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
    julien@ubuntu:~/0x01$ ./102-print_comb5
    00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
    ```
