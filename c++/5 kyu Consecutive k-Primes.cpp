#include <vector>
using namespace std; 
class PrimeConsec
{
private:
    static int countPrimeDiv(long long n){
    int c=0;
		for(long long i=2;i<=n;i++)
		while(n%i==0)
    {
		  n/=i;
		  c++;
	   }	
		return c;
	}
public:
  static int consecKprimes(int k, std::vector<long long> &arr){
  int c=0;
	for(int i=0;i<arr.size()-1;i++)
	if(countPrimeDiv(arr[i])==countPrimeDiv(arr[i+1])&&countPrimeDiv(arr[i+1])==k)  c++;
	return c;
	}
};
