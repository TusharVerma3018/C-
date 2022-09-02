#include <iostream>
#include <string>
using namespace std;

class CWH
{
protected:
    string title;
    int rating;

public:
    CWH(string s, int r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;
};

class CWHVideo : public CWH
{
protected:
    float video_length;

public:
    CWHVideo(string s, int r, float vl) : CWH(s, r)
    {
        video_length = vl;
    }
    virtual void display()
    {
        cout << "Title : " << title << endl
             << "Rating : " << rating << endl
             << "Video Length : " << video_length << endl;
    }
};

class CWHText : public CWH
{
protected:
    int words;

public:
    CWHText(string s, int r, int w) : CWH(s, r)
    {
        words = w;
    }
    virtual void display()
    {
        cout << "Title : " << title << endl
             << "Rating : " << rating << endl
             << "Total Words  : " << words << endl;
    }
};

int main()
{
    string title;
    float video_length;
    int rating, words;

    title = "Code With Tushar";
    video_length = 4.59;
    rating = 4;
    words = 500;

    CWHVideo Tushar_video(title, rating, video_length);
    CWHText Tushar_text(title, rating, words);

    CWH *tut[2];
    tut[0] = &Tushar_video;
    tut[1] = &Tushar_text;

    tut[0]->display();
    tut[1]->display();

    return 0;
}