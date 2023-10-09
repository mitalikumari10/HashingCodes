#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter the number of elements in array";
    cin >> n;
   
    int arr[n];
     cout<<"enter elements in array";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"enter number of elements to be fetched";
    cin >> q;
    cout<<"enter list of elements to be fetched in query to know their frequency";
    while (q--) {
        
        int number;
         
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}