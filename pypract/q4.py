def sort(s):
 chars=list(s)
 n=len(s)
 for i in range (n-1):
  low=i
  for j in range(i+1,n):
   if(ord(chars[j])<ord(chars[low])):
    low=j
  temp=chars[low]
  chars[low]=chars[i]
  chars[i]=temp
 return ''.join(chars)
str1=input("enter a string")
print(sort(str1))