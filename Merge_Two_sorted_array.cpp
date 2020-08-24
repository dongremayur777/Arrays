//Merge two sorted arrays without O(1) extra space
//geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/
#include<bits/stdc++.h>
void merge(int a[], int b[], int m, int n) 
{ 
    // Iterate through all elements of ar2[] starting from 
    // the last element 
    for (int i=n-1; i>=0; i--) 
    { 
        /* Find the smallest element greater than ar2[i]. Move all 
           elements one position ahead till the smallest greater 
           element is not found */
        int j, last = a[m-1]; 
        for (j=m-2; j >= 0 && a[j] > b[i]; j--) 
            a[j+1] = a[j]; 
  
        // If there was a greater element 
        if (j != m-2 || last > b[i]) 
        { 
            a[j+1] = b[i]; 
            b[i] = last; 
        } 
    } 
} 
using namespace std;
int main()
{
int n,m,i;
cin>>n;
cin>>m;
int a[m],b[n];
for(i=0;i<m;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
cin>>b[i];
}
merge(a,b,m,n);
for(i=0;i<m;i++)
{
cout<<a[i]<<" ";
}
for(int i=0;i<n;i++)
{
cout<<b[i]<<" ";
}
}
