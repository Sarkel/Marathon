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
				float temp;
				vector<vector<float>> map;

				plik >> N >> M >> K;
				cout << N << " " << M << " " << K << endl;

				for(int i = 0; i<N; ++i){
					vector<float> inner;
					for(int j = 0; j<M; ++j){
						plik >> temp;
						inner.push_back(temp);
					}
					map.push_back(inner);
				}

				for(int i = 0; i<N; ++i){
					for(int j = 0; j<M; ++j){
					cout << map[i][j] << " ";
					}
					cout << endl;
				}


				remizy RemizyMap(N,M);

				//RemizyMap.printVec();
			//koniec
			plik.close();
		}else cout << "not good " << endl;
	}
	return 0;
}
