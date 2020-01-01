using ull = unsigned long long;

ull exp_sum(unsigned long long n) {
  n=n+1;
  ull a[n][n];
  for(ull i=0;i<n;i++)
  for(ull j=0;j<n;j++)
  a[i][j]=0;
  a[0][0]=1;
  for(ull i=1;i<n;i++){
    for(ull j=0;j<n;j++){
      if(i>j)
      a[i][j]=a[i-1][j];
      else{
      ull f,s;
      f=a[i-1][j];
      s= a[i][j-i];
      a[i][j]=f+s;
      }
    }
  }
return a[n-1][n-1];
}
