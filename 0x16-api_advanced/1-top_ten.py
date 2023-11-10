#!/usr/bin/python3
"""
Make API request
"""
import requests


def top_ten(subreddit):
    """
    Queries the Reddit API and prints the titles of the
    first 10 hot posts listed for a given subreddit
    """
    url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)
    res = requests.get(url, allow_redirects=False,
                       headers={"User-Agent": "Python-Request"})
    if res.status_code == 200:
    #    for post in res.json().get("data").get("children")[:10]:
    #        print(post.get("data").get("title"))
        print("OK", end="")
    else:
        print("None")
