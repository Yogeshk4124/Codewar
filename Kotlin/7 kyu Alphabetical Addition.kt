fun addLetters(arr: List<Char>): Char {
if(arr.size==0)  return 'z';
var s=0;
for(i in arr)  s+=i-'`';
if(s%26==0)  return 'z';
return (96+(s%26)).toChar();
}
