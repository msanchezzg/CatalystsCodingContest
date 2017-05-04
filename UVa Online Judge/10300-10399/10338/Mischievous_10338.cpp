#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;


int main(){

    int num_palabras;
    unsigned long int combinaciones;
    string palabra;
    map<char, int> mapa_letras;
    cin>>num_palabras;
    cin.ignore();

    for(int i=0;i<num_palabras;i++){
    	mapa_letras.clear();

    	for(char c='A';c<='Z';c++){
    		mapa_letras.insert(make_pair(c,0));
    	}

    	combinaciones=1;
    	getline(cin,palabra);

    	for(int j=0;j<palabra.size();j++){
    		mapa_letras[palabra[j]]++;	
    		combinaciones*=(j+1);
    		combinaciones/=mapa_letras[palabra[j]];
    	}

    	cout<<"Data set "<<i+1<<": "<<combinaciones<<endl;
    }
    
    return 0;
}
                    
