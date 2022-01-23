void showdq(deque<int> g)
  {
      deque<int>::iterator it;
      for(it=g.begin();it!=g.end();++it)
      {
          cout<<*it<<" ";
      }
  }
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
         vector<int> ret; //contains maximum of k elements
       deque<int> dq; 
       for(int i=0;i<n;i++){
           while(!dq.empty() and arr[i]>=arr[dq.back()]) 
           dq.pop_back();
           dq.push_back(i);
           if(i>=k-1){
               if(i-k==dq.front()) 
               dq.pop_front();
               ret.push_back(arr[dq.front()]);
               //cout<<arr[i]<<"->arr[i] "<<arr[dq.back()]<<"->arr[dq.back] ";
               showdq(dq);
               cout<<"  ";
               
           }
           
       }
       return ret;
    }
