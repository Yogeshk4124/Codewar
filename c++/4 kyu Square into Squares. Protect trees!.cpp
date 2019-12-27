#include<vector>
using namespace std;
vector<long long> v;
bool solver(long long n,long long i){
		if(n==0) return true;
  	for(long long j=i;j>=0;j--){  
  		  if(j*j<=n){
  		  v.push_back(j);
  			if(solver(n-(j*j),j-1))return true;
        v.pop_back();}
	  	}
	  	return false;
	}
class Decomp{
  public:
  static std::vector<long long> decompose(long long n) {
  v.clear();
 	if(solver(n*n,n-1)){ reverse(v.begin(),v.end()); return v;}
  else return {};
  }};
