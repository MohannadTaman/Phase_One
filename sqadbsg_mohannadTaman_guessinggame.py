secret_number = 5
guessing_count = 0
guess_limit = 3
while(guessing_count<guess_limit):
    scan=int(input("Please enter a number: "))
    if scan == secret_number:
        flag = 1
        break
    else:
        flag=0
    guessing_count+=1
if flag == 1:
    print("You Won!")
else:
    print("You Lost!")