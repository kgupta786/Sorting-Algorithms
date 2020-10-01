#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	
	stack<int>st;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		st.push(a);
		/* code */
	}

	while(!st.empty())
	{
		cout<<st.top();
		st.pop();

	}




	


	return 0;
}