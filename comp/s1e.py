
T = int(input())
S = []
while T:
    N = int(input())
    P = [int(i) for i in input().split()]
    count = 0
    for i in range(len(P)):
        j = i - 1
        while j > (i-6) and j > -1:
            if P[i] > P[j]:
                break
            j = j-1
        if j == -1 or j == i-6:
            count = count + 1
    S.append(count)
    T = T - 1

for s in range(len(S)):
    print(S[s])

