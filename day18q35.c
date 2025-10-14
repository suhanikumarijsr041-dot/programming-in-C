Write a program to print all factors of a given number.
# Program to print all factors of a number

# Take input from the user
num = int(input("Enter a number: "))

print("Factors of", num, "are:")

# Loop through all numbers from 1 to num
for i in range(1, num + 1):
    if num % i == 0:
        print(i)
