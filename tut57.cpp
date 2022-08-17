#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CWHVideo : public CWH
{
    float videolen;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolen = vl;
    }
    void display()
    {
        cout << "This is an amazing video, the title of this video is: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Length: " << videolen << " hours" << endl;
    }
};

class CWHText : public CWH
{
    int word;

public:
    CWHText(string s, float r, int w) : CWH(s, r)
    {
        word = w;
    }
    void display()
    {
        cout << "This is an amazing Text, the title of this text is: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Word no. : " << word << endl;
    }
};

int main()
{
    string title;
    int words;
    float videoLen, rating;

    title = "C++ complete course.";
    videoLen = 20.43;
    rating = 4.95;
    words = 3000;

    // For Videos:
    CWHVideo vd1(title, rating, videoLen);
    vd1.display();

    // For Texts:
    CWHText txt1(title, rating, words);
    txt1.display();

    CWH *tut[2];
    tut[0] = &vd1;
    tut[1] = &txt1;

    tut[0]->display();
    tut[1]->display();

    return 0;
}