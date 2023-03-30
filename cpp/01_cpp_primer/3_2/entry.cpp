#include <iostream>
#include <string>

using std::string;

int
main()
{
    {
        string s1;
        string s2 = s1;
        string s3 = "hello";
        string s4(10, 'c'); // c repeated 10 times; cccccccccc

        // copy initialization
        string s5 = "hi";
        // direct initialization
        string s6("morning");
        string s7(5, 'a');

        std::cout << "Strings can be used in cin/cout: ";
        string s;
        std::cin >> s;
        std::cout << s << std::endl;

        std::cout << "Including multiple strings: ";
        string sm1, sm2;
        std::cin >> sm1 >> sm2;
        std::cout << sm1 << std::endl << sm2 << std::endl;

        std::cout << "And unknown numbers: ";
        int count = 0;
        string temp_s;
        while (std::cin >> temp_s) {
            ++count;
        }
        std::cout << "Entered: " << count << " strings" << std::endl;

        auto len = temp_s.length();
        std::cout << len << std::endl;

        string joined_string = s1 + s2 + s3;
        s4 += s5;
        s6 += s7 + s + "string" + '\n';

        std::cin.clear();
    }

    /**
     * Exercise 3.2
     */
    {
        string temp_s;
        while (std::getline(std::cin, temp_s)) {
            std::cout << temp_s << std::endl;
        }
        std::cin.clear();
        while (std::cin >> temp_s) {
            std::cout << temp_s << std::endl;
        }
        std::cin.clear();
    }

    /**
     * Exercise 3.3
     * std::cin >> string will split on whitespace, turning whitespace separated strings into separate
     * string objects.
     * std::getline() will read an entire line and ignore whitespace within that line
     */

    /**
     * Exercise 3.4
     */
    {
        string v1, v2;
        std::cin >> v1 >> v2;
        if (v1 != v2) {
            std::cout << v1 << " is not equal to " << v2 << std::endl;
        }
        if (v1.size() != v2.size()) {
            std::cout << v1 << " does not have same length as " << v2 << std::endl;
            int v1_size = v1.size();
            int v2_size = v2.size();

            if (v1_size > v2_size) {
                std::cout << "v1 is longer" << std::endl;
            }
            else {
                std::cout << "v2 is longer" << std::endl;
            }
        }
    }

    /**
     * Exercise 3.5
     */
    {
        string output;
        string output_spaced;
        string temp_s;
        while (std::cin >> temp_s) {
            output += temp_s;
            output_spaced += temp_s + " ";
        }
        std::cout << output << std::endl;
        std::cout << output_spaced << std::endl;
    }

    using namespace std;

    /**
     * Exercise 3.6
     */
    {
        string input = "my_string";
        for (auto& l : input) {
            l = toupper(l);
        }
    }

    /**
     * Exercise 3.7
     * a) nothing
     */
    {
        string input = "my_string";
        for (char& l : input) {
            l = toupper(l);
        }
    }

    /**
     * Exercise 3.8
     *
     * range for > for > while
     * brevity and readability
     */
    {
        string input = "my_string";
        string::size_type index = 0;
        while (index < input.size()) {
            input[index] = toupper(input[index]);
            ++index;
        }

        for (index = 0; index < input.size(); ++index) {
            input[index] = toupper(input[index]);
        }
    }

    /**
     * Exercise 3.9
     *
     * Outputs the first character of the string s.
     * This will compile but the behaviour is undefined as it's accessing an uninitialized index.
     *
     */
    {
        string s;
        cout << s[0] << endl;
    }

    /**
     * Exercise 3.10
     */
    {
        char in;
        while (cin >> in) {
            if (!ispunct(in)) {
                cout << in;
            }
        }
    }

    /**
     * Exercise 3.11
     * Yes, c would be a const
     */

    return 0;
}
