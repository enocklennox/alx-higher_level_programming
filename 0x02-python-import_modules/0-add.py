#!/usr/bin/env python3
"""
This module imports the function add from add_0.py and prints the result of the addition 1 + 2 = 3
"""
if __name__ == "__main__":
    import add_0
    a = 1
    b = 2
    print("{:d} + {:d} = {:d}".format(a, b, add_0.add(a, b)))
