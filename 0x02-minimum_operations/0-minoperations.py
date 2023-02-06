#!/usr/bin/python3
"""Module for minOperations method.
"""

def minOperations(n):
    """Calculates the fewest number of operations needed to result in
    exactly n H characters in the file.
    """
    if n <= 1:
        return 0
    i = 2
    ops = 0
    while n > 1:
        if n % i == 0:
            ops += i
            n /= i
        else:
            i += 1
    return ops