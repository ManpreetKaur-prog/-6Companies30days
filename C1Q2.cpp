class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // code here
        
        int x=0,y=1;
        if(l2[x]>l1[x])
        {
            if(l2[x]>r1[x])
            return false;
        }
        if(l1[x]>l2[x])
        {
            if(l1[x]>r2[x])
            return false;
        }
        if(l2[y]>l1[y])
        {
            if(r2[y]>l1[y])
            return false;
        }
        if(l1[y]>l2[y])
        {
            if(r1[y]>l2[y])
            return false;
        }
        return true;
    }
};
