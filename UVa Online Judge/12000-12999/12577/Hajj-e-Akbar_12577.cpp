#include <iostream>
#include <string>
using namespace std;


int main(){

    string entrada;
    int i;
    i=1;

    while(cin>>entrada && entrada.compare("*")!=0){
    	i++;
    	cout<<"Case "<<i<<": ";
    	
    	if (entrada.compare("Hajj")==0) cout<<"Hajj-e-Akbar"<<endl;
    	else cout<<"Hajj-e-Asghar"<<endl;
    }
    return 0;
}
                    
