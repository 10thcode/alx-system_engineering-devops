# 0x0A. Configuration management

Working with configuration management tools (Puppet).

- ***[0-create_a_file.pp](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0A-configuration_management/0-create_a_file.pp)***

    A Puppet manifest to create a file.

    **Example**
    ```
    root@6712bef7a528:~# puppet apply 0-create_a_file.pp
    Notice: Compiled catalog for 6712bef7a528.ec2.internal in environment production in 0.04 seconds
    Notice: /Stage[main]/Main/File[school]/ensure: defined content as '{md5}f1b70c2a42a98d82224986a612400db9'
    Notice: Finished catalog run in 0.03 seconds
    root@6712bef7a528:~#
    root@6712bef7a528:~# ls -l /tmp/school
    -rwxr--r-- 1 www-data www-data 13 Mar 19 23:12 /tmp/school
    root@6712bef7a528:~# cat /tmp/school
    I love Puppetroot@6712bef7a528:~#
    ```

- ***[1-install_a_package.pp](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0A-configuration_management/1-install_a_package.pp)***

    A Puppet manifest to install flask from pip3
    
    **Example**
    ```
    root@9665f0a47391:/# puppet apply 1-install_a_package.pp
    Notice: Compiled catalog for 9665f0a47391 in environment production in 0.14 seconds
    Notice: /Stage[main]/Main/Package[Flask]/ensure: created
    Notice: Applied catalog in 0.20 seconds
    root@9665f0a47391:/# flask --version
    Python 3.8.10
    Flask 2.1.0
    Werkzeug 2.1.1
    ```

- ***[2-execute_a_command.pp](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0A-configuration_management/2-execute_a_command.pp)***

    A Puppet manifest that kills a process.

    **Example**
    ```
    root@d391259bf577:/# puppet apply 2-execute_a_command.pp
    Notice: Compiled catalog for d391259bf577.hsd1.ca.comcast.net in environment production in 0.01 seconds
    Notice: /Stage[main]/Main/Exec[killmenow]/returns: executed successfully
    Notice: Finished catalog run in 0.10 seconds
    root@d391259bf577:/# 
    ```
