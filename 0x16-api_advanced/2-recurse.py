#!/usr/bin/python3
"""
query reddit api
"""
import requests


def recurse(subreddit, hot_list=[], after=""):
    """
    gets a list containing the titles of
    all hot articles for a given subreddit
    """
    url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)
    res = requests.get(url, params={"after": after})
    if res.status_code == 200:
        for post in res.json().get("data").get("children"):
            hot_list.append(post.get("data").get("title"))
        after = res.json()["data"]["after"]
        if after is not None:
            return recurse(subreddit, hot_list, after)
        return hot_list
