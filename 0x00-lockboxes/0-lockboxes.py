#!/usr/bin/python3

def canUnlockAll(boxes)


keys = [0]


for x in keys:
  for k in boxes[x]:
    if k not in keys and k < len(boxes):
      keys.append(k)



xyz = 0
while xyz < len(boxes):
  if xyz not in keys:
    return False

    xyz += 1


return True