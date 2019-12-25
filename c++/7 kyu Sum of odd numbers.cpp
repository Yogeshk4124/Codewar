using namespace std;
long long rowSumOddNumbers(unsigned n){
if(n==1)
return 1;
int sum=1;
for(int i=2;i<n;i++)
  sum+=(i)*2;	
	return(n*(2*(sum+2)+((n-1)*2)))/2;//using sum of n terms Arithemetic progression
}
