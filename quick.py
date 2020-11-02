def partition(arr,s,e):

	pivot=arr[e]
	pind=s

	for i in range(s,e):
		if arr[i]<pivot:
			temp=arr[i]
			arr[i]=arr[pind]
			arr[pind]=temp
			pind+=1
	temp=arr[e]
	arr[e]=arr[pind]
	arr[pind]=temp
	
	return pind

def quicksort(arr,s,e):

	if s>=e:
		return

	pind=partition(arr,s,e)
	quicksort(arr,s,pind-1)
	quicksort(arr,pind+1,e)
	

lst=[1,3,5,6,7,2,4]
quicksort(lst,0,len(lst)-1)
print(lst)
