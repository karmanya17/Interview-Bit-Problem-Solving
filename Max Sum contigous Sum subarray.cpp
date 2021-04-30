int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,maxSum=INT_MIN;
    for(auto i : A){
        sum+=i;

        maxSum=max(sum,maxSum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxSum;

}
