Write a program to find the product of odd digits of a number.
# Program to find the product of odd digits of a number

# Take input from the user
num = int(input("Enter a number: "))

# Initialize product and flag
product = 1
has_odd = False

# Loop through each digit
while num > 0:
    digit = num % 10
    if digit % 2 != 0:  # Check if digit is odd
        product *= digit
        has_odd = True
    num //= 10

# Display result
if has_odd:
    print("Product of odd digits:", product)
else:
    print("No odd digits found.")
