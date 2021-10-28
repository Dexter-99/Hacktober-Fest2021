package com.BHAVESH;

class A{
    int a =21;
    void read(){
        System.out.println("Hello Bhavuk");
    }
}

class B extends A{
    int b = 18;
    void show(){
        System.out.println("Hello Swastu");
    }
}
class C extends B{
    int c = 19;
    void display(){
        System.out.println("Hello Deven");
    }
}




public class MultiLevelInheritence {
    public static void main(String[] args) {

        C object = new C();
        object.read();
        System.out.println( object.a);

    }
}
