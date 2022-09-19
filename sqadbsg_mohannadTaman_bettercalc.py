num1 = int(input("num1: "))
operaion = input("Operator: ")
num2 = int(input("num2: "))

if operaion == "+":
     print(num1 + num2)
elif operaion == "-":
     print(num1 - num2)
elif operaion == "/":
     print(num1 / num2)
elif operaion == "*":
     print(num1 * num2)
else:
     print("Invalid Operator")