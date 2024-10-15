#include <iostream>
#include <string>
using namespace std;

int countvowels(string str) {
    int count = 0,count2=0;
    
    for (char c : str) {
        if (c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'||
            c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        else
        {
            count2++;
        }
        
    }
    
    cout<<"Vowels = "<<count<<endl<<"Consonents = "<<count2;
    return 0;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin>> input;
    
    int vowelcount = countvowels(input);
    

    return 0;
}
