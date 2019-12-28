#include <bits/stdc++.h> 
using namespace std;
int FindOutlier(std::vector<int> arr)
{
   int check=0;
   set<int> temp (arr.begin(),arr.end());
   arr.assign(temp.begin(),temp.end());
   if(arr[0]%2==arr[1]%2)check=arr[0]%2;
   else check=arr[2]%2;
   for(int j=0;j<arr.size();j++)if(arr[j]%2!=check && arr[j]%2!=-check) return arr[j];
}
