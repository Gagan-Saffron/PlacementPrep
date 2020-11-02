class Hashtable:

    def __init__(self,max):
        self.max=max
        self.list=[None]*max
        print(self.list)

    def gethash(self,key):

        asci=0

        for s in str(key):
            asci+=ord(s)

        return asci % self.max

    def put(self,element):

        key=element.key
        index=self.gethash(key)

        if self.list[index]==None:
            self.list[index]=element
            print("Added new element")
            return True
        else:
            for ele in self.list[index]:
                if ele.key==key:
                    ele.value=element.value
                    print("Updated existing element.")
                    return True
            self.list[index].append(element)
            print("Appended to chain.")
            return True


class Students:

    def __init__(self,key,value):
        self.key=key
        self.value=value


st1=Students("anusha",100)
st2=Students("Gagan",95)
st3=Students("Gagan",96)

school=Hashtable(5)

print(school.put(st1))
print(school.put(st2))
print(school.put(st3))