/*
Problem-Task: Create a function that takes an array of numbers and returns only the even values.
Problem Link: https://edabit.com/challenge/7iT6DbY3GsHnLBPq4
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
int arr[8] = {1,2,3,4,5,6,7,8};
//int result[8];
for(int i=0;i<8;i++)
  {
    if(arr[i] % 2 == 0)
       cout<<arr[i];
}
getch();
}
