num=[7,8,9,5]
# print(num[0])                                             #1st way of printing elements of list
# for i in num:
#     print(i)                                              #2nd way of printing elements of list
# #The other way of printing the values of a list is iterator.
# #Behind the scenes,for loop also uses iterator.
# it=iter(num)
# # __iter__()  converts list into  iterator
# print(next(it)) #first it prints 7
# print(next(it))#then 8 and so on

class Top10:
    def __init__(self):
        self.num=1
    def __iter__(self):                        #iter gives object of iterator
        return self
    def __next__(self):
        if self.num<=10:    
            val=self.num
            self.num+=1
            return val
        else:
            raise StopIteration                      #to stop for loop raise an exception
values=Top10()
for  i in values:
    print(i)
