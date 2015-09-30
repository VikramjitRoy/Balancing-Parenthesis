#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	vector <char> stack;
	
	int i=0;
	
	while(s[i]!='\0'){
		if(s[i]=='('||s[i]=='{'||s[i]=='['){
			stack.push_back(s[i]);
		}
			
		else{
			if(s[i]==')'&&stack[stack.size()-1]!='('){
				return 0;
			}
			else if(s[i]=='}'&&stack[stack.size()-1]!='{'){
				return 0;
			}
			else if(s[i]==']'&&stack[stack.size()-1]!='['){
				return 0;
			}
			stack.pop_back();
		}
		i++;
	}
	if(stack.size()==0){
		return 1;
	}
	else
		return 0;
}

int main(){
	bool res;
	string str;
	cin>>str;
	res = check(str);

	if(res)
		printf("Balanced\n");
	else
		printf("Unbalanced\n");
	
	return 0;	
}
