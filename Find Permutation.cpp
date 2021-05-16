vector<int> Solution::findPerm(const string A, int B) {
    int i=0,j=B;
    int n=1;
    vector<int>res;
    for(int k=0;k<A.length();k++)
    {
        if(A[k]=='I')
        {
            res.push_back(n);
            n++;
        }
        if(A[k]=='D')
        {
            res.push_back(B);
            B--;
        }
    }
    res.push_back(n);
    return res;
    
}
