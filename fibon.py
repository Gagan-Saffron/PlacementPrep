
n=int(input("Enter a number: "))

if n==1:
	print(0)
elif n==2:
	print(1)
else:
	prev=0
	new=1
	sum_=0

	while(n>2):
		sum_=prev+new
		prev=new
		new=sum_
		n-=1
	
	print(sum_)
