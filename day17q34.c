Write a program to check if a number is prime.
# Program to check if a number is prime

# Take input from the user
num = int(input("Enter a number: "))

# Handle edge cases
if num <= 1:
    print("The number is not prime.")
else:
    # Check for factors from 2 to sqrt(num)
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            print("The number is not prime.")
            break
    else:
        print("The number is prime.")
