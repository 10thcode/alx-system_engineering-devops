
# 0x02. Shell, I/O Redirections and filters

This project is an introduction to shell redirection.
How to redirect outputs and inputs were discussed in this project.

## Tasks

- ***[0-hello_world](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/0-hello_world)***

    A script that prints *“Hello, World”*, followed by a new line to the standard output.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ./0-hello_world 
    Hello, World
    julien@ubuntu:/tmp/h$ ./0-hello_world | cat -e
    Hello, World$
    julien@ubuntu:/tmp/h$ 
    ```

- ***[1-confused_smiley](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/1-confused_smiley)***

    A script that displays a confused smiley **"(Ôo)'**

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ./1-confused_smiley 
    "(Ôo)'
    julien@ubuntu:/tmp/h$ 
    ```

- ***[2-hellofile](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/2-hellofile)***

    A script that display the content of the `/etc/passwd` file.

    *Example*
    ```
    $ ./2-hellofile
    ##
    # User Database
    #
    # Note that this file is consulted directly only when the system is running
    # in single-user mode. At other times this information is provided by
    # Open Directory.
    #
    # See the opendirectoryd(8) man page for additional information about
    # Open Directory.
    ##
    nobody:*:-2:-2:Unprivileged User:/var/empty:/usr/bin/false
    root:*:0:0:System Administrator:/var/root:/bin/sh
    daemon:*:1:1:System Services:/var/root:/usr/bin/false
    _uucp:*:4:4:Unix to Unix Copy Protocol:/var/spool/uucp:/usr/sbin/uucico
    _taskgated:*:13:13:Task Gate Daemon:/var/empty:/usr/bin/false
    _networkd:*:24:24:Network Services:/var/networkd:/usr/bin/false
    _installassistant:*:25:25:Install Assistant:/var/empty:/usr/bin/false
    _lp:*:26:26:Printing Services:/var/spool/cups:/usr/bin/false
    _postfix:*:27:27:Postfix Mail Server:/var/spool/postfix:/usr/bin/false
    _scsd:*:31:31:Service Configuration Service:/var/empty:/usr/bin/false
    _ces:*:32:32:Certificate Enrollment Service:/var/empty:/usr/bin/false
    _mcxalr:*:54:54:MCX AppLaunch:/var/empty:/usr/bin/false
    _krbfast:*:246:-2:Kerberos FAST Account:/var/empty:/usr/bin/false
    $
    ```

- ***[3-twofiles](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/3-twofiles)***

    A script that display the content of `/etc/passwd` and `/etc/hosts`

    *Example*
    ```
    $ ./3-twofiles
    ##
    # User Database
    #
    # Note that this file is consulted directly only when the system is running
    # in single-user mode. At other times this information is provided by
    # Open Directory.
    #
    # See the opendirectoryd(8) man page for additional information about
    # Open Directory.
    ##
    nobody:*:-2:-2:Unprivileged User:/var/empty:/usr/bin/false
    root:*:0:0:System Administrator:/var/root:/bin/sh
    daemon:*:1:1:System Services:/var/root:/usr/bin/false
    ##
    # Host Database
    #
    # localhost is used to configure the loopback interface
    # when the system is booting. Do not change this entry.
    ##
    127.0.0.1   localhost
    255.255.255.255 broadcasthost
    ::1 localhost
    $
    ```

- ***[4-lastlines](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/4-lastlines)***

    A script that display the last 10 lines of /etc/passwd

    *Example*
    ```
    $ ./4-lastlines
    _assetcache:*:235:235:Asset Cache Service:/var/empty:/usr/bin/false
    _coremediaiod:*:236:236:Core Media IO Daemon:/var/empty:/usr/bin/false
    _launchservicesd:*:239:239:_launchservicesd:/var/empty:/usr/bin/false
    _iconservices:*:240:240:IconServices:/var/empty:/usr/bin/false
    _distnote:*:241:241:DistNote:/var/empty:/usr/bin/false
    _nsurlsessiond:*:242:242:NSURLSession Daemon:/var/db/nsurlsessiond:/usr/bin/false
    _nsurlstoraged:*:243:243:NSURLStorage Daemon:/var/empty:/usr/bin/false
    _displaypolicyd:*:244:244:Display Policy Daemon:/var/empty:/usr/bin/false
    _astris:*:245:245:Astris Services:/var/db/astris:/usr/bin/false
    _krbfast:*:246:-2:Kerberos FAST Account:/var/empty:/usr/bin/false
    ```

- ***[5-firstlines](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/5-firstlines)***

    A script that display the first 10 lines of `/etc/passwd`

    *Example*
    ```
    $ ./5-firstlines
    ##
    # User Database
    #
    # Note that this file is consulted directly only when the system is running
    # in single-user mode. At other times this information is provided by
    # Open Directory.
    #
    # See the opendirectoryd(8) man page for additional information about
    # Open Directory.
    ##
    $
    ```

- ***[6-third_line](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/6-third_line)***

    A script that displays the third line of the file *iacta*.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ cat iacta 
    Alea iacta est

    Alea iacta est ("The die is cast") is a Latin phrase attributed by Suetonius
    (as iacta alea est) to Julius Caesar on January 10, 49 BC
    as he led his army across the Rubicon river in Northern Italy. With this step,
    he entered Italy at the head of his army in defiance of the Senate and began
    his long civil war against Pompey and the Optimates. The phrase has been
    adopted in Italian (Il dado è tratto), Romanian (Zarurile au fost aruncate),
    Spanish (La suerte está echada), French (Les dés sont jetés), Portuguese (A
    sorte está lançada), Dutch (De teerling is geworpen),
    German (Der Würfel ist gefallen), Hungarian (A kocka el van vetve) and many other languages to
    indicate that events have passed a point of no return.

    Read more: https://en.wikipedia.org/wiki/Alea_iacta_est
    julien@ubuntu:/tmp/h$ ./6-third_line 
    Alea iacta est ("The die is cast") is a Latin phrase attributed by Suetonius
    julien@ubuntu:/tmp/h$ 
    ```

- ***[7-file](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/7-file)***

    A shell script that creates a file named exactly `\*\'Best School\'\*$\?\*\*\*\*\*:)`
    containing the text `Best School` ending by a new line.

    *Example*
    ```
    julien@ubuntu:~/shell$ ls && ./7-file && ls -l && cat -e \\*
    0-mac_and_cheese 7-file 7-file~ Makefile
    total 20
    -rwxrw-r-- 1 julien julien 79 Jan 20 06:24 0-mac_and_cheese
    -rwxrw-r-- 1 julien julien 90 Jan 20 06:40 7-file
    -rwxrw-r-- 1 julien julien 69 Jan 20 06:37 7-file~
    -rw-rw-r-- 1 julien julien 14 Jan 20 06:38 Makefile
    -rw-rw-r-- 1 julien julien 17 Jan 20 06:40 '\*\\'"Best School"\'\\*$\?\*\*\*\*\*:)'
    Best School$
    julien@ubuntu:~/shell$
    ```

- ***[8-cwd_state](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/8-cwd_state)***

    A script that writes into the file `ls_cwd_content` the result of the command `ls -la`. If the file `ls_cwd_content` already exists, it will be overwritten. If the file `ls_cwd_content` does not exist, it creates it.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -la
    total 20
    drwxrwxr-x  2 julien julien 4096 Sep 20 18:18 .
    drwxrwxrwt 13 root   root   4096 Sep 20 18:18 ..
    -rwxrw-r--  1 julien julien   36 Sep 20 18:18 8-cwd_state
    -rw-rw-r--  1 betty  julien   23 Sep 20 14:25 hello
    -rw-rw-r--  1 julien julien  926 Sep 20 17:52 iacta
    julien@ubuntu:/tmp/h$ ./8-cwd_state 
    julien@ubuntu:/tmp/h$ ls -la
    total 24
    drwxrwxr-x  2 julien julien 4096 Sep 20 18:18 .
    drwxrwxrwt 13 root   root   4096 Sep 20 18:18 ..
    -rwxrw-r--  1 julien julien   36 Sep 20 18:18 8-cwd_state
    -rw-rw-r--  1 betty  julien   23 Sep 20 14:25 hello
    -rw-rw-r--  1 julien julien  926 Sep 20 17:52 iacta
    -rw-rw-r--  1 julien julien  329 Sep 20 18:18 ls_cwd_content
    julien@ubuntu:/tmp/h$ cat ls_cwd_content 
    total 20
    drwxrwxr-x  2 julien julien 4096 Sep 20 18:18 .
    drwxrwxrwt 13 root   root   4096 Sep 20 18:18 ..
    -rwxrw-r--  1 julien julien   36 Sep 20 18:18 8-cwd_state
    -rw-rw-r--  1 betty  julien   23 Sep 20 14:25 hello
    -rw-rw-r--  1 julien julien  926 Sep 20 17:52 iacta
    -rw-rw-r--  1 julien julien    0 Sep 20 18:18 ls_cwd_content
    julien@ubuntu:/tmp/h$ 
    ```

- ***[9-duplicate_last_line](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/9-duplicate_last_line)***

    A script that duplicates the last line of the file `iacta`.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ cat iacta 
    Alea iacta est

    Alea iacta est ("The die is cast") is a Latin phrase attributed by Suetonius
    (as iacta alea est) to Julius Caesar on January 10, 49 BC
    ...
    Read more: https://en.wikipedia.org/wiki/Alea_iacta_est
    julien@ubuntu:/tmp/h$ ./9-duplicate_last_line 
    julien@ubuntu:/tmp/h$ cat iacta 
    Alea iacta est

    Alea iacta est ("The die is cast") is a Latin phrase attributed by Suetonius
    (as iacta alea est) to Julius Caesar on January 10, 49 BC
    ...
    Read more: https://en.wikipedia.org/wiki/Alea_iacta_est
    Read more: https://en.wikipedia.org/wiki/Alea_iacta_est
    julien@ubuntu:/tmp/h$ 
    ```

- ***[10-no_more_js](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/10-no_more_js)***

    A script that deletes all the regular files (not the directories) with a `.js` extension that are present in the current directory and all its subfolders.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -lR
    .:
    total 24
    -rwxrw-r-- 1 julien julien   49 Sep 20 18:29 10-no_more_js
    drwxrwxr-x 2 julien julien 4096 Sep 20 18:23 dir1
    drwxrwxr-x 2 julien julien 4096 Sep 20 18:24 dir.js
    -rw-rw-r-- 1 betty  julien   23 Sep 20 14:25 hello
    -rw-rw-r-- 1 julien julien  982 Sep 20 18:21 iacta
    -rw-rw-r-- 1 julien julien  329 Sep 20 18:18 ls_cwd_content
    -rw-rw-r-- 1 julien julien    0 Sep 20 18:23 main.js
    ...
    julien@ubuntu:/tmp/h$ 
    ```

- ***[11-directories](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/11-directories)***

    A script that counts the number of directories and sub-directories in the current directory, including hidden directories, excluding current and parent directories.

    *Example*
    ```
    julien@production-503e7013:~/shell/fun_with_the_shell$ ls -lRa
    .:
    total 32
    drwxrwxr-x 3 julien julien 4096 Jan 20 03:53 .
    drwxrwxr-x 3 julien julien 4096 Jan 20 02:58 ..
    -rwxr--r-- 1 julien julien 43 Jan 20 02:59 0-commas
    -rwxr--r-- 1 julien julien 47 Jan 20 02:50 1-empty_casks
    -rwxrw-r-- 1 julien julien 68 Jan 20 03:35 2-gifs
    -rwxrw-r-- 1 julien julien 47 Jan 20 03:53 3-directories
    -rw-rw-r-- 1 julien julien 14 Jan 20 03:35 Makefile
    drwxrwxr-x 4 julien julien 4096 Jan 20 03:42 test_dir
    ...
    julien@production-503e7013:~/shell/fun_with_the_shell$
    ```

- ***[12-newest_files](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/12-newest_files)***

    A script that displays the 10 newest files in the current directory.
    - One file per line
    - Sorted from the newest to the oldest

    *Example*
    ```
    alex@ubuntu:/tmp$ ls -l
    total 7
    -rwxr-xr-x 1 501 dialout  32 Sep 27 23:51 0-hello_world
    -rwxr-xr-x 1 501 dialout  28 Sep 27 23:54 1-confused_smiley
    -rw-r--r-- 1 501 dialout  19 Sep 27 23:51 README.md
    ...
    alex@ubuntu:/tmp$ ./12-newest_files 
    12-newest_files
    11-directories
    ...
    alex@ubuntu:/tmp$
    ```

- ***[13-unique](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/13-unique)***

    A script that takes a list of words as input and prints only words that appear exactly once.
    - Input format: One line, one word
    - Output format: One line, one word
    - Words should be sorted

    *Example*
    ```
    julien@ubuntu:/tmp/0x02$ cat list 
    C#
    C
    Javascript
    Perl
    PHP
    ...
    julien@ubuntu:/tmp/0x02$ cat list | ./13-unique 
    C
    C++
    Go
    julien@ubuntu:/tmp/0x02$ 
    ```

- ***[14-findthatword](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/14-findthatword)***

    A script that display lines containing the pattern “root” from the file `/etc/passwd`

    *Example*
    ```
    $ ./14-findthatword
    root:*:0:0:System Administrator:/var/root:/bin/sh
    daemon:*:1:1:System Services:/var/root:/usr/bin/false
    _cvmsroot:*:212:212:CVMS Root:/var/empty:/usr/bin/false
    $
    ```
- ***[15-countthatword](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/15-countthatword)***

    A script that display the number of lines that contain the pattern “bin” in the file
    `/etc/passwd`

    *Exampe*
    ```
    $ ./15-countthatword
    81
    $
    ```

- ***[16-whatsnext](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/16-whatsnext)***

    A script that display lines containing the pattern “root” and 3 lines
    after them in the file `/etc/passwd`.

    *Example*
    ```
    $ ./16-whatsnext
    root:*:0:0:System Administrator:/var/root:/bin/sh
    daemon:*:1:1:System Services:/var/root:/usr/bin/false
    _uucp:*:4:4:Unix to Unix Copy Protocol:/var/spool/uucp:/usr/sbin/uucico
    _taskgated:*:13:13:Task Gate Daemon:/var/empty:/usr/bin/false
    _networkd:*:24:24:Network Services:/var/networkd:/usr/bin/false
    --
    _cvmsroot:*:212:212:CVMS Root:/var/empty:/usr/bin/false
    _usbmuxd:*:213:213:iPhone OS Device Helper:/var/db/lockdown:/usr/bin/false
    _dovecot:*:214:6:Dovecot Administrator:/var/empty:/usr/bin/false
    _dpaudio:*:215:215:DP Audio:/var/empty:/usr/bin/false
    $
    ```

- ***[17-hidethisword](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/17-hidethisword)***

    A script that display all the lines in the file `/etc/passwd`
    that do not contain the pattern “bin”.

    *Example*
    ```
    $ ./17-hidethisword
    ##
    # User Database
    #
    # Note that this file is consulted directly only when the system is running
    # in single-user mode. At other times this information is provided by
    # Open Directory.
    #
    # See the opendirectoryd(8) man page for additional information about
    # Open Directory.
    ##
    $
    ```

- ***[18-letteronly](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/18-letteronly)***

    A script that display all lines of the file `/etc/ssh/sshd_config` starting
    with a letter.

    *Example*
    ```
    $ ./18-letteronly
    SyslogFacility AUTHPRIV
    AuthorizedKeysFile  .ssh/authorized_keys
    UsePrivilegeSeparation sandbox # Default for new installations.
    AcceptEnv LANG LC_*
    Subsystem   sftp    /usr/libexec/sftp-server
    $
    ```

- ***[19-AZ](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/19-AZ)***

    A script that replace all characters `A` and `c` from input to
    `Z` and `e` respectively.

    *Example*
    ```
    julien@ubuntu:/tmp/0x02$ echo 'Replace all characters `A` and `c` from input to `Z` and `e`.' | ./19-AZ 
    Replaee all eharaeters `Z` and `e` from input to `Z` and `e`.
    julien@ubuntu:/tmp/0x02$ 
    ```

- ***[20-hiago](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/20-hiago)***

    A script that removes all letters `c` and `C` from input.

    *Example*
    ```
    julien@ubuntu:/tmp/0x02$ echo Chicago | ./20-hiago 
    hiago
    julien@ubuntu:/tmp/0x02$ 
    ```

- ***[21-reverse](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/21-reverse)***

    A script that reverse its input.

    *Example*
    ```
    julien@ubuntu:/tmp/0x02$ echo "Reverse" | ./21-reverse 
    esreveR
    julien@ubuntu:/tmp/0x02$ 
    ```

- ***[22-users_and_homes](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/22-users_and_homes)***

    A script that displays all users and their home directories, sorted by users.
    - Based on the the `/etc/passwd` file

    *Example*
    ```
    julien@ubuntu:/tmp/0x02$ ./22-users_and_homes 
    _apt:/nonexistent
    avahi-autoipd:/var/lib/avahi-autoipd
    ...
    ```

- ***[100-empty_casks](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/100-empty_casks)***

    A command that finds all empty files and directories in the current
    directory and all sub-directories.

- ***[101-gif](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/101-gifs)***

    A script that lists all the files with a `.gif` extension in
    the current directory and all its sub-directories.

- ***[102-acrostic](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/102-acrostic)***

    A script that decodes acrostics that use the first letter of each line.

    *Example*
    ```
    julien@ubuntu:/tmp/0x02$ cat An\ Acrostic 
    Elizabeth it is in vain you say
    Love not"—thou sayest it in so sweet a way:
    In vain those words from thee or L.E.L.
    Zantippe's talents had enforced so well:
    Ah! if that language from thy heart arise,
    Breath it less gently forth—and veil thine eyes.
    Endymion, recollect, when Luna tried
    To cure his love—was cured of all beside—
    His follie—pride—and passion—for he died.
    julien@ubuntu:/tmp/0x02$ ./102-acrostic < An\ Acrostic 
    ELIZABETH
    julien@ubuntu:/tmp/0x02$
    ```

- ***[103-the_biggest_fan](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x02-shell_redirections/103-the_biggest_fan)***

    A script that parses web servers logs in TSV format as input and
    displays the 11 hosts or IP addresses which did the most requests.
