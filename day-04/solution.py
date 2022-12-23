m = int(input("M: "))
n = int(input("N: "))

if (m % 2 == 0 and n % 3 == 0 or m % 3 == 0 and n % 2 == 0):
    print("Yes")
else:
    print("No")
