#include <iostream>

using namespace std;

void quicksort(int, int, int);

int partition(int, int, int);

int partition(int* a, int s, int e)

{

    int piviot = a[e];

    int pind = s;

    int i, t;

    for (i = s; i < e; i++) {

        if (a[i] <= piviot) {

            t = a[i];

            a[i] = a[pind];

            a[pind] = t;

            pind++;

        }

    }

    t = a[e];

    a[e] = a[pind];

    a[pind] = t;

    return pind;

}

void quicksort(int* a, int s, int e)

{

    if (s < e) {

        int pind = partition(a, s, e);

        quicksort(a, s, pind - 1);

        quicksort(a, pind + 1, e);

    }

}

int main()

{

    int n;

    cout << "Enter number of elements : " ;

    cin >> n;

    int a[n];

    cout << "Enter the array : ";

    for (int i = 0; i < n; i++) {

        cin >> a[i];

    }

    quicksort(a, 0, n - 1);

    cout << "Sorted array is : ";

    for (int i = 0; i < n; i++) {

        cout << a[i] << " ";

    }

    return 0;

}

