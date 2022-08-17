#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    it = lst.begin();
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
}

int main()
{
    int size, element;
    cout << "Enter the size of your list: ";
    cin >> size;
    list<int> list1;
    cout << "Enter your element into the list: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        list1.push_back(element);
    }

    display(list1);

    // list 2:
    list<int> list2;
    list2.push_back(3);
    list2.push_back(9);
    list2.push_back(6);
    list2.push_back(2);
    // display(list2);

    //Remove elements:
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(2);

    //Sorting the list:
    // list1.sort();
    // list2.sort();

    // Merge two list:
    // list1.merge(list2);

    // Reversing the list:
    list1.reverse();

    display(list1);

    return 0;
}