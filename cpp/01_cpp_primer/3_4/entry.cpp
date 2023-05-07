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
        cout << endl << endl;
    }

    /**
     * exercise 3.24
     */
    {
        vector<int> list{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

        for (auto it = list.begin(); it != list.end(); it += 2) {
            cout << (*it + *(it + 1)) << '\n';
        }
        cout << endl;
        for (auto fit = list.begin(), rit = list.end() - 1; rit > fit; ++fit, --rit) {
            cout << (*fit + *rit) << '\n';
        }
        cout << endl << endl;
    }

    /**
     * exercise 3.25
     */
    {
        /**
         * // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
         * vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
         * unsigned grade;
         * while (cin >> grade) {
         *  // read the grades
         * if (grade <= 100)
         *  // handle only valid grades
         * ++scores[grade/10]; // increment the counter for the current cluster

         */

        vector<unsigned> buckets(11, 0);
        vector<unsigned> scores{ 9, 12, 12, 15, 21, 30, 45, 47, 50, 71, 98, 93 };
        for (auto it = scores.cbegin(); it != scores.cend(); ++it) {
            ++buckets[*it / 10];
        }

        int bucket_val = 0;
        for (auto it = buckets.begin(); it != buckets.end(); ++it, ++bucket_val) {
            cout << (bucket_val * 10) << ": " << *it << endl;
        }
        cout << endl << endl;
    }

    /**
     * exercise 3.26
     *
     * because beg, med and end are all iterators which mutate throughout processing and we need to ensure we're taking the
     * difference between the adjusted iterator values
     */

    return 0;
}
