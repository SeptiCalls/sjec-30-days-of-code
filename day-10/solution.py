import math
n = int(input("Marbles: "))
n -= 10
res = math.factorial(n + (5 - 1)) / (math.factorial(n) * math.factorial(5 - 1))
res = int(res)
print(res)
