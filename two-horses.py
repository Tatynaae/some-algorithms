def count_ways_to_place_knights(n):
    result = []
    for k in range(1, n + 1):
        ways = (k**2 * (k**2 - 1)) // 2 - 4 * (k - 1) * (k - 2)
        result.append(ways)
    return result

n = int(input())

result = count_ways_to_place_knights(n)
for ways in result:
    print(ways)
