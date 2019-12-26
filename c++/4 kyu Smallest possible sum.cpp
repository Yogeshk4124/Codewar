#include <vector>
#include<algorithm>
#include<climits>
using namespace std;
unsigned long long check(unsigned long long a,unsigned long long b)
{
         while(b!=0)
          {
          a=a%b;
          if (a==0)
          return b;
              if(a<b)
              swap(a,b);
          }
          return a;
}
unsigned long long solution(const std::vector<unsigned long long>& arr){
    vector<unsigned long long> v = arr;
    unsigned long long i=0,min=ULLONG_MAX,l=arr.size()-1,c=0,temp;
   sort(v.begin(), v.end()); 
    for(i=l;i>0;i--)   
      {
         temp=check(v[i],v[0]); 
         if(temp<min && temp!=0)
         min=temp;
      }
      if(v.size()==1)
      return v[0];
      return min*(l+1);
}
