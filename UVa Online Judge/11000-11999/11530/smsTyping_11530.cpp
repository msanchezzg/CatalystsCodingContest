#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

	map<char,int> teclas;
	teclas['a']=teclas['d']=teclas['g']=teclas['j']=teclas['m']=1;
	teclas['p']=teclas['t']=teclas['w']=teclas[' ']=1;
	teclas['b']=teclas['e']=teclas['h']=teclas['k']=teclas['n']=2;
	teclas['q']=teclas['u']=teclas['x']=2;
	teclas['c']=teclas['f']=teclas['i']=teclas['l']=teclas['o']=3;
	teclas['r']=teclas['v']=teclas['y']=3;
	teclas['s']=teclas['z']=4;


	int casos, total;
	cin>>casos;
	cin.ignore();
	string linea;
	for(int i=1; i<=casos; i++) {
		total=0;
		getline(cin,linea);
		for(int j=0; j<linea.size(); j++){
			total+=teclas[linea[j]];
		}

		cout<<"Case #"<<i<<": "<<total<<endl;
	}

	return 0;
}
                    
