
# 0x05. Processes and signals

Introduction to Linux processes and signals.

## Tasks

- ***[0-what-is-my-pid](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/0-what-is-my-pid)***

    A Bash script that displays its own PID.

    *Example*
    ```
    sylvain@ubuntu$ ./0-what-is-my-pid
    4120
    sylvain@ubuntu$
    ```

- ***[1-list_your_processes](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/1-list_your_processes)***

    A Bash script that displays a list of currently running processes.
    - Show all processes, for all users, including those which might not have a TTY
    - Display in a user-oriented format
    - Show process hierachy

    *Example*
    ```
    ylvain@ubuntu$ ./1-list_your_processes
    USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
    root         2  0.0  0.0      0     0 ?        S    Feb13   0:00 [kthreadd]
    root         3  0.0  0.0      0     0 ?        S    Feb13   0:00  \_ [ksoftirqd/0]
    root         4  0.0  0.0      0     0 ?        S    Feb13   0:00  \_ [kworker/0:0]
    ...
    sylvain@ubuntu$
    ```

- ***[2-show_your_bash_pid](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/2-show_your_bash_pid)***

    A Bash script that displays lines containing the **bash** word,
    thus allowing you to easily get the PID of your Bash process.

    *Example*
    ```
    sylvain@ubuntu$ sylvain@ubuntu$ ./2-show_your_bash_pid
    sylvain   4404  0.0  0.7  21432  4000 pts/0    Ss   03:32   0:00          \_ -bash
    sylvain   4477  0.0  0.2  11120  1352 pts/0    S+   03:40   0:00              \_ bash ./2-show_your_bash_PID
    sylvain   4479  0.0  0.1  10460   912 pts/0    S+   03:40   0:00                  \_ grep bash
    sylvain@ubuntu$ 
    ```

- ***[3-show_your_bash_pid_made_easy](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/3-show_your_bash_pid_made_easy)***

    A Bash script that displays the PID, along with the process name,
    of processes whose name contain the word **bash**.

    *Example*
    ```
    sylvain@ubuntu$ ./3-show_your_bash_pid_made_easy
    4404 bash
    4557 bash
    sylvain@ubuntu$ 
    ```

- ***[4-to_infinity_and_beyond](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/4-to_infinity_and_beyond)***

    A Bash script that displays **To infinity** and beyond indefinitely. 

    *Example*
    ```
    sylvain@ubuntu$ ./4-to_infinity_and_beyond
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    ^C
    sylvain@ubuntu$ 
    ```

- ***[5-dont_stop_me_now](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/5-dont_stop_me_now)***

    A Bash script that stops `4-to_infinity_and_beyond` process using the `kill` command.

    *Example*
    ```
    sylvain@ubuntu$ ./4-to_infinity_and_beyond
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    Terminated
    sylvain@ubuntu$ 
    ```

- ***[6-stop_me_if_you_can](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/6-stop_me_if_you_can)***

    A Bash script that stops `4-to_infinity_and_beyond` process using `pgrep` and `pkill`
    command.

    *Example*
    ```
    sylvain@ubuntu$ ./4-to_infinity_and_beyond
    To infinity and beyond
    To infinity and beyond
    Terminated
    sylvain@ubuntu$ 
    ```

- ***[7-highlander](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/7-highlander)***

    A Bash script that displays:
    - **To infinity** and beyond indefinitely
    - **I am invincible!!!** when receiving a`SIGTERM` signal

    *Example*
    ```
    sylvain@ubuntu$ ./7-highlander
    To infinity and beyond
    To infinity and beyond
    I am invincible!!!
    To infinity and beyond
    I am invincible!!!
    To infinity and beyond
    To infinity and beyond
    I am invincible!!!
    To infinity and beyond
    ^C
    sylvain@ubuntu$ 
    ```

- ***[8-beheaded_process](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/8-beheaded_process)***

    A Bash script that kills the process `7-highlander`.

    *Example*
    ```
    sylvain@ubuntu$ ./7-highlander 
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    To infinity and beyond
    Killed
    sylvain@ubuntu$ 
    ```

- ***[100-process_and_pid_file](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/100-process_and_pid_file)***

    A Bash script that:
    - Creates the file /var/run/myscript.pid containing its PID
    - Displays To infinity and beyond indefinitely
    - Displays I hate the kill command when receiving a SIGTERM signal
    - Displays Y U no love me?! when receiving a SIGINT signal
    - Deletes the file /var/run/myscript.pid and terminates
    itself when receiving a SIGQUIT or SIGTERM signal

    - I

- ***[101-manage_my_process](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/101-manage_my_process)***

    A Bash (init) script that manages `manage_my_process`.

    - ***[manage_my_process](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/manage_my_process):*** A Bash script that
    indefinitely writes **I am alive!** to the file `/tmp/my_process`

    **Usage**: `sudo ./101-manage_my_process {start|stop|restart}`

- ***[102-zombie.c](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x05-processes_and_signals/102-zombie.c)***

    A C program that creates 5 zombie processes.

    *Example*
    ```
    sylvain@ubuntu$ gcc 102-zombie.c -o zombie
    sylvain@ubuntu$ ./zombie 
    Zombie process created, PID: 13527
    Zombie process created, PID: 13528
    Zombie process created, PID: 13529
    Zombie process created, PID: 13530
    Zombie process created, PID: 13531
    ^C
    sylvain@ubuntu$
    ```
