n, m = map(int, input().split())
for i in range(n, m + 1):
    if i % 3 == 0:
        print("Foo")
        continue
    if i % 2 == 0:
        print("Bar")
    else:
        print("Baz")
