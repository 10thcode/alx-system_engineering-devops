#!/usr/bin/python3
"""
Make API request
"""
import requests


def number_of_subscribers(subreddit):
    """
    Get number of subscribers for a given subreddit.
    """
    url = "https://www.reddit.com/r/{}/about.json".format(subreddit)
    res = requests.get(url, allow_redirects=False,
                       headers={"User-Agent": "Requests"})
    if (res.status_code == 200):
        obj = res.json()
        return obj.get("data").get("subscribers")
    return 0
