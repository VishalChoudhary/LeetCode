#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
	vector<int> ds;
	while(!stack.empty()){
		ds.push_back(stack.top());
		stack.pop();
	}
	sort(ds.begin(),ds.end());
	for (int i : ds) {
        stack.push(i);
    }
}
