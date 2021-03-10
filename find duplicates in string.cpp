void Print_duplicates(String s)
{
	unordered_map<char,int>mp;
	for(int i=0;i<s.size()-1;++i)
	{
		mp[s[i]]++;
	}
	for( auto i:mp)
	{
		if(i.second>1)
			cout<<i.first<<" ";
	}
}
