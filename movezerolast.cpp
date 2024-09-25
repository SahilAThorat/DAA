

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
       int l=0;
       for(int r=0;r<nums.size();r++)
       {
          if(nums[r]!=0)
          {
            swap(nums[r],nums[l]);
            l+=1;
          }


       }
       cout<<"[";
       for(int j=0;j<nums.size();j++)
       {
             cout<<nums[j]<<",";

       }
       cout<<"]";
      
    }
   
};
int main()
{
    Solution s;
     vector <int> nums;
      nums={1,7,1,1,4,0,3,0};
       s.moveZeroes(nums);
    return 0;
}