#include <bits/stdc++.h>
using namespace std;

int insertion_sort(int a[], int n) {
    int j, i;
    for (i = 1; i <=n; i++) {
        int x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x) {    
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;  
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

    insertion_sort(a, n);

    return 0;
}
    