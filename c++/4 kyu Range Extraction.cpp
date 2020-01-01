#include <string>
#include <vector>
using namespace std;
std::string range_extraction(std::vector<int> v) {
  stringstream ss("");
  int c=0;
  for(int i=0;i<v.size();i++){
  	if(v[i+2]==v[i]+2){
  	ss<<v[i];
		int j=i+3;
	  while(v[j]-v[j-1]==1){j++;}
		i=j-1;
		ss<<"-"<<v[i]<<",";
	}
	else ss<<v[i]<<",";
	}
  return (ss.str()).substr(0,ss.str().length()-1);
}
