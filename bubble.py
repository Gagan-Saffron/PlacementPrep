def bubble(arr):

    for i in range(0,len(arr)):
        print(arr)
        print("sorting..")
        for j in range(1,len(arr)-i):
            if arr[j]<arr[j-1]:
                temp=arr[j]
                arr[j]=arr[j-1]
                arr[j-1]=temp

    return arr


lst=[1,3,2,5,4]
sorted=bubble(lst)
print(sorted)