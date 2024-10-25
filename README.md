# Palindrome-2
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string x) {
    int n = x.length();

    // Compare the string from both ends
    for (int i = 0; i < n / 2; i++) {
        if (x[i] != x[n - i - 1]) {
            return false; // Not a palindrome
        }
    }

    return true; // Is a palindrome
}

int main() {
    string x;
    cout << "Enter a string: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

<!---LeetCode Topics Start-->
# LeetCode Topics
## Hash Table
|  |
| ------- |
| [0133-clone-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/0133-clone-graph) |
## Depth-First Search
|  |
| ------- |
| [0133-clone-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/0133-clone-graph) |
| [2439-longest-cycle-in-a-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/2439-longest-cycle-in-a-graph) |
## Breadth-First Search
|  |
| ------- |
| [0133-clone-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/0133-clone-graph) |
## Graph
|  |
| ------- |
| [0133-clone-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/0133-clone-graph) |
| [1916-find-center-of-star-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/1916-find-center-of-star-graph) |
| [2439-longest-cycle-in-a-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/2439-longest-cycle-in-a-graph) |
## Topological Sort
|  |
| ------- |
| [2439-longest-cycle-in-a-graph](https://github.com/Robian-spec/Palindrome-2/tree/master/2439-longest-cycle-in-a-graph) |
<!---LeetCode Topics End-->