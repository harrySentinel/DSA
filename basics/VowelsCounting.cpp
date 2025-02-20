#include <iostream>
#include <cctype>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to count vowels and consonants in a string
void countVowelsAndConsonants(const string& str, int& vowels, int& consonants) {
    vowels = consonants = 0;
    string vowelSet = "aeiouAEIOU";
    for (char ch : str) {
        if (isalpha(ch)) {
            if (vowelSet.find(ch) != string::npos)
                vowels++;
            else
                consonants++;
        }
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    
    string input;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, input);
    
    int vowels, consonants;
    countVowelsAndConsonants(input, vowels, consonants);
    
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
    
    return 0;
}
