counts = dict()
names = ['patil','dfsdf','dfsdfsdf','343']
for name in names:
    counts[name] = counts.get(name,0)+1
print(counts)    