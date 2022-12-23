arr = list(map(int, input("Array: ").split()))
avg = sum(arr) / len(arr)
for i in range(len(arr)):
    if arr[i] > avg:
        print(arr[i], end=" ")
print()