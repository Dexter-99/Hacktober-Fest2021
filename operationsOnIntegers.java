
  To change this license header, choose License Headers in Project Properties.
  To change this template file, choose Tools  Templates
  and open the template in the editor.
 
package Lab02;

import java.util.Scanner;


public class Q3 {
    public static void main(String[] args)
    {
    int q = 0;
    System.out.println(enter num to perform operations on);
    Scanner sc=new Scanner(System.in);
    q=sc.nextInt();
    MyNumber num=new MyNumber(q);
    System.out.println(Select an operation);
    System.out.println(1isPositive  n2isNegative  n3isEven  n4isOdd  n5isPrime  n6factorial  n7Exit);
    int o=sc.nextInt();
        if(o==1)
        {  
        num.ispositive();
        }
        else if(o==2)
        {
        num.isnegative();
        }
        else if(o==3)
        {
        num.iseven();
        }
        else if(o==4)
        {
        num.isodd();
        }
        else if(o==5)
        {
        num.isprime();
        }
        else if(o==6)
        {
        num.factorial();
        }
        else if(o==7)
        {
        System.out.println(exit Pressed);
        }
         else
        {
        System.out.println(Invalid Input);
        }
    }
    
}
interface IntOperations 
{
public void ispositive();
public void isnegative();
public void iseven();
public void isodd();
public void isprime();
public void factorial();

}
class MyNumber implements IntOperations
{
private int n=0;
public MyNumber(int a)
    {
    n=a;

    }

public void ispositive()
    {
    System.out.println(checkig if num is positive);
    if(n=0)
        {
        System.out.println(it is positive);
        }
    else
        {
        System.out.println(it is not positive);
        }
    }
public void isnegative()
    {
    System.out.println(checkig if num is negative);
    if(n0)
        {
        System.out.println(it is negative);
        }
    else
        {
        System.out.println(it is not negative);
        }
    }
public void iseven()
    {
    System.out.println(checkig if num is even);
    if(n%2==0)
        {
        System.out.println(it is even);
        }
    else
        {
        System.out.println(it is not even);
        }
    }
public void isodd()
    {
    System.out.println(checkig if num is odd);
    if(n%2!=0)
        {
        System.out.println(it is odd);
        }
    else
        {
        System.out.println(it is not odd);
        }
    }
public void isprime()
    {
    System.out.println(checkig if num is prime);
    int flag=0;
for(int i=2;in;i++)
{
if(n%i==0)
{
flag=1;
}
}

if(flag==1)
{
System.out.println(n+ No is not prime);
}
else
{
System.out.println(n+ No is prime);
}

}
    
public void factorial()
    {
    System.out.println(calculating factorial of num);
    int fact=1;
for(int i=1;i=n;i++)
{
fact=facti;
}

System.out.println(Factorialof+n+is=+fact);
    }
}