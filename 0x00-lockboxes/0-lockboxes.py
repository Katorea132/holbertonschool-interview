#!/usr/bin/python3


def canUnlockAll(boxes):
    lili = [0]
    leng = len(boxes)
    numberlist = {0: 0}
    for box in lili:
        for key in boxes[box]:
            if key not in numberlist and key < leng:
                numberlist[key] = ':)'
                lili.append(key)
    return leng == len(lili)
