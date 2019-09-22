#include <iostream>
#include <string>
using namespace std;

int main(){

        string entrada, idioma;
        int i;
        i=0;

        while(getline(cin,entrada)&&entrada.compare("#")!=0){
        	i++;

        	if(entrada.compare("HOLA")==0) idioma="SPANISH";
        	else if(entrada.compare("HELLO")==0) idioma="ENGLISH";
        	else if(entrada.compare("BONJOUR")==0) idioma="FRENCH";
        	else if(entrada.compare("HALLO")==0) idioma="GERMAN";
        	else if(entrada.compare("CIAO")==0) idioma="ITALIAN";
        	else if(entrada.compare("ZDRAVSTVUJTE")==0) idioma="RUSSIAN";
        	else idioma="UNKNOWN";

        	cout<<"Case "<<i<<": "<<idioma<<endl;
        }

        return 0;
}
                    
