#!/usr/bin/python3

def minOperations(n):
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