#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'insertionSort2' function below.
#
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY arr
#

def insertionSort2(n, a):
    for i in range(1, n):
        for j in range(i, 0, -1):
            if a[j-1] <= a[j]:
                break
            a[j-1], a[j] = a[j], a[j-1]
        for k in a:
            print(k, end=" ")
        print()

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    insertionSort2(n, arr)
