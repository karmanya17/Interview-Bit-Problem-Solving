vector<int> Solution::plusOne(vector<int> &A) {
        }
        else
        {
            A[j]=A[j]+1;
            while(A[0]==0)
            A.erase(A.begin());
            return A;
        }
        j--;
    }
    A.insert(A.begin(),1);
    return A;
}
