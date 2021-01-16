 void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int col0=1,rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            if(matrix[i][0]==1)
            col0=0;
            for(int j=1;j<cols;j++)
            if(matrix[i][j]==1)
            matrix[0][j]=matrix[i][0]=1;
        }
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=cols-1;j>=1;j--)
            if(matrix[0][j]==1||matrix[i][0]==1)
            matrix[i][j]=1;
            if(col0==0)
            matrix[i][0]=1;
        }
    }