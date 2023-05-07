#include <iostream>
#include <vector>

int
main()
{
    using namespace std;

    /**
     * exercise 3.21
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
        for (auto it = v1.begin(); it != v1.end(); ++it) {
            cout << *it << '\n';
        }
        cout << endl;
    }

    /**
     * exercise 3.22
     */
    {
        vector<string> text{ "a", "paragraph", "of", "text", "", "and", "a", "second", "one" };
        /**
         * for (auto it = text.cbegin();
         *    it != text.cend() && !it->empty(); ++it)
         *    cout << *it << endl;
         */

        for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
            for (char& i : *it) {
                i = toupper(i);
            }
        }
        for (auto it = text.begin(); it != text.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl << endl;
    }

    /**
     * exercise 3.23
     */
    {
        vector<int> values{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        for (auto it = values.begin(); it != values.end(); ++it) {
            *it *= 2;
        }
        for (auto it = values.begin(); it != values.end(); ++it) {
            cout << *it << " ";
        }
    }

    return 0;
}
