#include <iostream>
#include <string>

using namespace std;

string count_chars(string str,string chr1, string chr2) {
	
	int crt1 = 0, crt2 = 0;
	
	for (int x = 0; x <str.length(); x++)
    {
    	if (str[x] == chr1[0])
    	crt1++;
    	
        if (str[x] == chr2[0])
			crt2++;
    }

        if (crt1 == crt2)
		{
		    return "True";
			}
		else
		{
			return "False";
			}
}

int main() {
	
	cout << count_chars("aabcdeef","a","e") << endl; // true
	cout << "\n" << count_chars("aabcdeef","a","e") <<endl; // false
	cout << "\n" << count_chars("aabcdeef","1","2") <<endl	; // true
	return 0;
}
