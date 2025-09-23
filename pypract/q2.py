def sort(s):
 n=int(len(s))
 c=list(s)
 i=0
 while(i<(n-1)):
  low=ord(c[i])
  lowi=i
  k=i+1
  while(k<n):
   ch1=c[k]
   if(ord(ch1)<low):
    lowi=k
   k=k+1
  temp=c[i]
  c[i]=c[lowi]
  c[lowi]=temp
  i=i+1
 print("the sorted string is",''.join(c))
 while(i<n):
  count=1
  while((i+1)<n and c[i]==c[i+1]):
   count=count+1
   i=i+1
  print("count of "+c[i]+" is ",count)
  i=i+1
string=input("Enter a String\n")
sort(string)
  
  

