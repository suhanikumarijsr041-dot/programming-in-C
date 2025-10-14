Write a program to find the sum of digits of a number.
# Program to find the sum of digits of a number

# Take input from the user
num = int(input("Enter a number: "))

# Initialize sum
digit_sum = 0

# Loop to extract and add digits
while num > 0:
    digit = num % 10
    digit_sum += digit
    num //= 10

# Display the result
print("Sum of digits:", digit_sum)
