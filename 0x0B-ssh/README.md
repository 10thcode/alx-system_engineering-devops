# 0x0B. SSH

Generating SSH key pairs. Connecting to remote computers. SSH tunnelling.

- ***[0-use_a_private_key](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0B-ssh/0-use_a_private_key)***

    A Bash script that uses ssh to connect to a server.

    **Example**
    ```
    sylvain@ubuntu$ ./0-use_a_private_key
    ubuntu@server01:~$ exit
    Connection to 8.8.8.8 closed.
    sylvain@ubuntu$ 
    ```

- ***[1-create_ssh_key_pair](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0B-ssh/1-create_ssh_key_pair)***

    A Bash script that creates an RSA key pair.

    **Example**
    ```
    sylvain@ubuntu$ ./1-create_ssh_key_pair
    Generating public/private rsa key pair.
    Your identification has been saved in school.
    Your public key has been saved in school.pub.
    The key fingerprint is:
    5d:a8:c1:f5:98:b6:e5:c0:9b:ee:02:c4:d4:01:f3:ba vagrant@ubuntu
    The key's randomart image is:
    +--[ RSA 4096]----+
    |      oo...      |
    |      .+.o =     |
    |     o  + B +    |
    |      o. = O     |
    |     .. S = .    |
    |      .. .       |
    |      E.  .      |
    |        ..       |
    |         ..      |
    +-----------------+
    sylvain@ubuntu$ ls
    ```

- ***[2-ssh_config](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0B-ssh/2-ssh_config)***

    A SSH configuration file that is configured to use a specifig private key
    and refuse to authenticate using a password.


- ***[100-puppet_ssh_config.pp](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0B-ssh/100-puppet_ssh_config.pp)***

    A Puppet manifest that configure SSH client to use a specific private key
    and refuse to authenticate using a password.

    **Example**
    ```
    vagrant@ubuntu:~$ sudo puppet apply 100-puppet_ssh_config.pp
    Notice: Compiled catalog for ubuntu-xenial in environment production in 0.11 seconds
    Notice: /Stage[main]/Main/File_line[Turn off passwd auth]/ensure: created
    Notice: /Stage[main]/Main/File_line[Declare identity file]/ensure: created
    Notice: Finished catalog run in 0.03 seconds
    vagrant@ubuntu:~$
    ```
