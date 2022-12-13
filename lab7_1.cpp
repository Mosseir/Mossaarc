#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string a , x1 , x2 ;
    cout << "Input text: ";
	cin >> a;
	x1 = func3(a);
	x2 = func1(x1);
    cout << "Reversed text: " << func1(a) << endl ;
    cout << "Palindrome: ";
		if(x1 == x2){
				cout << "Yes";
		}else{
				cout << "No";
		}
	return 0;

}
