#include <iostream>
#include <vector>
using namespace std;

int main(){

	int casos, n, m;
	float sum, media, p, total;
	vector<int> v;
	cin>>casos;

	while(casos--){
		cin>>n;
		v.clear();
		sum=0;
		total=0;

		for(int i=0; i<n; i++){
			cin>>m;
			v.push_back(m);
			sum+=m;
		}

		media=sum/n;

		for(int i=0; i<n; i++){
			if (v[i]>media) total++;
		}

		p=(total/n) *100;

		printf("%.3f%%\n", p);
	}

	return 0;
}
                    
