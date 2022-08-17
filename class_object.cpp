#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string channelName;
    string OwnerName;
    int Subscribers;
    list<string> PublishVideoTitle;

    YoutubeChannel(string name, string ownerName)
    {
        channelName = name;
        OwnerName = ownerName;
        Subscribers = 0;
    }
    void GetInfo()
    {
        cout << channelName << endl;
        cout << OwnerName << endl;
        cout << Subscribers << endl;
        cout << "Videos: " << endl;
        for (string video : PublishVideoTitle)
        {
            cout << video << endl;
        }
    }
};

int main()
{
    YoutubeChannel ytchannel("I Code Tech", "Yeasin Rafee");
    ytchannel.PublishVideoTitle.push_back("Completer C programming video");
    ytchannel.PublishVideoTitle.push_back("Completer C++ programming video");
    ytchannel.PublishVideoTitle.push_back("Completer javaScript programming video");
    ytchannel.GetInfo();

    return 0;
}