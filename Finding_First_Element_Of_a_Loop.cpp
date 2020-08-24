#include<bits/stdc++.h>
using namespace std;
int findloop(int nums[])
{
int tortoise = nums[0];
    int hare = nums[0];
    do {
      tortoise = nums[tortoise];
      hare = nums[nums[hare]];
    } while  (tortoise != hare);

    // Find the "entrance" to the cycle.
    tortoise = nums[0];
    while (tortoise != hare) {
      tortoise = nums[tortoise];
      hare = nums[hare];
    }

    return hare;
  }
int main()
{
int n;
cin>>n;
int nums[n];
for(int i=0;i<n;i++)
{
cin>>nums[i];
}
cout<< findloop(nums);
}
