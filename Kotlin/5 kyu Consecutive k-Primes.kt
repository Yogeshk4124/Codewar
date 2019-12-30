package conseckprimes

fun consecKprimes(k:Int, arr:LongArray):Int {
   var c=0
    if(arr.size==1)return 0
	for(i in 0..arr.size-2)
        if(Check(arr[i])==k && k==Check(arr[i+1])) c++
    return c;
}
fun Check(n1:Long):Int{
	var n=n1;
	var c=0
	for(j in 2..n)
    while(n % j == 0.toLong()){
		c++;
		n/=j;
      	}
	return c
}
