#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "remizy"

using namespace std;

string nameTable[] = {
	"str00.ina"
};

int main(){
	fstream plik;

	for( string i : nameTable){
		plik.open(nameTable[0].c_str(),ios::in);

		if( plik.good() ){
			cout << "good" << endl;
			//start
				int N,M,K;
				float a1,a2,a3;
				plik >> N >> M >> K;
				cout << N << " " << M << " " << K << endl;
				plik >> a1 >> a2 >> a3;
				cout <<  a1<< " " << a2 << " " << a3 << endl;

				vector<vector<int>> map;
			//koniec
			plik.close();
		}else cout << "not good " << endl;
	}
	return 0;
}
