#include <iostream>
#include <map>
#include <string>
#include <cctype>
using namespace std;


int main(){

	map <char,int> mapa_letras;  
	string frase;
	int maximo;

	while(getline(cin,frase)){
		maximo=0;
		mapa_letras.clear();

        for(char c='A';c<='Z';c++){
                mapa_letras.insert(make_pair(c,0));
        }
        for(char c='a';c<='z';c++){
                mapa_letras.insert(make_pair(c,0));
        }

        for (int i=0;i<frase.size();i++){
        	if (mapa_letras.find(frase[i])!=mapa_letras.end()) mapa_letras[frase[i]]++;	
        }

        for(char c='a';c<='z';c++){
               if (mapa_letras[c]>maximo) maximo=mapa_letras[c];
               if (mapa_letras[toupper(c)]>maximo) maximo=mapa_letras[toupper(c)];
        }

        for(char c='A';c<='Z';c++){
                if (mapa_letras[c]==maximo) cout<<c;
        }
        
        for(char c='a';c<='z';c++){
               if (mapa_letras[c]==maximo) cout<<c;
        } 

        cout<<' '<<maximo<<endl;
	}

    return 0;
}
                    
