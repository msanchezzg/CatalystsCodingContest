#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<int> getDivisores (int n){
	vector<int> divisores;

	for (int i = 1; i<n; i++){
		if (n%i == 0) divisores.push_back(i);
	}

	return divisores;
}


int main(){

	int n, sum;
	vector<int> divisores;
	string res;

	cout<<"PERFECTION OUTPUT"<<'\n';

	while(cin>>n && n){

		divisores = getDivisores(n);

		sum = 0;
		for(int i = 0; i<divisores.size(); i++)
			sum += divisores[i];

		if (sum == n) res = "PERFECT";
		else if (sum < n) res = "DEFICIENT";
		else res = "ABUNDANT";


		printf("%5d  %s\n", n, res.c_str());
	}

	cout<<"END OF OUTPUT"<<'\n';

	return 0;
}
                    
