#include<iostream>
using namespace std;
// Parent 1
class Teacher
{
public:
    void teach()
    {
        cout << "Teaching students" << endl;
    }
};

// Parent 2
class YouTuber
{
public:
    void makeVideo()
    {
        cout << "Making YouTube videos" << endl;
    }
};

// Child class (Multiple Inheritance)
class YoutuberTeacher : public Teacher, public YouTuber
{
public:
    void earn()
    {
        cout << "Earning from teaching + YouTube" << endl;
    }
};

int main()
{
    YoutuberTeacher yt;

    yt.teach();       // Teacher class
    yt.makeVideo();   // YouTuber class
    yt.earn();        // Child class

    return 0;
}