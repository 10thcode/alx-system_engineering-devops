# 0x0E. Web stack debugging #1

Finding and fixing bug on a web server.

- ***[0-nginx_likes_port_80](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0E-web_stack_debugging_1/0-nginx_likes_port_80)***

    A Bash script that configures a server to listen on port 80.

    **Example**
    ```
    root@966c5664b21f:/# curl 0:80
    curl: (7) Failed to connect to 0 port 80: Connection refused
    root@966c5664b21f:/# ./0-nginx_likes_port_80 > /dev/null 2&>1
    root@966c5664b21f:/# curl 0:80
    <!DOCTYPE html>
    <html>
    <head>
    <title>Welcome to nginx!</title>
    <style>
        body {
            width: 35em;
            margin: 0 auto;
            font-family: Tahoma, Verdana, Arial, sans-serif;
    ...
    root@966c5664b21f:/#
    ```

- ***[1-debugging_made_short](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0E-web_stack_debugging_1/1-debugging_made_short)***

    A bash script that fix a bug that is causing a web server to not start.

    **Example**
    ```
    root@966c5664b21f:/# curl 0:80
    curl: (7) Failed to connect to 0 port 80: Connection refused
    root@966c5664b21f:/# ./1-debugging_made_short
    root@966c5664b21f:/# curl 0:80
    <!DOCTYPE html>
    <html>
    <head>
    <title>Welcome to nginx!</title>
    <style>
        body {
            width: 35em;
            margin: 0 auto;
            font-family: Tahoma, Verdana, Arial, sans-serif;
    ...
    root@966c5664b21f:/#
    ```
