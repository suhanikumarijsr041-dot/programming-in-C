Write a program to check if a number is a palindrome.
# Program to check if a number is a palindrome

# Take input from the user
num = int(input("Enter a number: "))

# Convert the number to string
num_str = str(num)

# Check if the string is equal to its reverse
if num_str == num_str[::-1]:
    print("The number is a palindrome.")
else:
    print("The number is not a palindrome.")
