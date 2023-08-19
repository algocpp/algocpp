#!/bin/env python3
from os import system

system("")

print("ANSI Escape Sequences")

for i in range(10):
    for j in range(10):
        v = i * 10 + j
        print("\033[{}m{}\033[0m ".format(str(v), str(v).zfill(3)), end="")
    print("")

for i in range(10):
    print("\033[2m\033[{}m{}\033[m ".format(str(i + 30), "2" + str(i + 30)), end="")

print("")
