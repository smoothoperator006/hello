def hill(num):
    i = 0
    n = num
    digits = list(str(num))
    length = len(digits)
    flag = 0
    while (i < length - 1 and digits[i] <= digits[i + 1]):
     i += 1

     if (i == 0 or i == length - 1):
        return False

     while (i < length - 1 and digits[i] >= digits[i + 1]):
        i =i+ 1

    return i == length - 1

num=input("enter a number\n")
print(hill(num))
  
    