n=int(input("Enter the number:"))
t=0
for i in range(2,n):
    if(n%i==0):
      t=1 
      break
if(t==1):
     print("Number is composite")
else:
     print("Number is prime")
