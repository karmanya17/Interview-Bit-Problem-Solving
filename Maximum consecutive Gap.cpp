int Solution::maximumGap(const vector<int> &A) {
    int maxval=*max_element(A.begin(),A.end());
    int minval=*min_element(A.begin(),A.end());
    int n=A.size();
    vector<int>bmax(n-1,INT_MIN);
    vector<int>bmin(n-1,INT_MAX);
    float divide=(float)(maxval-minval)/(float)(n-1);
    for(int i=0;i<n;i++)
    {
        if(minval==A[i]||maxval==A[i]) continue;
        int index=(A[i]-minval)/divide;
        bmax[index]=max(bmax[index],A[i]);
        bmin[index]=min(bmin[index],A[i]);
    }
    int prev=minval;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(bmin[i]==INT_MAX) continue;
        ans=max(ans,bmin[i]-prev);
        prev=bmax[i];
    }
    ans=max(ans,maxval-prev);
    return ans;
}
