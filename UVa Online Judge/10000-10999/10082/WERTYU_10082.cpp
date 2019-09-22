#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	string in;
	char lett[]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
    vector<char> v(lett,lett+sizeof(lett)/sizeof(char));
    int p;

    while(getline(cin,in)){
    	for (int i=0;i<in.size();i++){
    		if (in[i]==' ') cout<<' ';
    		else{
    			p=find(v.begin(),v.end(),in[i])-v.begin();
    			cout<<v[p-1];
    		}
    	}
        cout<<endl;
    }    
	return 0;
}
                    
