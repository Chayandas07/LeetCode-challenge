# -*- coding: utf-8 -*-
from random import choice


class RandomizedSet:
    ''' Maintain array of numbers with hashmap of value to their indices. '''
    def __init__(self):
        self.numbers = list()
        self.length = 0
        self.index = dict()

    def insert(self, val: int) -> bool:
        if val not in self.index:
            self.numbers.append(val)
            self.index[val] = self.length  # Array is 0 indexed
            self.length += 1
            return True
        return False

    def remove(self, val: int) -> bool:
        if val in self.index:
            # First update index of val with last number in array
            idx = self.index[val]
            last_val = self.numbers[self.length-1]
            self.numbers[idx] = last_val  # Add last val to idx
            self.index[last_val] = idx  # Update new index
            del self.index[val]  # Delete mapping to val
            self.numbers.pop()  # Remove last number
            self.length -= 1  # Reduce length
            return True
        return False

    def getRandom(self) -> int:
        return choice(self.numbers)


def main():
    randomizedSet = RandomizedSet()
    assert randomizedSet.insert(1)
    assert not randomizedSet.remove(2)
    assert randomizedSet.insert(2)
    assert randomizedSet.getRandom() in (1, 2)
    assert randomizedSet.remove(1)
    assert not randomizedSet.insert(2)
    assert randomizedSet.getRandom() == 2


if __name__ == '__main__':
    main()
