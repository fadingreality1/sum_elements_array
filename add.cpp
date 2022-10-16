#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cout<<"Enter the no. of elements in array:-";
    cin>>n;
    
    int a[n];

    cout<<"\nEnter the Elements of array:-";
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout<<"Sum is:- "<<sum<<endl;
    
    return 0;
}