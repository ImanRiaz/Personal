#include <iostream>
#include <string>
#include <algorithm> //to access swapping 
using namespace std;

/*string& input direct input jo hum ly rhy user wo usy yhn place krdyga
"a" means k jo user n word dia h us k start array ko pkr rha or "z" us k last*/

void Permutations(string& input, int a, int z) {
   
    if (a== z) {         //agr array complete h to yeh usy print krdyga 
        cout << input << endl;
        return;           //uski actual position p return krdyga so it counts again
    }

    
    for (int i = a; i < z; i++) {                //yeh to mere phd h hehe
        swap(input[a], input[i]);                  //yeh words ko agy pichy krdyga  if input = "abc", and a= 0 and i = 1, this swaps a and b, making input = "bac"
        Permutations(input, a + 1, z);               //same upr wala function h lkn is main a+1 ho rha h js ki waja s ab swapping 1 k bd hogi means the first alhabet willremain same
        swap(input[a], input[i]);                     //jb swapping hojygi like abc ka acb hojyga tb yeh wapis original positon main chla jyga          
    }
}

int main() {
    // Input word
    string input;
    cout << "Enter the word: ";
    cin >> input;

    // to ensure tha the input is not empty and the program doesn't crash or work irrelevantly
    if (input.empty()) {
        cout << "Input cannot be empty!" << endl;
        return 1;
    }

    cout << "All permutations of the given word are:" << endl;

    
    Permutations(input, 0, input.length()); //calling the function

    return 0;
}