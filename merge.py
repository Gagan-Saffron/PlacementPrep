def merge(l,r):

    arr=[]
    i=0
    j=0

    while(i<len(l) and j<len(r)):
        if l[i]<r[j]:
            arr.append(l[i])
            i+=1
        else:
            arr.append(r[j])
            j+=1
    while i<len(l):
        arr.append(l[i])
        i+=1
    while j<len(r):
        arr.append(r[j])
        j+=1

    return arr


def mergesort(arr,s,e):

    if s==e:
        return [arr[s]]

    l=[]
    r=[]

    mid=int((s+e)/2)

    l=mergesort(arr,s,mid)
    r=mergesort(arr,mid+1,e)

    arr=merge(l,r)
    return arr

lst=[1,3,2,5,4]
sorted=mergesort(lst,0,len(lst)-1)
print(sorted)

    
