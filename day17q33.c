//Write a program to check if a number is an Armstrong number.
# Program to check if a number is an Armstrong number

# Take input from the user
num = int(input("Enter a number: "))

# Convert number to string to count digits
num_str = str(num)
num_digits = len(num_str)

# Calculate the sum of digits raised to the power of num_digits
sum_of_powers = sum(int(digit) ** num_digits for digit in num_str)

# Check if the number is an Armstrong number
if sum_of_powers == num:
    print("The number is an Armstrong number.")
else:
    print("The number is not an Armstrong number.")


