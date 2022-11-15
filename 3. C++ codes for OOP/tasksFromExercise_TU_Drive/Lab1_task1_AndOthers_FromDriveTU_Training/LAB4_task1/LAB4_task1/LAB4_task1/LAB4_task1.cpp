#include<iostream>
#include<string.h>
using namespace std;

class Item {
private:
    char* contentType;
    int itemId;
    double price;
    char* title;
public:
    Item(char* ct, int id, double p, char* t)
    {
        contentType = new char[strlen(ct) + 1];
        strcpy(contentType, ct);
        itemId = id;
        price = p;
        title = new char[strlen(t) + 1];
        strcpy(title, t);
    }
    char* getContentType()
    {
        return contentType;
    }
    int getItemId()
    {
        return itemId;
    }
    double getPrice()
    {
        return price;
    }
    char* getTitle()
    {
        return title;
    }
    void setItemId(int id)
    {
        itemId = id;
    }
    void toString()
    {
        cout << "Content type: " << contentType << " ID: " << itemId << " Price: " << price << " Title: " << title << endl;
    }
};

class Movie :public Item {
private:
    int rating;
public:
    Movie(int r, char* ct, int id, double p, char* t) :Item(ct, id, p, t)
    {
        rating = r;
    }
    int getRating()
    {
        return rating;
    }
};

class Game :public Item {
private:
    int difficultyLevel;
public:
    Game(char* ct, int id, double p, char* t, int d) :Item(ct, id, p, t)
    {
        difficultyLevel = d;
    }
    int getDL()
    {
        return difficultyLevel;
    }
    void toString()
    {
        Item::toString();
        cout << " Difficulty " << difficultyLevel << endl;
    }
};

class Music :public Item
{
private:
    char* bandOrArtist;
public:
    Music(char* ct, int id, double p, char* t, char* bOA) :Item(ct, id, p, t)
    {
        bandOrArtist = new char[strlen(bOA) + 1];
        strcpy(bandOrArtist, bOA);
    }
    char* getBandOrArtist()
    {
        return bandOrArtist;
    }
    void toString()
    {
        Item::toString();
        cout << " Band or artist: " << bandOrArtist << endl;
    }
};

int main()
{
    char content[10], title[10], band[10];
    strcpy(content, "Disk");
    strcpy(title, "Concert");
    strcpy(band, "ACDC");
    Item i(content, 123, 100, title);
    i.toString();
    Music m(content, 987, 300, title, band);
    m.toString();
    Game g(content, 234, 200, "CS", 5);
    g.toString();
    return 0;
}
