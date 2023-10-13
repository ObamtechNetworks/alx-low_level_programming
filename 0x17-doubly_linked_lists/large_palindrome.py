#!/usr/bin/python3
def is_palindrome(n):
    s = str(n)
    return s == s[::-1]

def largest_palindrome_product():
    max_product = 0
    for i in range(999, 99, -1):
        if i % 11 == 0:
            j = 999
            step = 1
        else:
            j = 990  # Largest number less than or equal to 999 and divisible by 11
            step = 11
        while j >= i:
            product = i * j
            if product <= max_product:
                break
            elif is_palindrome(product):
                max_product = product
            j -= step
    return max_product

print(largest_palindrome_product())
