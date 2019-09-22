#include <iostream>
using namespace std;


int main(){
	
	int i;
	cin >> i;
	int n1,n2;

	for(int j=0;j<i;j++){
		cin >> n1 >> n2;

		if(n1 > n2) cout << '>' << endl;
		else if (n1 < n2) cout << '<' << endl;
		else cout << '=' << endl;
	}

	return 0;
}
