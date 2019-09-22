#include <iostream>
using namespace std;

int main(){

	int casos, t1, t2, f, att;
	float total, test1, test2, test3;
	char c;
    cin>>casos;

    for(int i=1; i<=casos; i++){
    	cin>>t1>>t2>>f>>att>>test1>>test2>>test3;

    	total=t1+t2+f+att;

    	if(test1>test2){
    		if(test2>test3){
    			total+=(test1+test2)/2;
    		}
    		else total+=(test1+test3)/2;
    	}
    	else{
    		if(test1>test3){
    			total+=(test1+test2)/2;
    		}
    		else total+=(test2+test3)/2;
    	}

    	if(total<60) c='F';
    	else if(total<70) c='D';
    	else if(total<80) c='C';
    	else if(total<90) c='B';
    	else c='A';

    	printf("Case %d: %c\n", i, c);
    }

	return 0;
}
                    
