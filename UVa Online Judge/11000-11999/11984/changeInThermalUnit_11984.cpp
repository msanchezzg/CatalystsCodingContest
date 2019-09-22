#include <iostream>
using namespace std;

int main(){

	int casos;
	float ini, fahr;
	cin>>casos;

	for(int i=1; i<=casos; i++) {
		cin>>ini>>fahr;
		ini=ini+(5.0/9)*fahr;
		printf("Case %d: %.2f\n", i, ini);
	}
        
	return 0;
}
                    
