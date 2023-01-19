#!/usr/bin/python3

'''Can match boxes and keys makes true, else false'''

def canUnlockAll(boxes):
    visited = set()
    visited.add(0)
    stack = [0]
    while stack:
        box = stack.pop()
        for key in boxes[box]:
            if key not in visited:
                visited.add(key)
                stack.append(key)
    return len(visited) == len(boxes)

