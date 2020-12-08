flag = 1
count = 0
i = 1
n = int(input("Enter Value of n: "))
while count < n:
    i += 1
    flag = 1
    j = 2
    while(j*j <= i):
        if(i % j == 0):
            flag = 0
            break
        j += 1
    if(flag == 1):
        print(i)
        count += 1
    if(count == n):
        break