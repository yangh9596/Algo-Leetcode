
def reverse( x):
    """
    :type x: int
    :rtype: int
    """
    num = abs(x)
    digits = []
    while num:
        digits.append(num % 10)
        num = num // 10

    digits.reverse()
    for i in range(len(digits)):
        num += digits[i] * 10 ** i
    return num if x > 0 else -num

print( reverse(-1230) )