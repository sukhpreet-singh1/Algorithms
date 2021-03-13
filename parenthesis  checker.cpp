 bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        for(int i=0;i<x.size();++i)
        {
            if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            {
                s.push(x[i]);
                continue;
            }
            if(s.empty())
            return false;
            
                if(x[i]=='}' && s.top()=='{')
                {
                    s.pop(); 
                }
                else if(x[i]==']' && s.top()=='[')
                {
                    s.pop(); 
                }
                else if(x[i]==')' && s.top()=='(')
                {
                    s.pop(); 
                }
                else
                {
                    return false;
                }
                
            
        }
        return s.empty();
            
    }
