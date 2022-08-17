#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector!" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
    vec2.push_back('c');
    vector<char> vec3(vec2);
    vector<int> vec4(6, 13);

    display(vec4);

    // int element, size;
    // vector<int> vec1;
    // cout << "Enter the size of your vector: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the elements of your vector: " << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    // vec1.pop_back();
    // display(vec1);

    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 500, 599);
    // display(vec1);
    return 0;
}