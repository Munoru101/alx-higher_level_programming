#!/usr/bin/python3
from add_0 import add

if __name__ = "__main__":
    import add_0 as sum
    a = 1
    b = 2
    result = sum.add(a, b)
    print("{} + {} = {}".format(int(a), int(b), int(result)))
