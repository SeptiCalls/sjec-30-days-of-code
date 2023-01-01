def main():
    n = int(input("Marbles: "))
    n -= 10
    res = fact(n + 4) / (fact(n) * fact(4))
    res = int(res)
    print(res)


def fact(n):
    prod = 1
    for i in range(1, n + 1):
        prod *= i
    return prod


if __name__ == "__main__":
    main()
