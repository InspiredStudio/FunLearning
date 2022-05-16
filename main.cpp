#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
	int ans = 50;
	srand(time(NULL));
	string s[50];
	for(int i = 0; i < 50; i++){
		cin >> s[i];
	}
	for(int i = 0; i < 30; i++)
	{
		int t = rand();
		cout << i + 1 << '.'<< s[t % ans + 1] << endl;
		string c;
	}
	cout << "´ðÌâ¿¨:\n" ;
	for(int i = 0; i < 30; i++){
		cout << i + 1 << ":\n";
	}
}
