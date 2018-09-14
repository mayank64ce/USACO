/*
ID: mayank_4
TASK: beads
LANG: C++14
*/
#include <iostream>

using namespace std;

int find(int cur,string s)
{
    while(s[cur]=='w')
    {
        cur++;
        if(cur>=s.length())
        {
            cur=0;
        }

    }
    return cur;
}

int main() {
    //freopen("beads.in", "r", stdin);
    //freopen("beads.out", "w", stdout);
	int n;
	string s;
	cin>>n>>s;

	int count_super=0;

	int l=s.length();

	for(int i=0;i<l;i++)
	{
	    int k=find(i,s);
	    int j=k+1;
	    if(k==l)
	    {
	        j=0;
	    }
	    char c=s[k];
	    char c2=s[j];

	    int count=0;

	    while((s[k]==c)||(s[k]=='w'))
	    {
	        count++;
	        k--;
	        if(k==0)
	        {
	            k=l-1;
	        }
	    }

	    while((s[j]==c2)||(s[j]=='w'))
	    {
	        count++;
	        j++;
	        if(j==l){
	            j=0;
	        }
	    }

	    if(count>count_super)
	    {
	        count_super=count;
	    }

	}
	cout<<count_super<<"\n";

	return 0;
}
