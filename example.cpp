// C++ program of above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is
// vowel or not
bool isVowel(char ch)
{
	if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o'
		&& ch != 'u')
		return false;

	return true;
}

// Function that replaces consonant with
// next immediate consonant alphabetically
string replaceConsonants(string s)
{
	// Start traversing the string
	for (int i = 0; i < s.length(); i++) {

		if (!isVowel(s[i])) {

			// if character is z,
			// than replace it with character b
			if (s[i] == 'z')
				s[i] = 'b';
		// if character is Z,
			// than replace it with character B
			else if (s[i] == 'Z')
				{
					s[i] = 'B';
				}
			// if the alphabet is not z
			else {

				// replace the element with
				// next immediate alphabet
				s[i] = (char)(s[i] + 1);

				// if next immediate alphabet is vowel,
				// than take next 2nd immediate alphabet
				// (since no two vowels occurs consecutively
				// in alphabets) hence no further
				// checking is required
				if (isVowel(s[i]))
					s[i] = (char)(s[i] + 1);
			}
		}
	}

	return s;
}

// Driver code
int main()
{
	string s = "geeksforgeeks";

	cout << replaceConsonants(s);

	return 0;
}
