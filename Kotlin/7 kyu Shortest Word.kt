fun findShort(s: String): Int {
var l=9999999
for(i in s.split(' '))	if(i.length < l)	l=i.length
return l;
}
