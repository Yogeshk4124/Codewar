fun rangeExtraction(a: IntArray): String {
  var s = ""
  var i=0;
  while(i < a.size){
    if(i+2>=a.size) s+=a[i].toString()+","
    else if(a[i+2]==a[i]+2){
      s+=a[i].toString()+"-";
      while(i<a.size-1 && a[i+1]-a[i]==1) i++;
      s+=a[i].toString()+","
    }
    else s+=a[i].toString()+","
    i++;
    }
  return s.dropLast(1)
}
