def selection(arr):

    for i in range(0,len(arr)):
        for j in range(i,len(arr)):
            if arr[i]>arr[j]:
                temp=arr[i]
                arr[i]=arr[j]
                arr[j]=temp
    
    return arr


lst=[1,3,2,5,4]
sorted=selection(lst)
print(sorted)