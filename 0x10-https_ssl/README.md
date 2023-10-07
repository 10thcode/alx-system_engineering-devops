# 0x10. HTTPS SSL

Generating SSL/TLS certificate using LetsEncript's `certbot`. 
Configuring HTTPS on a load balancer (SSL/TLS Termination).

- ***[0-world_wide_web](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x10-https_ssl/0-world_wide_web)***

    A Bash script that display infomation about a domain.

    - Takes 2 arguments:
        1. domain (mandatory)
        2. subdomain (not mandatory)

    **Example:**
    ```
    sylvain@ubuntu$ ./0-world_wide_web holberton.online
    The subdomain www is a A record and points to 54.210.47.110
    The subdomain lb-01 is a A record and points to 54.210.47.110
    The subdomain web-01 is a A record and points to 34.198.248.145
    The subdomain web-02 is a A record and points to 54.89.38.100
    sylvain@ubuntu$
    sylvain@ubuntu$ ./0-world_wide_web holberton.online web-02
    The subdomain web-02 is a A record and points to 54.89.38.100
    sylvain@ubuntu$
    ```

 - ***[1-haproxy_ssl_termination](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x10-https_ssl/1-haproxy_ssl_termination)***

    HAProxy configuration file that configures HAProxy load balancer
    to handle HTTPS traffics

- ***[100-redirect_http_to_https](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x10-https_ssl/100-redirect_http_to_https)***

    HAProxy configuration file that configures HAProxy load balancer
    to handle HTTPS traffics and redirects HTTP traffic to HTTPS.
