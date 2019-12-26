fun digPow(n: Int, p: Int): Int {
 var s:String=n.toString();
	var a=p;
	var sum:Int = 0;
	for(i in s)
		sum+= Math.pow( i.toDouble()-'0'.toDouble(),a++.toDouble()).toInt();
	if(sum%n==0)return sum/n;
	return -1;
}
