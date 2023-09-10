
# 0x06. C - More pointers, arrays and strings

C Programming - Pointers, arrays and strings in details.

## Tasks

- ***[0-strcat.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/0-strcat.c)***

    A function that concatenates two strings.

    *Example*
    ```
    ...
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
    ptr = _strcat(s1, s2);
    printf("%s", ptr);
    ...
    ```

    *Output*
    ```
    Hello World!
    ```

- ***[1-strncat.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/1-strncat.c)***

    A function that concatenate `n` number of characters from two strings

    *Example*
    ```
    ...
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
    ptr = _strncat(s1, s2, 1);
    ...

    *Output*
    ```
    Hello W
    ```

- ***[2-strncpy.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/2-strncpy.c)***

    A function that copies n number of characters from a string `src` to `dest`.

    *Example*
    ```
    ...
    char *ptr;
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    ...
    ```

    *Output*
    ```
    First
    ```

- ***[3-strcmp.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/3-strcmp.c)***

    A function that compares two strings.

    *Example*
    ```
    ...
    char s1[] = "Hello";
    char s2[] = "World!";
    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    ...
    ```

    *Output*
    ```
    -15
    15
    0
    ```

- ***[4-rev_array.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/4-rev_array.c)***

    A function that reverses the content of an array of integers.

    *Example*
    ```
    ...
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    reverse_array(a, sizeof(a) / sizeof(int));
    ...
    ```

    *Output*
    ```
    1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    ```

- ***[5-string_toupper.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/5-string_toupper.c)***

    A function that changes all lowercase letters of a string to uppercase.

    *Example*
    ```
    ...
    char str[] = "Look up!\n";
    char *ptr = string_toupper(str);
    printf("%s", ptr);
    ...
    ```

    *Output*
    ```
    LOOK UP!
    ```

- ***[6-cap_string.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/6-cap_string.c)***

    A function that capitalizes all words of a string.

    *Example*
    ```
    ...
    char str[] = "Expect the best. Prepare for the worst.\n";
    char *ptr = cap_string(str);
    printf("%s", ptr);
    ...
    ```

    *Output*
    ```
    Expect The Best. Prepare For The Worst.
    ```

- ***[7-leet.c]https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/7-leet.c()***

    A function that encodes a string into 1337.
    - Letters a and A should be replaced by 4
    - Letters e and E should be replaced by 3
    - Letters o and O should be replaced by 0
    - Letters t and T should be replaced by 7
    - Letters l and L should be replaced by 1

    *Example*
    ```
    ...
    char s[] = "Expect the best. Prepare for the worst.\n";
    char *p = leet(s);
    printf("%s", p);
    ...
    ```

    *Output*
    ```
    3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7.
    ```

- ***[100-rot13.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/100-rot13.c)***

    A function that encodes a string using rot13

    *Example*
    ```
    ...
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p = rot13(s);
    printf("%s", p);
    ...
    ```

    *Output*
    ```
    EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
    ```
