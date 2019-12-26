#include<math.h>
class DigPow
{
public:
  static int digPow(int n, int p){
  int sum=0,m=floor(log10(n)+1),a=n;
	m+=p-1;
	while(n>0){
  	sum+=pow((n%10),m--);
	n=n/10;	}
	if(sum%a==0)return sum/a;
	return -1;
  }
};
