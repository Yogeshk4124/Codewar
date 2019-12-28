fun find(num2: Array<Int>): Int {
  var check:Int
  if(num2[0]%2==num2[1]%2||num2[0]%2==-num2[1]%2)	check=num2[0]%2
  else	check=num2[2]%2;
  for(i in num2) if(i%2!=-check && i%2!=check) return i
  return 0;
}
