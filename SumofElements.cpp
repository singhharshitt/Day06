
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int sum= 0;
    for(int i=0;i<n; i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum<<endl;

    return 0;
}
