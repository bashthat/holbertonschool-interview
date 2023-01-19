#!/usr/bin/python3
'''
a list of lists identifying whether all the boxes can be opened which returns true if so, and false if otherwise.
'''
def canUnlockAll(boxes)
# keys available

keys = [0]
# looking through the list

for x in keys:
  for k in boxes[x]:
    if k not in keys and k < len(boxes):
      keys.append(k)

# returning false if all the keys do not match the 

xyz = 0
while xyz < len(boxes):
  if xyz not in keys:
    return False

    xyz += 1


return True