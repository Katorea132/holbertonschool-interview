#!/usr/bin/python3
"""Documentation, right.
"""


def minOperations(n):
    """Calculates minimum amount of operations

    Args:
        n (int): or not int, who knows

    Returns:
        int: amount of operations, defaults to 0 if not possible.
    """
    if n > 1:
        i, tot = 2, 0
        while n / 2 > i:
            if n % i == 0:
                tot += i
                n //= i
            else:
                i += 1
        return tot + n
    return 0
