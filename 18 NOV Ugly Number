class Solution:
    def isUgly(self, n: int) -> bool:
        if n <= 0:
            return False
        for factor in (2, 3, 5):
            while n % factor == 0:
                n = n // factor
        return n == 1


def main():
    n = 6
    assert Solution().isUgly(n)

    n = 1
    assert Solution().isUgly(n)

    n = 14
    assert not Solution().isUgly(n)


if __name__ == '__main__':
    main()
