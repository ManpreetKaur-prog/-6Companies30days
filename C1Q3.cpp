class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        int i=0,j=0;
        long long p=1;
        long long ans=0;
        while(j<arr.size())
        {
            p*=arr[j];
            if(p>=k)
            {
                while(i<=j && p>=k)
                {
                    p/=arr[i];
                    i++;
                }
            }
                j++;
                ans+=j-i;
            
            //cout<<count<<" "<<p<<"  ";
        }
        return ans;
    }
};
