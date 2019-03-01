#include<iostream>
#include<fstream>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
    ofstream dest("result.txt");
    ifstream source("scorce1.txt");
    string line;
    float A[20];
	while(getline(source,line)){
        for(int i=0;i<20;i++){
            source >> A[i];
        }
    }
    
    sort(A,20);
    for(int j=0;j<20;j++){
        dest << A[j] << "\n";
    }
	
	return 0;
}

