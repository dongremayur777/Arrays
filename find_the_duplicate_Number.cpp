//You must not modify the array (assume the array is read only).
//You must use only constant, O(1) extra space.
//Your runtime complexity should be less than O(n2).
//There is only one duplicate number in the array, but it could be repeated more than once.

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
int a[n];
for(i=0;i<=n;i++)
{
cin>>a[i];
}
sort(a,a+n);
for(i=0;i<=n-1;i++)
{
if(a[i]==a[i+1])
{
cout<<a[i]<<endl;
}
}
}






https://leetcode.com/problems/find-the-duplicate-number/solution/
See Third Method Floyd's Hare and Tortoise
