#Method Overlaoding means in class two methods with same distinguished by their type and number of arguments.
#Method overloading is not directly supported in python.
class Student:
    def __init__(self,m1,m2):
        self.m1=m1
        self.m2=m2
    def sum(self,a=None,b=None,c=None):
        if a!=None and b!=None and c!=None:
            s=a+b+c
        else:
            s=a+b
        return s
s1=Student(58,69)
print(s1.sum(5,9))
print(s1.sum(5,9,6)) #it gives error
#but after assigning a,b,c as none we can do it