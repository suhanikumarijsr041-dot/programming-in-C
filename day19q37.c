//Write a program to find the LCM of two numbers.

# Program to find LCM of two numbers

# Take input from the user
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

# Function to compute HCF using Euclidean algorithm
def find_hcf(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Function to compute LCM using the relation: LCM × HCF = num1 × num2
def find_lcm(a, b):
    hcf = find_hcf(a, b)
    return (a * b) // hcf

# Calculate and display the LCM
lcm = find_lcm(num1, num2)
print("LCM of", num1, "and", num2, "is:", lcm)
