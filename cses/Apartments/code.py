import math
n, m, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()
t = 0
i = 0
j = 0
while (i < n and b[j] - a[i] > k):
    while(abs(a[i] - b[j]) <= k):
        j+=1
print(t)
