#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
  
char getSimilarConsonant(char ch) {
  unordered_map<char, char> consonantMap = {
        {'p', 'b'}, {'s', 'z'}, {'k', 'g'}, {'t', 'd'}, {'f', 'v'},
        {'b', 'p'}, {'z', 's'}, {'g', 'k'}, {'d', 't'}, {'v', 'f'}
    };

    char lowerCh = tolower(ch);
   
   if (consonantMap.find(lowerCh) != consonantMap.end()) {
     char replacement = consonantMap[lowerCh];
      return isupper(ch) ? toupper(replacement) : replacement;
  
}
 return ch;
};

string replaceConsonantsAtIndices(string input, int n = 2) {
  
for(int i=0;  i< input.length(); i++){
  if(i % n == 0){
   char ch = input[i];
   if (isalpha(ch) && !strchr("aeiouAEIOU", ch) ) {
     input[i] = getSimilarConsonant(ch);
   };
  };
};
  return input;
};



int main() {
     string input;
     cout << "Please enter a word or a phrase" << endl;
     getline(cin, input);
    string result = replaceConsonantsAtIndices(input); 
  	cout << result;

   return 0;
}
