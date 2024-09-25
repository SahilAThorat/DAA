
/*
 Implement a problem of smallest number with at
least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the
smallest number whose factorial contains at least n
trailing zeroes.
Input : n = 1 Output : 5
Input : n = 6 Output : 25



*/


#include<iostream>
using namespace std;
int countzero(int num)
{
    int count=0;
    for(int i=5;num/i>=1;i*=5)
    {
        count+=num/i; 
    }
    return count;
     

}
int main()
{
    int n;
    int sum=0;
    cout<<"Enter value of n";
    cin>>n;
    int low=0;
    int result=-1;
    int high=5*n;
    while(low<=high)
    {
        int mid =(low+high)/2;
        int num=countzero(mid);
        if(num<n)
        {
            low=mid+1;

        }
        else if(num>n)
        {
            high=mid-1;
        }
        else
        {
            result= mid;
            high=mid-1;
        }
    }
    if(result !=-1)
    {
        cout<<result;
    }
    else{
        cout<<"not found";
    }
    

   
    
}