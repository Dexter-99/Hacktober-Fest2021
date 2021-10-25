import java.util.*;
public class ISC2018Q1 {
    public static void main(String[] args) {
        int N;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the value of N:");
        N = in.nextInt();
        while( N < 9 || N >= 50 || N%2 !=0) {
            if(N%2 !=0)
                System.out.println("INVALID INPUT. NUMBER IS ODD.");
            else
                System.out.println("INVALID INPUT. NUMBER OUT OF RANGE.");
            System.out.println("Enter the value of N:");
            N = in.nextInt();    
        }
        Goldbach obj = new Goldbach(N);
        System.out.println("OUTPUT: PRIME PAIRS ARE");
        obj.PrimePairGenerator();
        in.close();
        }
}

class Goldbach{
public void PrimePairGenerator() {
    for (int i=3; i<Numb;i++) {
        for(int j=3; j<Numb/2+1;j++) {
            if(i+j == Numb) // if i+j equals N then we check whether both i and j are prime or not
                if(IsPrime(i))
                    if(IsPrime(j))
                        System.out.println(i+","+j);
            } // end of inner-for
        } // end of outer-for
    }

private boolean IsPrime(int N) {
    boolean flag=false;
    for(int x=0; x<Prime_Numbers.length;x++) {
        if(N==Prime_Numbers[x])
            flag=true;
        }
    return(flag);
    }
Goldbach(int N){
    Numb=N;
    }
    private int Numb; // since the range of N is too small no need to write down the prime function
    private int[] Prime_Numbers = {3,5,7,11,13,17,19,23,29,31,37,41,43,47}; 
}           // this is will save time! 2 is not included as only odd pair primes are needed
