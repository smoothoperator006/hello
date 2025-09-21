def fact(num):
    if(num==1):
     return num
    else:
     return num*fact(num-1)

print(fact(6))
def sum_of_digits(num):
  if(num==0):
    return 0
  else:
    return(num%10+sum_of_digits(num/10))
  
print(sum_of_digits(567))