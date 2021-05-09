int Solution::solve(int A, vector<int> &B) {
  int countsumby3=0;
    int count2sumby3=0;
    int sum=0;
    for(int i=0;i<B.size();i++)
    {
        sum+=B[i];
    }
    if(sum%3!=0)
    {
        return 0;
    }
    int s1=0;
    for(int i=0;i<B.size()-1;i++)
    {
        s1+=B[i];
        if(s1==2*sum/3){
            count2sumby3+=countsumby3;
        }

        if(s1==sum/3)
        {
            countsumby3++;
        }
    }
    return count2sumby3;
}
