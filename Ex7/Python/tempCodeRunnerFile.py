num = int(input("Enter an integer number: "))

# print the input number
print("Entered number is: ", num)

# printing number of bits to store the number
print(num, " needs ", num.bit_length(), " to store the value")

# printing binary value 
print("Binary value of ", num, " is: ", bin(num))