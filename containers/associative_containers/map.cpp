#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> m = {{1, "one"}, {2, "two"}, {3, "three"}};

    for (auto it = m.begin(); it != m.end(); it++)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }
    return 0;
}