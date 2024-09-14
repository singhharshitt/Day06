
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
    int Ecount= 0;
    int Ocount=0;
    for(int i=0;i<n; i++){
        if(arr[i]%2==0){
            Ecount++;
        }else{
            Ocount++;
        }
    }
    if(Ocount>0){
        cout<<"Number of the Odd numbers: "<<Ocount<<endl;
        
    }
    if(Ecount>0){
        cout<<"Number of the Even numbers: "<<Ecount<<endl;
    }
    

    return 0;
}
