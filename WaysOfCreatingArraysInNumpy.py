from numpy import *
arr=array([1,2,3,4,5])
#We need not compulsorily specify type in numpy.
print(arr)
print(arr.dtype)          #it will print int32 as type
val=array([1,2,3.0,4,5])
print(val.dtype)  
#it will show the type as float64 as all the values in array need to be of same data type so implicit type conversion takes place
print(val)
#Output - [1. 2. 3. 4. 5.]
ar=array([1,2,3,4,5],float)
#we can even specify type
print(ar)
#Output - [1. 2. 3. 4. 5.]


#2nd Way
arr1=linspace(0,15,16)
#it will break 0-15 both inclusive into 16 equal parts
print(arr1)
#Output-[ 0.  1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12. 13. 14. 15.]
arr2=linspace(0,15)
print(arr2)
#if interval is not specified then it will break into 50 different parts by default

#3rd Way
arr3=arange(1,15,2)
print(arr3)
# Output-[ 1  3  5  7  9 11 13] prints from 1 to 15(exclusive) leaving a gap of 2

# 4th way
arr4=logspace(1,40,5)
print(arr4)
#In linspace the difference between two element is same but in logspace the difference between two elements is not same.
#It prints numbers between 10^1 and 10^40 

#5th Way
arr5=zeros(10,int)
print(arr5)
#all 10 elements to be 0's
#by default it will give elements in float but if we specify int then it will give int values.
arr6=ones(10,int)
print(arr6)
