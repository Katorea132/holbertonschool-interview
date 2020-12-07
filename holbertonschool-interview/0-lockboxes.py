#!/usr/bin/python3

def canUnlockAll(boxes):
    lili = [0]
    for box in lili:
        for key in boxes[box]:
            if key not in lili and key < len(boxes):
                lili.append(key)
    return len(boxes) == len(lili)
