C = [0] * 100001

def input_array(n):
    return list(map(int, input().split()))

def compressed(a, n):
    P = sorted((a[i], i) for i in range(n))
    
    b = [0] * n
    count = 0
    last = P[0][0]
    
    for i in range(n):
        if last != P[i][0]:
            count += 1
            last = P[i][0]
        b[P[i][1]] = count
        
    return b

def solve(a, b, n):
    for i in range(n):
        C[b[i]] += 1

    max_count = max(C)
    for i in range(n):
        if C[b[i]] == max_count:
            print(a[i])
            break

if __name__ == "__main__":
    n = int(input())
    a = input_array(n)
    b = compressed(a, n)
    solve(a, b, n)