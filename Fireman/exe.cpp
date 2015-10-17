#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string nameTable[] = {
"str00.ina"
};

int main(){
	fstream plik;
	plik.open(nameTable[0].c_str(),ios::in);
	if( plik.good() ){
		cout << "good" << endl;
	}else cout << "not good " << endl;
	return 0;
}
