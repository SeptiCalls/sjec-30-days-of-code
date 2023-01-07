frames = list(map(int, input().split()))

compressed = []

for i in range(len(frames)):
    if i > 0 and frames[i] == compressed[-1]:
        compressed.pop()
    compressed.append(frames[i])

print(*compressed)