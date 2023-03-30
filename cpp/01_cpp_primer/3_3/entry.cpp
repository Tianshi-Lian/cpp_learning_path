#include <iostream>
#include <string>
#include <vector>

int
main()
{
    using namespace std;

    /**
     * Exercise 3.12
     * a) Legal, list of list of ints
     * b) Illegal, vectors are of different types
     * b) Legal, list of 10 strings initialized to "null"
     */

    /**
     * Exercise 3.13
     * a) 0
     * b) 10; 0
     * c) 10; 42
     * d) 1; 10
     * e) 2; 10, 42
     * f) 10; ""
     * g) 10; "hi"
     */

    /**
     * Exercise 3.14
     */
    {
        vector<int> input;
        int val;
        while (cin >> val) {
            input.push_back(val);
        }
    }

    /**
     * Exercise 3.15
     */
    {
        vector<string> input;
        string val;
        while (cin >> val) {
            input.push_back(val);
        }
    }

    /**
     * Exercise 3.16
     */
    {
        vector<int> v1;
        vector<int> v2(10);
        vector<int> v3(10, 42);
        vector<int> v4{ 10 };
        vector<int> v5{ 10, 42 };
        vector<string> v6{ 10 };
        vector<string> v7{ 10, "hi" };

        cout << v1.size() << '\n';
        for (const auto& val : v1) {
            cout << val << '\n';
        }
        cout << std::endl;

        cout << v2.size() << '\n';
        for (const auto& val : v2) {
            cout << val << '\n';
        }
        cout << std::endl;

        cout << v3.size() << '\n';
        for (const auto& val : v3) {
            cout << val << '\n';
        }
        cout << std::endl;

        cout << v4.size() << '\n';
        for (const auto& val : v4) {
            cout << val << '\n';
        }
        cout << std::endl;

        cout << v5.size() << '\n';
        for (const auto& val : v5) {
            cout << val << '\n';
        }
        cout << std::endl;

        cout << v6.size() << '\n';
        for (const auto& val : v6) {
            cout << val << '\n';
        }
        cout << std::endl;

        cout << v7.size() << '\n';
        for (const auto& val : v7) {
            cout << val << '\n';
        }
        cout << std::endl;
    }

    /**
     * Exercise 3.17
     */
    vector<string> words;
    string input;
    while (cin >> input) {
        words.push_back(input);
    }

    for (unsigned int i = 0; i < words.size(); ++i) {
        if (i % 8 == 0) {
            cout << endl;
        }
        for (auto& ch : words[i]) {
            cout << toupper(ch);
        }
    }

    /**
     * Exercise 3.18
     * Illegal, ivec has not been initialized.
     * vector<int> ivec(0);
     * ivec.push_back(42);
     */

    /**
     * Exercise 3.19
     */
    {
        vector<int> a(10, 42); // brevity.
        vector<int> b{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
        vector<int> c;
        for (int i = 0; i < 10; ++i) {
            c.push_back(42);
        }
    }

    /**
     * Exercise 3.20
     */
    {
        vector<int> list;
        int input;
        while (cin >> input) {
            list.push_back(input);
        }

        for (unsigned int i = 0; i < list.size(); i += 2) {
            if (i + 1 < list.size()) {
                cout << (list[i] + list[i + 1]) << '\n';
            }
        }
        for (int i = 0, j = list.size(); i > j; ++i, --j) {
            cout << (list[i] + list[j]) << '\n';
        }
    }

    return 0;
}
