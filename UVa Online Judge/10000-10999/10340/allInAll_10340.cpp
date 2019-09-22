#include <iostream>
#include <string>
using namespace std;

int main(){

	string s,t;
	bool letra,palabra;
	int a,i,j;

	while(cin>>s>>t){
		a=0;
		palabra=true;
		for (i=0;i<s.size() && palabra==true;i++){
			letra=false;
			for(j=a;j<t.size() && letra==false;j++){
				if(s[i]==t[j]){
					letra=true;
					a=j+1;
				}
			}
			if (letra==false) palabra=false;
		}

		if (palabra==true) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
        


        

	return 0;
}
                    
