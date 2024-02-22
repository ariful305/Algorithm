#include <bits/stdc++.h>
using namespace std;

int bubble_sort(int a[], int n) {
    int j, i;
   for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
          
            if (a[j] > a[j + 1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    //print the array
    for (i = 0; i < n; i++) {   
        cout << a[i] << endl;
    }
}

int main()
{
   int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }  
   
    bubble_sort(a,n);
    


    return 0;
}   