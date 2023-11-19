#!/usr/bin/python3
"""
Make API request
"""
from requests import get


def top_ten(subreddit):
    """
    Queries the Reddit API and prints the titles of the
    first 10 hot posts listed for a given subreddit
    """
    with get(f"https://www.reddit.com/r/{subreddit}/hot.json?limit=10",
             allow_redirects=False) as res:
        if (res.status_code == 200):
            for item in res.json()["data"]["children"]:
                print(item["data"]["title"])
        else:
            print("None")
