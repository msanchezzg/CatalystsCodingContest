#include <iostream>
using namespace std;


int main(){

	long soldados1, soldados2;
	while (cin >> soldados1 >> soldados2){
		if(soldados1 > soldados2){
			cout << soldados1-soldados2 << endl;
		}
		else{
			cout << soldados2-soldados1 << endl;
		}
	}
	return 0;
}
