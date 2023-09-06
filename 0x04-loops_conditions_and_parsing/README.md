
# 0x04. Loops, conditions and parsing

How to work with various loops like for loop and while loop
were introduced in this project.
How to parse data into useful infomation was also discussed.

## Tasks

- ***[0-RSA_public_key.pub](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/0-RSA_public_key.pub)***

    My public SSH key

- ***[1-for_best_school](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/1-for_best_school)***

    A Bash script that displays **Best School** 10 times.

    *Example*
    ```
    sylvain@ubuntu$ ./1-for_best_school 
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    sylvain@ubuntu$ 
    ```

- ***[2-while_best_school](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/2-while_best_school)***

    A Bash script that displays **Best School** 10 times using `while` loop.

    *Example*
    ```
    sylvain@ubuntu$ ./2-while_best_school
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    sylvain@ubuntu$ 
    ```

- ***[3-until_best_school](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/3-until_best_school)***

    A Bash script that displays **Best School** 10 times using `unitil` loop.

    *Example*
    ```
    sylvain@ubuntu$ ./3-until_best_school
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    sylvain@ubuntu$ 
    ```

- ***[4-if_9_say_hi](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/4-if_9_say_hi)***

    A Bash script that displays **Best School** 10 times,
    but for the 9th iteration, displays **Best School** and then **Hi** on a new line.

    *Example*
    ```
    sylvain@ubuntu$ ./4-if_9_say_hi
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Best School
    Hi
    Best School
    sylvain@ubuntu$ 
    ```

- ***[5-4_bad_luck_8_is_your_chance](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/5-4_bad_luck_8_is_your_chance)***

    A Bash script that loops from 1 to 10 and:
    - displays **bad luck** for the 4th loop iteration
    - displays **good luck** for the 8th loop iteration
    - displays **Best School** for the other iterations

    *Example*
    ```
    sylvain@ubuntu$ ./5-4_bad_luck_8_is_your_chance
    Best School
    Best School
    Best School
    bad luck
    Best School
    Best School
    Best School
    good luck
    Best School
    Best School
    sylvain@ubuntu$ 
    ```

- ***[6-superstitious_numbers](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/6-superstitious_numbers)***

    A Bash script that displays numbers from 1 to 20 and:
    - displays **4** and then **bad luck from China** for the 4th loop iteration
    - displays **9** and then **bad luck from Japan** for the 9th loop iteration
    - displays **17** and then **bad luck from Italy** for the 17th loop iteration

    *Example*
    ```
    sylvain@ubuntu$ ./6-superstitious_numbers
    1
    ...
    4
    bad luck from China
    5
    ...
    9
    bad luck from Japan
    10
    ...
    17
    bad luck from Italy
    18
    19
    20
    sylvain@ubuntu$ 
    ```

- ***[7-clock](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/7-clock)***

    A Bash script that displays the time for 12 hours and 59 minutes:
    - display hours from 0 to 12
    - display minutes from 1 to 59

    *Example*
    ```
    sylvain@ubuntu$ ./7-clock | head -n 70
    Hour: 0
    1
    2
    ...
    58
    59
    Hour: 1
    1
    2
    ...
    sylvain@ubuntu$ 
    ```

- ***[8-for_ls](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/8-for_ls)***

    A Bash script that displays:
    - The content of the current directory in a list format
    - Where only the part of the name after the first dash is displayed

    *Example*
    ```
    sylvain@ubuntu$ ls
    100-read_and_cut              1-for_best_school         6-superstitious_numbers
    101-tell_the_story_of_passwd  2-while_best_school       7-clock
    102-lets_parse_apache_logs    3-until_best_school       8-for_ls
    103-dig_the-data              4-if_9_say_hi                  9-to_file_or_not_to_file
    10-fizzbuzz                   5-4_bad_luck_8_is_your_chance
    sylvain@ubuntu$  ./8-for_ls
    read_and_cut
    tell_the_story_of_passwd
    lets_parse_apache_logs
    dig_the-data
    fizzbuzz
    for_best_school
    while_best_school
    until_best_school
    if_9_say_hi
    4_bad_luck_8_is_your_chance
    superstitious_numbers
    clock
    for_ls
    to_file_or_not_to_file
    sylvain@ubuntu$ 
    ```

- ***[9-to_file_or_not_to_file](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/9-to_file_or_not_to_file)***

    A Bash script that gives you information about the school file.
    - Check if the file exists and print:
        - if the file exists: **school file exists**
        - if the file does not exist: **school file does not exist**

    - Check if the file exists, print: 
        - if the file is empty: **school file is empty**
        - if the file is not empty: **school file is not empty**
        - if the file is a regular file: **school is a regular file**
        - if the file is not a regular file: (nothing)

- ***[10-fizzbuzz](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/10-fizzbuzz)***

    A Bash script that displays numbers from 1 to 100.
    - Displays FizzBuzz when the number is a multiple of 3 and 5
    - Displays Fizz when the number is multiple of 3
    - Displays Buzz when the number is a multiple of 5
    - Otherwise, displays the number

    *Example*
    ```
    sylvain@ubuntu$ ./10-fizzbuzz | head -20
    1
    2
    Fizz
    4
    Buzz
    Fizz
    7
    8
    Fizz
    Buzz
    11
    Fizz
    13
    14
    FizzBuzz
    16
    17
    Fizz
    19
    Buzz
    sylvain@ubuntu$ 
    ```

- ***[100-read_and_cut](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/100-read_and_cut)***

    A Bash script that displays the content of the file `/etc/passwd`.
    The script only displays:
    - username
    - user id
    - Home directory path for the user

    *Example*
    ```
    sylvain@ubuntu$ cat /etc/passwd
    root:x:0:0:root:/root:/bin/bash
    daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
    bin:x:2:2:bin:/bin:/usr/sbin/nologin
    sys:x:3:3:sys:/dev:/usr/sbin/nologin
    sync:x:4:65534:sync:/bin:/bin/sync
    ...
    sylvain@ubuntu$ ./100-read_and_cut
    root:0:/root
    daemon:1:/usr/sbin
    bin:2:/bin
    sys:3:/dev
    sync:4:/bin
    ...
    sylvain@ubuntu$ 
    ```

- ***[101-tell_the_story_of_passwd](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/101-tell_the_story_of_passwd)***

    A Bash script that displays the content of the file `/etc/passwd`,
    using the `while` loop + IFS.
    - *Format: The user USERNAME is part of the GROUP_ID gang, lives in
    HOME_DIRECTORY and rides COMMAND/SHELL. USER ID's place is protected
    by the passcode PASSWORD, more info about the user here: USER ID INFO* 

    *Example*
    ```
    sylvain@ubuntu$ ./101-tell_the_story_of_passwd
    The user root is part of the 0 gang, lives in /root and rides /bin/bash. 0's place is protected by the passcode x, more info about the user here: root
    ...
    sylvain@ubuntu$
    ```

- ***[102-lets_parse_apache_logs](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/102-lets_parse_apache_logs)***

    A Bash script that displays the visitor IP along with the
    **HTTP status code** from an [Apache log file](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/apache-access.log).
    - *Format: IP HTTP_CODE*

    *Example*
    ```
    sylvain@ubuntu$ ./102-lets_parse_apache_logs | tail -n 10
    185.130.5.207 301
    185.130.5.207 301
    91.224.140.223 200
    62.210.142.23 304
    92.222.20.166 304
    180.76.15.19 200
    2.1.201.36 304
    198.58.99.82 304
    50.116.30.23 304
    209.133.111.211 200
    sylvain@ubuntu$
    ```

- ***[103-dig_the-data](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x04-loops_conditions_and_parsing/103-dig_the-data)***

    A Bash script that groups visitors by IP and HTTP status code, and displays this data.

    - The exact format will be `OCCURENCE_NUMBER IP HTTP_CODE`
    - Ordered from the greatest to the lowest number of occurrences

    *Example*
    ```
    sylvain@ubuntu$ ./103-dig_the-data | head -n 10
        141 130.0.236.153 200
        140 62.210.250.66 200
        117 103.243.26.232 404
        67 195.154.172.143 200
        60 78.154.190.29 200
        45 195.154.172.59 200
        41 62.210.248.185 200
        41 167.114.156.198 200
        36 2.1.201.36 304
        36 195.154.172.53 200
    sylvain@ubuntu$
    ``` 
