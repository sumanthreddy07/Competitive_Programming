int Solution::solve(vector<int> &A) {
    
    sort(A.begin(),A.end(),greater<int>());
    int n=A.size(),max=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(A[i]==i & A[i]!=max & A[i]>=0)
            return 1;
    
        if(A[i]<max)
            max=A[i];
    }
    return -1;
}
