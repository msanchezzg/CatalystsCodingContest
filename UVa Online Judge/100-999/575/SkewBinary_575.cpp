#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

	string n;
	int l, ll, total, a;
	int nmax = pow(2.0, 31) - 1;

	while(cin>>n && n.compare("0")!=0){
		l = n.length();
		ll = l;
		total = 0;

		for(int i=0; i<l; i++){
			a = n[i] - '0';
			a *= (pow(2.0, ll) - 1);
			ll--;
			total+=a;

			if(total > nmax){
				total = nmax;
				break;
			}
		}

		cout<<total<<'\n';

	}       

	return 0;
}
                    
