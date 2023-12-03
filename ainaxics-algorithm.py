def find_element_at_k(n, k):
    if n == 1:
        return 1

    half_length = 2**(n - 1)
    
    if k == half_length:
        return n
    
    if k > half_length:
        k = 2 * half_length - k
    
    return find_element_at_k(n - 1, k)

# Ввод данных
n, k = map(int, input().split())

# Вывод результата
result = find_element_at_k(n, k)
print(result)
