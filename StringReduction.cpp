#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

bool charcheck(string s){
	for(int k=1;k<s.length();k++)
			if(s[k]!=s[0])
				return false;
				
	return true;	
}

void solve(string s,int n){
	int count[3];												//created an array to keep count of characters.

	count[0]=0; count[1]=0; count[2]=0;
	
	for(int i=0;i<s.size();i++){								//counting a,b,c and storing in each index of count array
		if (s[i] == 'a') 
			count[0]++;
		else if(s[i] == 'b') 
			count[1]++;
		else if(s[i] == 'c') 
			count[2]++;
	}

	int a,b,c;													//created 3 more integers and stored those count values in them. As a,b,c are easy to use in if conditions
	int sum=0;
	int xx=0;
	int co=1;
	a=count[0];
	b=count[1];
	c=count[2];
		
	for(int i=0;i<n;i++){
	
		for(int j=0;j<s.size();j++){							//if the string is same cout the string length
			if(charcheck(s)){
				co=s.length();	
				break;
			}
	
			if(a==b && b==c){									//if the count of all the 3 characters are same then the ans will be 2 always
				co=2;
			}
			if(a<=b && a<=c){																	//checking the lowest count of character. adding+1 in least count(char) and adding in others 2. 3 conditions
				a++;																			//and also checking in each condition if 2 of count went 0 then add them and store in co variable and break the loop and cout
				b--;
				c--;
				if((a==0 && b==0)||(a==0 && c==0)||(b==0 && c==0)){
					sum=a+b+c;
					co=sum;
					break;
				}
			}
			else if(b<=a && b<=c){
				a--;
				b++;
				c--;
				if((a==0 && b==0)||(a==0 && c==0)||(b==0 && c==0)){
					sum=a+b+c;
					co=sum;
					break;
				}
			}
			else if(c<=a && c<=b){
				a--;
				b--;
				c++;
				if((a==0 && b==0)||(a==0 && c==0)||(b==0 && c==0)){
					sum=a+b+c;
					co=sum;
					break;
				}
 			}
 		}
 				cout<<co<<endl;		
break;	
}
}



int main(){
string s;
int t;
cin>>t;

for(int i=0;i<t;i++){
	cin>>s;
	solve(s,t);	
	
}
 system("pause");
 return 0;
}

