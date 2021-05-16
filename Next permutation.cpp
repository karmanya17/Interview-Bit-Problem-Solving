vector<int> Solution::nextPermutation(vector<int> &A) {
    int index=-1;
    for(int i=A.size()-2;i>0;i--)
    {
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }
    int x,y;
    if(index==-1)
    {
        x=0;
        y=A.size()-1;
        while(x<y)
        {
            swap(A[x],A[y]);
            x++;
            y--;
        }
        return A;
    }
    int mindiff=INT_MAX,mindiffi=-1;
    for(int i=index+1;i<A.size();i++)
    {
        if(A[i]>A[index]&&A[i]-A[index]<mindiff)
        {
            mindiff=A[i]-A[index];
            mindiffi=i;
        }
    }
    swap(A[index],A[mindiffi]);
    x=index+1;
    y=A.size()-1;
    while(x<y)
    {
        swap(A[x],A[y]);
        x++;
        y--;
    }
    return A;
}
