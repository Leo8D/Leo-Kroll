#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
string sent;

getline (cin,sent);

for(int i = 0; i < sent.length(); i++) {
if ('A'<=sent[i] and sent[i]<='Z'){
    sent[i] = sent[i] +32;
}
}

if (sent.find("m") != string::npos and sent.find("a") != string::npos and sent.find("t") != string::npos ){
cout <<"MAT!"; 
}

	return 0;
}

//Emil L hjälpte mig med den här//
