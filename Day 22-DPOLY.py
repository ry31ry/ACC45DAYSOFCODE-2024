# cook your dish here
def find_degree_of_polynomial(test_cases):
    results = []
    for case in test_cases:
        N, coefficients = case
        degree = 0
        for i in range(N):
            if coefficients[i] != 0:
                degree = i
        results.append(degree)
    return results

# Read input
T = int(input())
test_cases = []
for _ in range(T):
    N = int(input())
    coefficients = list(map(int, input().split()))
    test_cases.append((N, coefficients))

# Find and print the degree of each polynomial
results = find_degree_of_polynomial(test_cases)
for result in results:
    print(result)
