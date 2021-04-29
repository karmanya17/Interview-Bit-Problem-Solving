int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int sum=0,x,y,s;
    for(int i=0;i<A.size()-1;i++)
    {
        x=abs(A[i+1]-A[i]);
        y=abs(B[i+1]-B[i]);
        s=max(x,y);
        sum+=s;
    }
    return sum;
    
}
