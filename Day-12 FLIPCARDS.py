def min_flips(T, test_cases):
    results = []
    for case in test_cases:
        N, X = case
        results.append(min(X, N - X))
    return results

# Taking user input
T = int(input())
test_cases = []

for _ in range(T):
    N, X = map(int, input().split())
    test_cases.append((N, X))

# Calculating and printing the results
results = min_flips(T, test_cases)
for result in results:
    print(result)
