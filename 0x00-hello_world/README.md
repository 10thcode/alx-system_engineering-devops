
# 0x00. C - Hello, World

Introduction to C Programming.

## Tasks

- ***[0-preprocessor](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/0-preprocessor)*** 

    A script that runs a C file through the preprocessor and
    save the result into another file.

- ***[1-compiler](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/1-compiler)*** 

    A script that compiles a C file but does not link.

- ***[2-assembler](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/2-assembler)***

    A script that generates the assembly code of a C code and save it in an output file.

- ***[3-name](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/3-name)*** 

    A  script that compiles a C file and creates an executable named `cisfun`.

- ***[4-puts.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/4-puts.c)***

    A C program that prints exactly **"Programming is like building a multilingual puzzle**

    *Example*
    ```
    julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
    "Programming is like building a multilingual puzzle
    julien@ubuntu:~/c/0x00$ echo $?
    0
    julien@ubuntu:~/c/0x00$ 
    ```

- ***[5-printf.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/5-printf.c)***

    A C program that prints exactly **with proper grammar, but the outcome is
    a piece of art,**, followed by a new line.

    *Example*
    ```
    julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
    julien@ubuntu:~/c/0x00$ ./a.out 
    with proper grammar, but the outcome is a piece of art,
    julien@ubuntu:~/c/0x00$ echo $?
    0
    julien@ubuntu:~/c/0x00$
    ```

- ***[6-size.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/6-size.c)*** 

    A C program that prints the size of various types on the computer it is
    compiled and run on.

    *Example*
    ```
    julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
    julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
    julien@ubuntu:~/c/0x00$ ./size32
    Size of a char: 1 byte(s)
    Size of an int: 4 byte(s)
    Size of a long int: 4 byte(s)
    Size of a long long int: 8 byte(s)
    Size of a float: 4 byte(s)
    julien@ubuntu:~/c/0x00$ ./size64
    Size of a char: 1 byte(s)
    Size of an int: 4 byte(s)
    Size of a long int: 8 byte(s)
    Size of a long long int: 8 byte(s)
    Size of a float: 4 byte(s)
    julien@ubuntu:~/c/0x00$ echo $?
    0
    julien@ubuntu:~/c/0x00$ 
    ```

- ***[100-intel](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/100-intel)***
 
    A script that generates the assembly code (Intel syntax) of a C code and
    save it in an output file.

    *Example*: if the C file is main.c, the output file should be main.s
 
- ***[101-quote.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c)***

    A C program that prints exactly **and that piece of art is useful" -
    Dora Korpar, 2015-10-19**, followed by a new line, to the standard error.

    *Example*
    ```
    julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
    julien@ubuntu:~/c/0x00$ ./quote
    and that piece of art is useful" - Dora Korpar, 2015-10-19
    julien@ubuntu:~/c/0x00$ echo $?
    1
    julien@ubuntu:~/c/0x00$ ./quote 2> q
    julien@ubuntu:~/c/0x00$ cat q
    and that piece of art is useful" - Dora Korpar, 2015-10-19
    julien@ubuntu:~/c/0x00$
    ```
