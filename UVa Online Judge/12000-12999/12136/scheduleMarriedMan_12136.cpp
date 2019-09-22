#include <iostream>
#include <string>
using namespace std;

int main(){

	int casos;
	string linea, hini1, hfin1, hini2, hfin2;
	cin>>casos;

	for(int i=1; i<=casos; i++){
		cin>>hini1>>hfin1>>hini2>>hfin2;
		
		if(hfin2<hini1) cout<<"Case "<<i<<": Hits Meeting\n";
		else if(hini2>hfin1) cout<<"Case "<<i<<": Hits Meeting\n";
		else cout<<"Case "<<i<<": Mrs Meeting\n";
	}
        
	return 0;
}
                    
