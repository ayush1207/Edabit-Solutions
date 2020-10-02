/*
  * This program finds the integer which appears odd number of times
  * Problem : https://edabit.com/challenge/wgnmQTbfssuhvZHqe
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
using namespace std;

int main() {
    int n;
    int ar[n];
    cout << "Enter number of integers in the array: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        cin>>ar[i];
    }
 int count=0;
  for(int i=0;i<n;i++)
  {
   for(int j=i;j<n;j++)
   {
    if(ar[i]==ar[j])
     count++;
   }
   if(count%2!=0)
    cout<<arr[i];
    count=0;
  }
 getch();
}
