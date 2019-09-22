#include <iostream>
#include <string>
using namespace std;

int main(){

        int magenta, amarillo, cian, casos;
        string pintar;

        cin>>casos;
        for(int i=0;i<casos;i++){
        	cin>>magenta>>amarillo>>cian>>pintar;

        	for(int j=0;j<pintar.size();j++){
        		if      (pintar[j]=='M') magenta--;
        		else if (pintar[j]=='Y') amarillo--;
        		else if (pintar[j]=='C') cian--;
        		else if (pintar[j]=='R') {
        			amarillo--;
        			magenta--;
        		}
        		else if (pintar[j]=='B') {
        			amarillo--;
        			magenta--;
        			cian--;
        		}
        		else if (pintar[j]=='G') {
        			amarillo--;
        			cian--;
        		}
        		else if (pintar[j]=='V') {
        			cian--;
        			magenta--;
        		}	
        	}

        	if(magenta<0 || amarillo<0 || cian<0) cout<<"NO"<<endl;
        	else cout<<"YES "<<magenta<<" "<<amarillo<<" "<<cian<<endl;

        }
        return 0;
}
                    
