typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n){
  	ull f=1,s=1,sum=2,t;
  	for(int i=2;i<=n;i++)
  	{
  		t=f+s;
  		f=s;
		s=t;
  		sum+=s;
	}
  return sum*4;
  }
};
