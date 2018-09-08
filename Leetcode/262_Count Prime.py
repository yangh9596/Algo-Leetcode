def countPrimes(n):
    """
    :type n: int
    :rtype: int
    """
    if n <= 2:
        return 0
    notPrime = [False] * n
    for i in range(2, int(n / 2)+1):
        j = 2
        while i * j < n:
            if i * j < n:
                notPrime[i * j] = True
            j += 1
    return n - sum(notPrime) -2

x = countPrimes( 5 )

print(x)