vector<int> Solution::flip(string A) {

    int maxcount=INT_MIN;
    int count=0,l=-1,r=-1,ltemp=0,c=0;

    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='0')
        count++;
        else{
        count--;
        c++;
        }

        if(count>maxcount)
        {
            maxcount=count;
            l=ltemp;
            r=i;
        }
        if(count<0)
        {
            count=0;
            ltemp=i+1;
        }
    }
    if(c==A.length())
    {
        return {};
    }
    vector<int>result;
    result.push_back(l+1);
    result.push_back(r+1);
    return result;

}
