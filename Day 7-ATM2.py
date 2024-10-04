
# Read the number of test cases
T = int(input())
for _ in range(T):
    # Read N and K
    N, K = map(int, input().split())
    # Read the withdrawal amounts
    A = list(map(int, input().split()))
    
    result = ''
    for amount in A:
        if K >= amount:
            result += '1'
            K -= amount
        else:
            result += '0'
    
   
    print(result)
