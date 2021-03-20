#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n;
    cin>>n;
    while(n--)
    {
        string expr;
        cin>>expr;
        int len = expr.length(); 
        if (len%2) 
        {
            cout<<-1<<endl;
            continue;
        }
        stack<char> s; 
        for (int i=0; i<len; i++) 
        { 
            if (expr[i]=='}' && !s.empty()) 
            { 
                if (s.top()=='{') 
                    s.pop(); 
                else
                    s.push(expr[i]); 
            } 
            else
                s.push(expr[i]); 
        } 
        int red_len = s.size(); 
        int n = 0; 
        while (!s.empty() && s.top() == '{') 
        { 
            s.pop(); 
            n++; 
        } 
  
         cout<< (red_len/2 + n%2)<<endl; 
    }
	return 0;
}
