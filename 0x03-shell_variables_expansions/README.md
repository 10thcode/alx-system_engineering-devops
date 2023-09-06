
# 0x03. Shell, Init Files, Variables and Expansions

In this project, how to set and unset environment variables were discussed. Also, how command expansion works in shell were discussed.

- ***[0-alias](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/0-alias)***

    A script that creates an alias.
    - Name: `ls`
    - Value: `rm *`

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ ls
    0-alias  file1  file2
    julien@ubuntu:/tmp/0x03$ source ./0-alias 
    julien@ubuntu:/tmp/0x03$ ls
    julien@ubuntu:/tmp/0x03$ \ls
    julien@ubuntu:/tmp/0x03$
    ```

- ***[1-hello_you](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/1-hello_you)***

    A script that prints `hello user`, where **user** is the current Linux user.

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ id
    uid=1000(julien) gid=1000(julien) groups=1000(julien),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),113(lpadmin),128(sambashare)
    julien@ubuntu:/tmp/0x03$ ./1-hello_you 
    hello julien
    julien@ubuntu:/tmp/0x03$ 
    ```

- ***[2-path](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/2-path)***

    A script that adds `/action` to the `PATH`. `/action` will be the last
    directory the shell looks into when looking for a program.

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ echo $PATH
    /home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
    julien@ubuntu:/tmp/0x03$ source ./2-path 
    julien@ubuntu:/tmp/0x03$ echo $PATH
    /home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/action
    julien@ubuntu:/tmp/0x03$ 
    ```

- ***[3-path](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/3-paths)***

    A script that counts the number of directories in the `PATH`.

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ echo $PATH
    /home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
    julien@ubuntu:/tmp/0x03$ . ./3-paths 
    11
    julien@ubuntu:/tmp/0x03$ 
    ```

- ***[4-global_variables](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/4-global_variables)***

    A script that lists environment variables.

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ source ./4-global_variables
    CC=gcc
    CDPATH=.:~:/usr/local:/usr:/
    CFLAGS=-O2 -fomit-frame-pointer
    COLORTERM=gnome-terminal
    CXXFLAGS=-O2 -fomit-frame-pointer
    DISPLAY=:0
    ...
    ```

- ***[5-local_variables](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/5-local_variables)***

    A script that lists all local variables and environment variables, and functions.

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ . ./5-local_variables
    BASH=/bin/bash
    BASHOPTS=checkwinsize:cmdhist:complete_fullquote:expand_aliases:extglob:extquote:force_fignore:histappend:interactive_comments:progcomp:promptvars:sourcepath
    BASH_ALIASES=()
    ...
    ```

- ***[6-create_local_variable](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/6-create_local_variable)***

    A script that creates a new local variable.
    - Name: `BEST`
    - Value: `School`

- ***[7-create_global_variable](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/7-create_global_variable)***

    A script that creates a new global variable.
    - Name: `Best`
    - Value: `School`

- ***[8-true_knowledge](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/8-true_knowledge)***

    A script that prints the result of the addition of `128` with the value stored in the environment variable `TRUEKNOWLEDGE`, followed by a new line.

    *Example*
    ```
    julien@production-503e7013:~$ export TRUEKNOWLEDGE=1209
    julien@production-503e7013:~$ ./8-true_knowledge | cat -e
    1337$
    julien@production-503e7013:~$
    ```

- ***[9-divide_and_rule](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/9-divide_and_rule)***

    A script that prints the result of `POWER` divided by `DIVIDE`, followed by a new line.
    - `POWER` and `DIVIDE` are environment variables

    *Example*
    ```
    julien@production-503e7013:~$ export POWER=42784
    julien@production-503e7013:~$ export DIVIDE=32
    julien@production-503e7013:~$ ./9-divide_and_rule | cat -e
    1337$
    julien@production-503e7013:~$
    ```

- ***[10-love_exponent_breath](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/10-love_exponent_breath)***

    A script that displays the result of `BREATH` to the power `LOVE`
    - `BREATH` and `LOVE` are environment variables

    *Example*
    ```
    julien@production-503e7013:~/$ export BREATH=4
    julien@production-503e7013:~/$ export LOVE=3
    julien@production-503e7013:~/$ ./10-love_exponent_breath
    64
    julien@production-503e7013:~/$
    ```

- ***[11-binary_to_decimal](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/11-binary_to_decimal)***

    A script that converts a number from base 2 to base 10.
    - The number in base 2 is stored in the environment variable `BINARY`

    *Example*
    ```
    julien@production-503e7013:~/$ export BINARY=10100111001
    julien@production-503e7013:~/$ ./11-binary_to_decimal
    1337
    julien@production-503e7013:~/$
    ```

- ***[12-combinations](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/12-combinations)***

    A script that prints all possible combinations of two letters, except `oo`.
    - Letters are lower cases, from `a` to `z`
    - One combination per line
    - The output will be alpha ordered, starting with `aa`

    *Example*
    ```
    julien@ubuntu:/tmp/0x03$ echo $((26 ** 2 -1))
    675
    julien@ubuntu:/tmp/0x03$ ./12-combinations | wc -l
    675
    julien@ubuntu:/tmp/0x03$ 
    julien@ubuntu:/tmp/0x03$ ./12-combinations | tail -303 | head -10
    oi
    oj
    ok
    ol
    om
    on
    op
    oq
    or
    os
    julien@ubuntu:/tmp/0x03$ 
    ```

- ***[13-print_float](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/13-print_float)***

    A script that prints a number with two decimal places, followed by a new line.
    - The number will be stored in the environment variable `NUM`.

    *Example*
    ```
    ubuntu@ip-172-31-63-244:~/0x03$ export NUM=0
    ubuntu@ip-172-31-63-244:~/0x03$ ./13-print_float
    0.00
    ubuntu@ip-172-31-63-244:~/0x03$ export NUM=98
    ubuntu@ip-172-31-63-244:~/0x03$ ./13-print_float
    98.00
    ubuntu@ip-172-31-63-244:~/0x03$ export NUM=3.14159265359
    ubuntu@ip-172-31-63-244:~/0x03$ ./13-print_float
    3.14
    ubuntu@ip-172-31-63-244:~/0x03$
    ```

- ***[100-decimal_to_hexadecimal](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/100-decimal_to_hexadecimal)***

    A script that converts a number from base 10 to base 16.
    - The number in base 10 is stored in the environment variable `DECIMAL`

    *Example*
    ```
    julien@production-503e7013:~/$ export DECIMAL=16
    julien@production-503e7013:~/$ ./100-decimal_to_hexadecimal
    10
    ```

- ***[101-rot13](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/101-rot13)***

    A script that encodes and decodes ASCII text using the rot13 encryption.

    *Example*
    ```
    julien@production-503e7013:~/shell/fun_with_the_shell$ cat quote
    "Everyone is a proponent of strong encryption."
    - Dorothy E. Denning
    julien@production-503e7013:~/shell/fun_with_the_shell$ ./101-rot13 < quote
    "Rirelbar vf n cebcbarag bs fgebat rapelcgvba."
    - Qbebgul R. Qraavat
    julien@production-503e7013:~/shell/fun_with_the_shell$
    ``` 

- ***[102-odd](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/102-odd)***

    A script that prints every other line from the input, starting with the first line.

    *Example*
    ```
    ubuntu@ip-172-31-63-244:/$ \ls -1
    bin
    boot
    dev
    etc
    home
    initrd.img
    ubuntu@ip-172-31-63-244:/$ \ls -1 | ./102-odd
    bin
    dev
    home
    ubuntu@ip-172-31-63-244:/$
    ```

- ***[103-water_and_stir](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x03-shell_variables_expansions/103-water_and_stir)***

    A shell script that adds the two numbers stored in the environment
    variables `WATER` and `STIR` and prints the result.
    - `WATER` is in base water
    - `STIR` is in base stir.
    - The result will be in base `bestchol` 

    *Example*
    ```
    julien@production-503e7013:~$ export WATER="ewwatratewa"
    julien@production-503e7013:~$ export STIR="ti.itirtrtr"
    julien@production-503e7013:~$ ./103-water_and_stir
    shtbeolhc
    julien@production-503e7013:~$
    ```
