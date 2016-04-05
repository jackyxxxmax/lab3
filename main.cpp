#include"lab3A.h"

int main(){
	int n,w;
	int i;
	Cow a;
	std::vector<int>weight;
	ifstream infile("file.in",ios::in);
	if(!infile){
		cerr<<"Failed opening"<<endl;
		exit(1);	
	}
	while(infile>>w){
		a.setWeight(w);
		weight.at(i)=w;
		cout<<weight[i]<<"\n";
	}

	infile.close();
	return 0;
}
