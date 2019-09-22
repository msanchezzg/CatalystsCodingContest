#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    int casos;
    string frase,pais;
    vector<string> paises;
    map<string,int> recuento_paises;
	cin>>casos;
	cin.ignore();

	for(int i=0;i<casos;i++){
		getline(cin,frase);
		pais.clear();

		while(frase[0]==' '){
			frase.erase(0,1);
		}

		for(int j=0;frase[j]!=' ';j++){
			pais.push_back(frase[j]);
		}

		if (recuento_paises.count(pais)==0){
			recuento_paises.insert(make_pair(pais,1));
			paises.push_back(pais);
		}	
		else recuento_paises[pais]++;
	} 

	sort(paises.begin(),paises.end());
	for(int i=0;i<paises.size();i++){
			cout<<paises[i]<<' '<<recuento_paises[paises[i]]<<endl;

	}   

    return 0;
}
                    
