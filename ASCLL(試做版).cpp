#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std ;

main(){
	
	/*string ASCLL;
	cin >> ASCLL;
	for(int i=0; i<ASCLL.size(); i++){
		cout << ASCLL[i] ;	
	}*/
	int number;
	int i;
	char ASCLL;
	string data;
	
	while(number >=-1){
	
	cin >> hex >> number;
	ASCLL = number;
	cout << ASCLL << endl;
	if(number==0){
		break;
	   }
   	}
}
