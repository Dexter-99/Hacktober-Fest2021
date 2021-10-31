//Finding  Factors 

/*The program takes an integer as input and print out its no. of factors and all the factors*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int n;vector<int> v;

    cin >> n;

    for(long long int i = 1;i<=n;i++){if(n%i==0){v.push_back(i);}}

    cout << v.size() << "\n";

    for(vector<int>::iterator iter = v.begin();iter != v.end();++iter){

        cout << *iter << " ";

    }

    return 0;

}
