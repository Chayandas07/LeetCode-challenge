# -*- coding: utf-8 -*-
from collections import Counter
from typing import List


class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        freq = Counter(arr)
        return len(set(freq.values())) == len(freq.keys())


def main():
    arr = [1, 2, 2, 1, 1, 3]
    assert Solution().uniqueOccurrences(arr)

    arr = [1, 2]
    assert not Solution().uniqueOccurrences(arr)

    arr = [-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]
    assert Solution().uniqueOccurrences(arr)


if __name__ == '__main__':
    main()
