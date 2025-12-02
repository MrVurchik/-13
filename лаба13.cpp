#include <iostream>
#include <string >
using namespace std;
void task() {
	srand(time(NULL));
	string word;
	string word2;
	cout << "Enter first word:"; getline(cin, word);
	cout << "Enter second word:";
	getline(cin, word2); cout << endl;
	string result = word + word2;
	cout << "Resultat:" << result << endl;
	cout << "Size sentences:" << word.size() + word2.size() << endl;
	int a;
	a = rand() % (result.size());
	cout << "random char:" << result[a] << endl;
	int b;
	b = rand() % (result.size());
	result[b] = '*';
	cout << "Edit:" << result << endl; cout << "on position:" << b << endl;
	char vowels[5] = { 'a','e','i','o','u' }; 
for (int i = 0; i < 5; i++) {                
		for (int j = 0; j < result.size(); j++) { 
			if (result[j] == vowels[i]) {        
				result[j] = '*';                 
			}
		}
	}
cout  << "Sentences without vowels:" << result;
	}
int main() {
	task();
 return 0;
 }