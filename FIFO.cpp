#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int main() {
    int n, capacity;
    cout << "Enter the number of pages: ";
    cin >> n;
    cout << "Enter the capacity of the memory: ";
    cin >> capacity;

    int pages[n];
    cout << "Enter the page reference string: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    unordered_set<int> s;
    queue<int> indexes;
    int page_faults = 0;

    for (int i = 0; i < n; i++) {
        if (s.size() < capacity) {
            if (s.find(pages[i]) == s.end()) {
                s.insert(pages[i]);
                indexes.push(pages[i]);
                page_faults++;
            }
        } else {
            if (s.find(pages[i]) == s.end()) {
                int val = indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(pages[i]);
                indexes.push(pages[i]);
                page_faults++;
            }
        }
    }

    cout << "Total page faults: " << page_faults << endl;
    return 0;
}
