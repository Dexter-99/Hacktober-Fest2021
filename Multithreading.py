from threading import *
from time import sleep
#Thread is a lightweight process.
#One task is divided into multiple processes in any application.
#When we are using MS-WORD we are typing at same time as of spell check.
#Threading is required for multitasking.
# class Hello:
#     def run(self):
#         for  i in range(5):
#             print("Hello")


# class Hi:
#      def run(self):
#         for  i in range(5):
#             print("Hi")
# t1=Hello()
# t2=Hi()
# t1.run()
# t2.run()
# Normally it prints Hello 5 times then Hi 5 times
#Let's say it takes 5 second to print 5 Hello and Hi respectively.
#By default every execeution has one thread i.e Main thread.
#We can make thread by making it as subclass of Thread.
class Hello(Thread):
    def run(self):
        for  i in range(5):
            print("Hello")
            sleep(1)                     #after writing sleep we get alternate Hi Hello


class Hi(Thread):
     def run(self):
        for  i in range(5):
            print("Hi")
            sleep(1)
t1=Hello()
t2=Hi()
t1.start()                     #we need to call start to make a thread 
sleep(0.2)
t2.start()                     #we need to call start to make a thread
t1.join()
t2.join()                     #main thread waits for t2
print("Bye")                   #we may get bye in between hi hello as it is execeuted by main thread
#There will be three threads one is main thread.
#run is an inbuilt method
#if we make any other method it will not run
