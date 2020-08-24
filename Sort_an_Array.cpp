//No special sorting algorithm 
//And no extra space to be used
//https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,count0=0,count1=0,count2=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
if(a[i]==0)
count0++;

if(a[i]==1)
count1++;

if(a[i]==2)
count2++;

}
i=0;
while(count0>0)
{
a[i++]=0;
count0--;
}
while(count1>0)
{
a[i++]=1;
count1--;
}
while(count2>0)
{
a[i++]=2;
count2--;
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}


