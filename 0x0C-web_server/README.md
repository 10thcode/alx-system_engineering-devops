# 0x0C. Web server

Installing and configuring web server (Apache, Nginx). Working with HTTP.

- ***[0-transfer_file](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0C-web_server/0-transfer_file)***

    A Bash script that transfers a file from our client to a server.

    - Accepts 4 parameters
        1. The path to the file to be transferred
        2. The IP of the server we want to transfer the file to
        3. The username scp connects with
        4. The path to the SSH private key that scp uses

    **Example**
    ```
    sylvain@ubuntu$ ./0-transfer_file some_page.html 8.8.8.8 sylvain /vagrant/private_key
    some_page.html                                     100%   12     0.1KB/s   00:00
    sylvain@ubuntu$
    ```

- ***[1-install_nginx_web_server](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0C-web_server/1-install_nginx_web_server)***

    A Bash script that install and configures Nginx on a new Ubuntu machine.

    **Example**
    ```
    root@sy-web-01$ ./1-install_nginx_web_server > /dev/null 2>&1
    root@sy-web-01$ 
    root@sy-web-01$ curl localhost
    Hello World!
    root@sy-web-01$ 
    ```

- ***[2-setup_a_domain_name](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0C-web_server/2-setup_a_domain_name)***

    Contains a .tech domain name from get.tech.

- ***[3-redirection](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0C-web_server/3-redirection)***

    A bash script that configures Nginx server so that `/redirect_me`
    is redirects to another page.

    **Example**
    ```
    sylvain@ubuntu$ curl -sI 34.198.248.145/redirect_me/
    HTTP/1.1 301 Moved Permanently
    Server: nginx/1.4.6 (Ubuntu)
    Date: Tue, 21 Feb 2017 21:36:04 GMT
    Content-Type: text/html
    Content-Length: 193
    Connection: keep-alive
    Location: https://www.youtube.com/watch?v=QH2-TGUlwu4

    sylvain@ubuntu$
    ```

- ***[4-not_found_page_404](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0C-web_server/4-not_found_page_404)***

    A bash script that configure Nginx server to have a custom 404
    page that contains the string `Ceci n'est pas une page`.

    **Example**
    ```
    sylvain@ubuntu$ curl -sI 34.198.248.145/xyz
    HTTP/1.1 404 Not Found
    Server: nginx/1.4.6 (Ubuntu)
    Date: Tue, 21 Feb 2017 21:46:43 GMT
    Content-Type: text/html
    Content-Length: 26
    Connection: keep-alive
    ETag: "58acb50e-1a"

    sylvain@ubuntu$ curl 34.198.248.145/xyzfoo
    Ceci n'est pas une page

    sylvain@ubuntu$
    ```

- ***[7-puppet_install_nginx_web_server.pp](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x0C-web_server/7-puppet_install_nginx_web_server.pp)***

    A Puppet manifest that install and configures Nginx on an Ubuntu machine.
