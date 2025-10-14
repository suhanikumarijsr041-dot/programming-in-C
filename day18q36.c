//Write a program to find the HCF (GCD) of two numbers.
# Program to find HCF (GCD) of two numbers

# Take input from the user
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

# Function to compute HCF using Euclidean algorithm
def find_hcf(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Calculate and display the HCF
hcf = find_hcf(num1, num2)
print("HCF of", num1, "and", num2, "is:", hcf)
