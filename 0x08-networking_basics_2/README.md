
# 0x08. Networking basics #1

This project introduced how to work with networking utilities like nc and netstat.

## Tasks

- ***[0-change_your_home_IP](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x08-networking_basics_2/0-change_your_home_IP)***

    A Bash script that configures an Ubuntu server with the below requirements.
    - `localhost` resolves to `127.0.0.2`
    - `facebook.com` resolves to `8.8.8.8`

    *Example*
    ```
    sylvain@ubuntu$ ping localhost
    PING localhost (127.0.0.1) 56(84) bytes of data.
    64 bytes from localhost (127.0.0.1): icmp_seq=1 ttl=64 time=0.012 ms
    ^C
    --- localhost ping statistics ---
    1 packets transmitted, 1 received, 0% packet loss, time 0ms
    rtt min/avg/max/mdev = 0.012/0.012/0.012/0.000 ms
    sylvain@ubuntu$
    sylvain@ubuntu$ sudo ./0-change_your_home_IP
    sylvain@ubuntu$ ping localhost
    PING localhost (127.0.0.2) 56(84) bytes of data.
    64 bytes from localhost (127.0.0.2): icmp_seq=1 ttl=64 time=0.012 ms
    64 bytes from localhost (127.0.0.2): icmp_seq=2 ttl=64 time=0.036 ms
    ^C
    --- localhost ping statistics ---
    2 packets transmitted, 2 received, 0% packet loss, time 1000ms
    rtt min/avg/max/mdev = 0.012/0.024/0.036/0.012 ms
    sylvain@ubuntu$
    ```

- ***[1-show_attached_IPs](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x08-networking_basics_2/1-show_attached_IPs)***

    A Bash script that displays all active IPv4 IPs on the machine it’s executed on.

    *Example*
    ```
    sylvain@ubuntu$ ./1-show_attached_IPs | cat -e
    10.0.2.15$
    127.0.0.1$
    sylvain@ubuntu$
    ```

- ***[100-port_listening_on_localhost](https://github.com/10thcode/alx-system_engineering-devops/blob/master/0x08-networking_basics_2/100-port_listening_on_localhost)***

    A Bash script that listens on port `98` on `localhost`.
