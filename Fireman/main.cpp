#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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
				plik >> N >> M >> K;
				cout << N << " " << M << " " << K;
			//koniec
			plik.close();
		}else cout << "not good " << endl;
	}
	return 0;
}


//komentarz
