m = int(input("M: "))
n = int(input("N: "))

if ((m * n) % 6 == 0 and m > 1 and n > 1):
    print("Yes")
else:
    print("No")
