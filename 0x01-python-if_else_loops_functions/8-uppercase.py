#!/usr/bin/python3

def uppercase(str):
    print("".join(["{:c}".format(ord(c) - 32) if ord(c) >= 97 and ord(c) <= 122 else "{:c}".format(ord(c)) for c in str]), end="")
    print()
