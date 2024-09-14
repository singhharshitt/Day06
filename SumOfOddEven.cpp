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
    int Esum= 0;
    int Osum=0;
    for(int i=0;i<n; i++){
        if(arr[i]%2==0){
            Esum+=arr[i];
        }else{
            Osum+=arr[i];
        }
    }
    if(Osum>0){
        cout<<"Sum of the Odd number: "<<Osum<<endl;
        
    }
    if(Esum>0){
        cout<<"Sum of the Even number: "<<Esum<<endl;
    }
    

    return 0;
}
