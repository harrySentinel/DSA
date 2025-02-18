#include <iostream>
#include <vector>
#include <numeric>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& books, int students, int maxPages) {
    int count = 1, pagesSum = 0;
    for (int pages : books) {
        if (pagesSum + pages > maxPages) {
            count++;
            pagesSum = pages;
        } else {
            pagesSum += pages;
        }
    }
    return count <= students;
}

int minPages(vector<int>& books, int students) {
    if (students > books.size()) return -1;
    
    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0), result = high;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(books, students, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    vector<int> books = {10, 20, 30, 40};
    int students = 2;
    cout << "Minimum max pages per student: " << minPages(books, students) << endl;
    return 0;
}
