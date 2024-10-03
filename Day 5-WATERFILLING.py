
T = int(input())

# Process each test case
for _ in range(T):
    B1, B2, B3 = map(int, input().split())
    
    # Count the number of empty bottles
    empty_count = (B1 == 0) + (B2 == 0) + (B3 == 0)
    
    # Determine if it's water filling time
    if empty_count >= 2:
        print("Water filling time")
    else:
        print("Not now")
