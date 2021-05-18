int Solution::solve(vector<string> &A) {

    int left=0,right=A.size()-1;
    sort(A.begin(),A.end());
    while(left<right-1){
        float sum=stof(A[left])+stof(A[left+1])+stof(A[right]);
        if(sum<1)
        left++;
        else if(sum>2)
        right--;
        else
        return 1;
    }
    return 0;

}
