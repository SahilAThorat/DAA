#include<iostream>
using namespace std;
int main(){
    int a[10],size,b;
    cout<<"Enter the no of element :\n";
    cin>>size;
    cout<<"Enter the Element :\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        if(a[i]==0){
            b=i;
            for(int j=b;j<size;j++){
                a[j]=a[j+1];
            }
            a[size-1]=0;
        }
    }
     for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}