// calculates the ascii-value-sums of the listed strings.
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

vector<string> list = 
{
    "finite fields",
    "limited areas",
    "Galois field",
    "infinite set",
    "place",
    "set",
};

// Splits a vector of strings (sentences) into seperate segments (words)
vector<string> segment(vector<string> list)
{
    // irgendwelche Zeichen, aber hier kommen vereinzelte Leerzeichen drin vor
    std::regex r("(.*)\\s(.*)");

    for(string x : list)
    {
        if(regex_match(x,r))
        {
            cout << "String [" << x << "] matches pattern\n";

            // Längste Zeichenkette, die mit einem Space endet
            regex word(".*(?=\\s)");
            smatch cm;
            regex_search(x,cm,word);

            cout << cm.size();

            for(int i = 0; i < cm.size(); i++)
            {
                cout << "\n\tFound: " << cm[i].str() << " in here!";
            }
            cout << endl;
        }
    }

    return list;
}


// note: keep track of all evaluated already evaluated strings and their ascii-values in a map
int main()
{
    for(string x : list){
        cout << x << endl;
    }
    segment(list);

    // above was taking me too long, leaving it for later. this works fine for now, but doesn't use pattern matching (instead: character detection and regular logic)
    for(string x : list)
    {
        uint64_t sum = 0;
        cout << "Words: [" << x << "] hold [";
        // for each character in the given string
        for(int a = 0; a < x.length(); a++)
        {
            // ascii-value of character
            int c = (int) x.at(a);
            // word seperation is expected by a space. ascii-value is 32 respectively
            if(c==32) {
                cout << sum << ", "; // old value's calculated
                sum = 0; // starting of fresh
            }

            // cumulative (this comment does not have any further meaning, word just popped up in my head for some reason)
            sum += c;
        }
        // lest we forget the bracket... (we didn't don't fret... also linebreak!)
        cout << sum << "]" << endl;
    }
    return 0;
}