class A:
    def show(self):
        print("In A show")
class B(A):
    pass
a1=A()
b1=B()
b1.show()
#if B doesn't have show method A method will be called
#child father phone story
#if even B has show() then show() of B will be called
