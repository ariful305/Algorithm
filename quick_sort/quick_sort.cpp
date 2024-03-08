    #include <bits/stdc++.h>
    using namespace std;

    int partition(int a[], int low,int high) {
        int pivot = a[low];  
        int i = low, j= high;
        while (i < j)
        {

        while (a[i] <= pivot)
        {
            i++;
            
        }
        
        while (a[j] > pivot)
        {
            j--;
            
        }
        if (i < j)
        {
            swap(a[i],a[j]);
        }
        }
        swap(a[low],a[j]);

        return j;
    
    }
    
    void quick_sort(int a[],int low,int high){

        if(low < high){

        int p = partition(a,low,high); 

        quick_sort(a,low,p-1);
        quick_sort(a,p+1,high);

        }    
    
    }


    int main() {
        int n;
        cin >> n;
        int a[n];
        

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    quick_sort(a,0,n-1);
        //print the array
        for (int i = 0; i < n; i++) {   
            cout << a[i] << endl;
        }

        return 0;
    }
        