total_num = int(input("please enter total numbers: "))
sum=0
i=0
while(i < total_num):
    sum+=int(input())
    i+=1
avg = sum / total_num
print(f"sum = {sum} and average={avg}")