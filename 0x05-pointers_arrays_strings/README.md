
# 0x05. C - Pointers, arrays and strings

C Programming - Pointers, arrays and strings.

## Tasks

- ***[main.h]()***

    The header file containing all the function prototypes

- ***[0-reset_to_98.c]()***

    A function that takes a pointer to an int as parameter and
    updates the value it points to to 98.

    *Example*
    ```
    ...
    int n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    ...
    ```

    *Output*
    ```
    n=402
    n=98
    ```

- ***[1-swap.c]()***

    A function that swaps the values of two integers.

    *Example*
    ```
    ...
    int a = 98, b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    ...
    ```

    *Output*
    ```
    a=98, b=42
    a=42, b=98
    ```

- ***[2-strlen.c]()***

    A function that returns the length of a string.

    *Example*
    ```
    ...
    char *str = "My first strlen!";
    int len = _strlen(str);
    printf("%d\n", len);
    ...
    ```

    *Output*
    ```
    16
    ```

- ***[3-puts.c]()***

    A function that prints a string, followed by a new line, to `stdout`.

    *Example*
    ```
    ...
    char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    ...
    ```

    *Output*
    ```
    I do not fear computers. I fear the lack of them - Isaac Asimov
    ```

- ***[4-print_rev.c]()***

    A function that prints a string, in reverse, followed by a new line.

    *Example*
    ```
    ...
    char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    ...
    ```

    *Output*
    ```
    vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
    ```

- ***[5-rev_string.c]()***

    A function that reverses a string.

    *Example*
    ```
    ...
    char s[10] = "My School";
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    ...
    ```

    *Output*
    ```
    My School
    loohcS yM
    ```

- ***[6-puts2.c]()***

    A function that prints every other character of a string, starting with the first character

    *Example*
    ```
    ...
    char *str = "0123456789";
    puts2(str);
    ...
    ```

    *Output*
    ```
    02468
    ```

- ***[7-puts_half.c]()***

    A function that prints half of a string.

    *Example*
    ```
    ...
    char *str = "0123456789";
    puts_half(str);
    ...
    ```

    *Output*
    ```
    56789
    ```

- ***[8-print_array.c]()***

    A function that prints `n` elements of an array of integers.

    *Example*
    ```
    ...
    int array[5];
    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    ...
    ```

    *Output*
    ```
    98, 402, -198, 298, -1024
    ```

- ***[9-strcpy.c]()***

    A function that copies the string pointed to by `src`,
    including the terminating null byte (\0), to the buffer pointed to by `dest`.

    *Example*
    ```
    ...
    char s1[98];
    char *ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    ...
    ```

    *Output*
    ```
    First, solve the problem. Then, write the code
    First, solve the problem. Then, write the code
    ```
