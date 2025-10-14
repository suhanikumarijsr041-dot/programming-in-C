//Write a program to take a number as input and print its equivalent binary representation.
# Program to convert a number to binary

# Take input from the user
num = int(input("Enter a number: "))

# Convert to binary using bin() and remove the '0b' prefix
binary = bin(num)[2:]

# Display the result
print("Binary representation:", binary)
