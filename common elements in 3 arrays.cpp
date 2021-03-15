vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0,j=0,k=0;
            vector<int>ar;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                    {
                        ar.push_back(A[i]);
                        i++;
                        j++;
                        k++;
                        
                    }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
            }
            set<int>ary;
            set<int>::iterator itr;
            for(int i=0;i<ar.size();++i)
            {
                ary.insert(ar[i]);
            }
            vector<int>r;
            for(itr=ary.begin();itr!=ary.end();++itr)
            {
                r.push_back(*itr);
            }
            return r;
        }

