#!/usr/bin/python3
'''Returns true or false depending on keys and matching boxes'''
def canUnlockAll(boxes)
# array for boxes
keys = [0]
# searching through boxes
for x in keys:
  for k in boxes[x]:
    if k not in keys and k < len(boxes):
      keys.append(k)
# else if return False
xyz = 0
while xyz < len(boxes):
  if xyz not in keys:
    return False

  xyz += 1

return True