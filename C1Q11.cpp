 sort(arr,arr+n);
      int *ans= new int[2];
      long long s1=arr[n-1],s2=n;
      for(int i=0;i<n-1;i++){
          if(arr[i]==arr[i+1]){
              ans[0]=arr[i];
          }
          s1+=arr[i];
          s2+=i+1;
      }
      ans[1]=s2 - (s1 -ans[0]);
     return ans;
