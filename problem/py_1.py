#https://stackoverflow.com/questions/50097306/moving-sum-test-at-testdome-for-python
'''
I need to write a function that it returns True if the sum of the last three numbers
appended is equal to total or have been equal to total previously. So for example if
I append ([1, 2, 3]), movingtotal.contains(6) should return True, then if I append ([4]),
movingtotal.contains(6) should still be True as well as movingtotal.contains(9), while
movingtotal.contains(7) should return False.
'''

from itertools import accumulate

class MovingTotal:
    def __init__(self, *args, **kwargs):
         self.container = list(args)
         self._cache = set(accumulate(self.container))
         self._last = sum(self.container)

     def append(self, numbers):
          self.container.append(numbers)
          for number in numbers:
              self._last += number
              self._cache.add(self._last)

     def contains(self, total):
          return total in self._cache


movingtotal = MovingTotal()
movingtotal.append([1, 2, 3])
print(movingtotal.contains(6))
print(movingtotal.contains(9))
movingtotal.append([4])
print(movingtotal.contains(9))
