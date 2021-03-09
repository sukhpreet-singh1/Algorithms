vector<int> spirallyTraverse(vector<vector<int> > matrix, int row, int c) 
{
        vector<int>arr;
        int u=0,d=row-1,l=0,r=c-1;
        int dir=0;
        while(u<=d && l<=r)
        {
            if(dir==0)
            {
                for(int i=l;i<=r;++i)
                {
                    arr.push_back(matrix[u][i]);
                }
                u+=1;
            }
            else if(dir==1)
            {
                for(int i=u;i<=d;++i)
                {
                    arr.push_back(matrix[i][r]);
                }
                r-=1;
            }
            else if(dir==2)
            {
                for(int i=r;i>=l;--i)
                {
                    arr.push_back(matrix[d][i]);
                }
                d-=1;
            }
            else if(dir==3)
            {
                for(int i=d;i>=u;--i)
                {
                    arr.push_back(matrix[i][l]);
                }
                l+=1;
            }
            dir=(dir+1)%4;
        }
        return arr;
}
