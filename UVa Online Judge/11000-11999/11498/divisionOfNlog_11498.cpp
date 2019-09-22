#include <iostream>
using namespace std;


int main(){

	int casos;
	cin>>casos;
	int c1,c2;

	while(casos!=0){
		cin>>c1>>c2;
		int x,y;

		for(int i=0;i<casos;i++){
			cin>>x>>y;
			if ((x==c1) or (y==c2)){
				cout<<"divisa"<<endl;
			}
			else if (x<c1){
				if (y>c2) cout<<"NO"<<endl;
				else if (y<c2) cout<<"SO"<<endl;
			}
			else if (x>c1){
				if (y>c2) cout<<"NE"<<endl;
				else if (y<c2) cout<<"SE"<<endl;
			}
		
		}
		cin>>casos;
	}

	return 0;
}
            
