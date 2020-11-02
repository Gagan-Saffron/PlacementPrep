def insertion(arr):
    for i in range(1,len(arr)):
        value=arr[i]
        hole=i

        while hole>0 and value<arr[hole-1]:
            arr[hole]=arr[hole-1]
            hole-=1

        arr[hole]=value

    return arr



lst=[1,3,2,5,4]
sorted=insertion(lst)
print(sorted)