#include <bits/stdc++.h>
using namespace std;

int selection_sort(int a[], int n) {
    int j,i,min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }  
        if (min != i)
        {
            swap(a[i],a[min]);
        }      
       
   }
   //print the array
    for (i = 0; i < n; i++) {   
        cout << a[i] << endl;
    }
   
}

int main() {
    int n;
    cin >> n;
    int a[n];
    

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selection_sort(a, n);

    return 0;
}
    