#include <iostream>
#include <string>
using namespace std;

int main(){

	int casos, nbuses, h1, h2, min1, min2, res, res2, rec, difhoras, difmin;
	string t1, t2, aux;

	cin>>casos;
	for(int i=1; i<=casos; i++){
		cin>>nbuses>>t1;
		cin>>t2>>rec;

		aux=t1.substr(0,t1.find(":"));
		h1=stoi(aux);
		aux=t1.substr(t1.find(":")+1);
		min1=stoi(aux);
		aux=t2.substr(0,t2.find(":"));
		h2=stoi(aux);
		aux=t2.substr(t2.find(":")+1);
		min2=stoi(aux);

		difhoras=h2-h1;
		if(difhoras<0) difhoras=24-h1+h2;
		difmin=min2-min1;
		if(difmin<0){
			difhoras--;
			if(difhoras<0) difhoras=23;
			difmin=60-min1+min2;
		}

		res=difhoras*60+difmin+rec;

		for(int j=1;j<nbuses;j++) {
			cin>>t2>>rec;

			aux=t2.substr(0,t2.find(":"));
			h2=stoi(aux);
			aux=t2.substr(t2.find(":")+1);
			min2=stoi(aux);

			difhoras=h2-h1;			
			if(difhoras<0) difhoras=24-h1+h2;
			difmin=min2-min1;
			if(difmin<0){
				difhoras--;
				if(difhoras<0) difhoras=23;
				difmin=60-min1+min2;
			}

			res2=difhoras*60+difmin+rec;
			if(res2<res) res=res2;

		}

		printf("Case %d: %d\n", i, res);

	}
        
	return 0;
}
                    
