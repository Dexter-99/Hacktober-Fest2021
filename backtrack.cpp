#include<iostream>
using namespace std;


// code to check whether our rat can move in any direction or not
bool issafe(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

//main function
bool ratinmaze(int** arr,int x,int y,int n,int** solArr)
{

    //base condition agar rat pahuch gaya
    if(x==n-1 && y==n-1)
    {
        cout<<endl;
        solArr[x][y]=1;
        return true;
        
    }

    //safe condition
    if(issafe(arr,x,y,n))
    {
        solArr[x][y]=1; //set as true

        //x+1 is for ki right mai rat move krega ya nhi if yes then
        if(ratinmaze(arr,x+1,y,n,solArr))
        {
            return true;
        }

        //y+1 agar right mai nhi toh down ke liye
        if(ratinmaze(arr,x,y+1,n,solArr))
        {
            return true;
        }

        //agar right down kahi nhi chl payega to solarr=0 ho jayega
        solArr[x][y]=0;
        return false;
    }

    return false;
}

int main()
{
    int n;
    cin>>n;

    //allocating memory dynamically
    int** arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }

    //dynamically input lene ke liye do baar for loop lgana padega
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        
    }


    int** solArr=new int*[n]; 
    for(int i=0;i<n;i++)
    {
        solArr[i]=new int[n];   //allocating memory dynamically
        for(int j=0;j<n;j++)
        {
            solArr[i][j]=0;     //initialize 0 se krna padega kyuki garbage value de skta hai
        }
    }

    if(ratinmaze(arr,0,0,n,solArr))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

