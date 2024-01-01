
# 0x01. Shell, permissions

Adding and removing file permissions on Linux.

## Tasks

 - ***[0-iam_betty](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/0-iam_betty)***

    A script that switches the current user to the user betty.

- ***[1-who_am_i](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/1-who_am_i)***

    A script that prints the effective username of the current user.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ./1-who_am_i
    julien
    julien@ubuntu:/tmp/h$ 
    ```

- ***[2-groups](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/2-groups)***

    A script that prints all the groups the current user is part of.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ./2-groups
    julien adm cdrom sudo dip plugdev lpadmin sambashare
    julien@ubuntu:/tmp/h$ 
    ```

- ***[3-new_owner](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/3-new_owner)***

    A script that changes the owner of the file `hello` to the user `betty`.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 4
    -rwxrw-r-- 1 julien julien 30 Sep 20 14:23 3-new_owner
    -rw-rw-r-- 1 julien julien  0 Sep 20 14:18 hello
    julien@ubuntu:/tmp/h$ sudo ./3-new_owner 
    julien@ubuntu:/tmp/h$ ls -l
    total 4
    -rwxrw-r-- 1 julien julien 30 Sep 20 14:23 3-new_owner
    -rw-rw-r-- 1 betty  julien  0 Sep 20 14:18 hello
    julien@ubuntu:/tmp/h$
    ```

- ***[4-empty](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/4-empty)***

    A script that creates an empty file called `hello`.

- ***[5-execute](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/5-execute)***

    A script that adds execute permission to the owner of the file `hello`.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 28 Sep 20 14:26 5-execute
    -rw-rw-r-- 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ ./hello
    bash: ./hello: Permission denied
    julien@ubuntu:/tmp/h$ ./5-execute 
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 28 Sep 20 14:26 5-execute
    -rwxrw-r-- 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[6-multiple_permissions](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/6-multiple_permissions)***

    A script that adds execute permission to the owner and the group owner, and read permission to other users, to the file `hello`.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 36 Sep 20 14:31 6-multiple_permissions
    -r--r----- 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ ./6-multiple_permissions 
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 36 Sep 20 14:31 6-multiple_permissions
    -r-xr-xr-- 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```
- ***[7-everybody](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/7-everybody)***

    A script that adds execution permission to the owner, the group owner
    and the other users, to the file `hello` in the current working directory.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 28 Sep 20 14:35 7-everybody
    -rw-r----- 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ ./7-everybody 
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 28 Sep 20 14:35 7-everybody
    -rwxr-x--x 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$
    ```

- ***[8-James_Bond](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/8-James_Bond)*** 

    A script that sets the permission to the file `hello` as follows:
    - Owner: no permission at all.
    - Group: no permission at all.
    - Other users: all the permissions.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 28 Sep 20 14:40 8-James_Bond
    -rwxr-x--x 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ ./8-James_Bond 
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 28 Sep 20 14:40 8-James_Bond
    -------rwx 1 julien julien 23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[9-John_Doe](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/9-John_Doe)***

    A script that sets the mode of the file `hello` to
    `-rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello`

- ***[10-mirror_permissions](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/10-mirror_permissions)***

    A script that sets the mode of the file `hello` the same as `olleh`’s mode in the current working directory.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 42 Sep 20 14:45 10-mirror_permissions
    -rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello
    -rw-rw-r-- 1 julien julien  0 Sep 20 14:43 olleh
    julien@ubuntu:/tmp/h$ ./10-mirror_permissions 
    julien@ubuntu:/tmp/h$ ls -l
    total 8
    -rwxrw-r-- 1 julien julien 42 Sep 20 14:45 10-mirror_permissions
    -rw-rw-r-- 1 julien julien 23 Sep 20 14:25 hello
    -rw-rw-r-- 1 julien julien  0 Sep 20 14:43 olleh
    julien@ubuntu:/tmp/h$ 
    ```

- ***[11-directories_permissions](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/11-directories_permissions)***

    A script that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 20
    -rwxrwxr-x 1 julien julien   24 Sep 20 14:53 11-directories_permissions
    drwx------ 2 julien julien 4096 Sep 20 14:49 dir0
    drwx------ 2 julien julien 4096 Sep 20 14:49 dir1
    drwx------ 2 julien julien 4096 Sep 20 14:49 dir2
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ ./11-directories_permissions 
    julien@ubuntu:/tmp/h$ ls -l
    total 20
    -rwxrwxr-x 1 julien julien   24 Sep 20 14:53 11-directories_permissions
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[12-directory_permissions](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/12-directory_permissions)***

    A script that creates a directory called `my_dir` with permissions `751` in the working directory.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 20
    -rwxrwxr-x 1 julien julien   39 Sep 20 14:59 12-directory_permissions
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ ./12-directory_permission s
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien   39 Sep 20 14:59 12-directory_permissions
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
    drwxr-x--x 2 julien julien 4096 Sep 20 14:59 my_dir
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[13-change_group](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/13-change_group)***

    A script that changes the group owner to `school` for the file `hello`

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien   34 Sep 20 15:03 13-change_group
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
    drwxr-x--x 2 julien julien 4096 Sep 20 14:59 my_dir
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ sudo ./13-change_group 
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien      34 Sep 20 15:03 13-change_group
    drwx--x--x 2 julien julien    4096 Sep 20 14:49 dir0
    drwx--x--x 2 julien julien    4096 Sep 20 14:49 dir1
    drwx--x--x 2 julien julien    4096 Sep 20 14:49 dir2
    drwxr-x--x 2 julien julien    4096 Sep 20 14:59 my_dir
    -rw-rw-r-- 1 julien school   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[100-change_owner_and_group](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/100-change_owner_and_group)***

    A script that changes the owner to `vincent` and the group owner to `staff` for all the files and directories in the working directory.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien   36 Sep 20 15:06 100-change_owner_and_group
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
    drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
    drwxr-x--x 2 julien julien 4096 Sep 20 14:59 my_dir
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ sudo ./100-change_owner_and_group 
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 vincent staff   36 Sep 20 15:06 100-change_owner_and_group
    drwx--x--x 2 vincent staff 4096 Sep 20 14:49 dir0
    drwx--x--x 2 vincent staff 4096 Sep 20 14:49 dir1
    drwx--x--x 2 vincent staff 4096 Sep 20 14:49 dir2
    drwxr-x--x 2 vincent staff 4096 Sep 20 14:59 my_dir
    -rw-rw-r-- 1 vincent staff   23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[101-symbolic_link_permissions](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/101-symbolic_link_permissions)***

    A script that changes the owner and the group owner of `_hello` to `vincent` and `staff` respectively.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien   44 Sep 20 15:12 101-symbolic_link_permissions
    -rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
    lrwxrwxrwx 1 julien julien    5 Sep 20 15:10 _hello -> hello
    julien@ubuntu:/tmp/h$ sudo ./101-symbolic_link_permissions 
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien      44 Sep 20 15:12 101-symbolic_link_permissions
    -rw-rw-r-- 1 julien julien      23 Sep 20 14:25 hello
    lrwxrwxrwx 1 vincent  staff    5 Sep 20 15:10 _hello -> hello
    julien@ubuntu:/tmp/h$ 
    ```

- ***[102-if_only](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/102-if_only)***

    A script that changes the owner of the file `hello` to `betty` only if it is owned by the user `guillaume`.

    *Example*
    ```
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien    julien      47 Sep 20 15:18 102-if_only 
    -rw-rw-r-- 1 guillaume julien      23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ sudo ./102-if_only 
    julien@ubuntu:/tmp/h$ ls -l
    total 24
    -rwxrwxr-x 1 julien julien      47 Sep 20 15:18 102-if_only 
    -rw-rw-r-- 1 betty  julien      23 Sep 20 14:25 hello
    julien@ubuntu:/tmp/h$ 
    ```
- ***[103-Star_Wars](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x01-shell_permissions/103-Star_Wars)***

    A script that will play the StarWars IV episode in the terminal
