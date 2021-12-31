string int_to_str(int x) {
   stringstream ss;
   ss << x;
   return ss.str();
}
string encode(string src)
{     
  //Your code here
  int i=1,count=1;
  char element1=src[0];
  string res;
  res+=element1;
  while(src[i]!='\0')
  {
      if(src[i]==element1)
      count++;
      else
      {
          res+=int_to_str(count);
          //cout<<count;
          count=1;
          element1=src[i];
          res+=element1;
          
      }
      i++;
  }
  res+=int_to_str(count);
  return(res);
}     
 
