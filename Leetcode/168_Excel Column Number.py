def convertToTitle( n):
    """
    :type n: int
    :rtype: str
    """
    digits = []
    while n:
        digits.append(chr((n - 1) % 26 + ord('A')))
        n = (n-1) // 26
    digits.reverse()
    name = ''.join(digits)
    return name


x = convertToTitle(26)
print(x)