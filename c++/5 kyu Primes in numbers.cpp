using namespace std;

class PrimeDecomp
{
public:
    static std::string factors(int n){
    stringstream str;	
		for(int i=2;i<=n;i++)
		{
			int c=0;
			while(n%i==0){
			c++;
			n/=i;
      }
			if(c>1) str<<"("<<i<<"**"<<c<<")";
			if(c==1) str<<"("<<i<<")";
			if(i>2)i++;
		}
	return str.str();
  }
};
