#include <iostream>
#include <algorithm>

void reverseString(std::string &str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    std::string str = "Hello, World!";
    reverseString(str);
    std::cout << "Reversed String: " << str << std::endl;
    return 0;
}
