#include <iostream>
#include <vector>

template <typename T>

std::vector<T> elem_two_num(std::vector<T> v1, std::vector<T> v2)
{
    std::vector<T> res;
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v1.size(); j++)
        {
            if (v2[i] == v1[j])
            {
                res.push_back(v2[i]);
            }
        }
    }
    return res;
}

int main()
{
    int size;
    std::string elem;
    std::vector<std::string> vec1, vec2, result;
    std::cout << "Enter the size of first vector: ";
    std::cin >> size;
    std::cout << "The elements of first vector: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> elem;
        vec1.push_back(elem);
    }
    std::cout << "Enter the size of second vector: ";
    std::cin >> size;
    std::cout << "The elements of second vector: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> elem;
        vec2.push_back(elem);
    }
    result = elem_two_num(vec1, vec2);
    if (result.size() == 0)
    {
        std::cout << "Please enter the correct vectors!\n";
        return 0;
    }
    std::cout << "The result: ";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}
