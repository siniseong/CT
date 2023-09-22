#include <iostream>
#include <stack>
using namespace std;

stack<char> s1;
int main(){
    string in;
    cin >> in;
    
    int sum1 = 1;
    int sum2 = 0;
    
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    int chk = 1;
    for(int i=0;i<in.size();i++){
    	if(in[i]=='('){
    		cnt1++;
		}
		else if(in[i]==')'){
			cnt2++;
		}
		else if(in[i] == '['){
			cnt3++;
		}
		else if(in[i]==']'){
			cnt4++;
		}
		
		if(cnt1<cnt2 || cnt3<cnt4){
			chk = 0;
			break;
		}
	}
	
	if(cnt1!=cnt2 || cnt3!=cnt4){
		chk = 0;
	}
    
    if(chk==1){
    	for(int i=0;i<in.size()-1;i++){
    	if(in[i]=='(' && in[i+1] == ')'){
    		sum1*=2;
    		sum2 += sum1;
		}
		else if(in[i]=='[' && in[i+1] == ']'){
			sum1*=3;
			sum2+=sum1;
		}
		else if(in[i] == '(' && in[i+1]!=']'){
			sum1 *= 2;
		}
		else if(in[i] == '[' && in[i+1]!=')'){
			sum1 *= 3;
		}
		else if(in[i] == ')'){
			sum1 /= 2;
		}
		else if(in[i] == ']'){
			sum1 /= 3;
		}
	}
	}
    
	
	cout << sum2;

}

