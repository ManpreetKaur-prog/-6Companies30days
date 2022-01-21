class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque <int> dq(k);
        int i=0;
        vector<int> v;
            for(i=0;i<k;i++)
            {
            while(!dq.empty()&&arr[i]>=arr[dq.back()]) //pop if already present element is less
            dq.pop_back();
            dq.push_back(i);
            }//adding new element to rear
            for(;i<n;i++)
            {
                v.push_back(arr[dq.front()]); 
                while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front(); //removing out of window elements
                while((!dq.empty()) && arr[i]>=arr[dq.back()])
                dq.pop_back(); //removing smaller elements
                dq.push_back(i); // adding new elements
            }
            v.push_back(arr[dq.front()]);
        return v;
    }
};
