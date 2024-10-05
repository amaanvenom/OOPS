You are given an array of elements. Now you need to choose the best index of this array. An index of the array is called best if the special sum of this index is maximum across the special sum of all the other indices
#include <iostream>
using namespace std;
//Brute Force Approach - Time : O(n3), Space : O(n)
int specialSum (int * nums, int size){
 int temp {INT_MIN};
 for(int i = 0; i < size; i++){
 int sum = 0;
 for(int k = i, y = 1; k + y <= size; k += y, y++){
 for (int l = 0; l < y; l++){ sum += nums[k + l]; }
 }
 if(temp<sum){ temp = sum; }
 }
return temp;
}
int main(){
 int size;
 cout<<"\nEnter number of Elements : "; cin>>size;
 int nums [size];
 cout<<"Enter the numbers : ";
 for (int i = 0; i < size; i++) cin>>nums[i];
 cout<<"Special Sum : "<<specialSum(nums, size)<<endl
 return 0;
}
