#include <iostream>
using namespace std;

struct review
{
    string content;
    long long user_id;
    long long movie_id;
};

struct movie
{
    long long id;
    string title;
    string genre;
    int avg_rate;
    vector<string> actors;
    vector<review> reviews;
};

struct user
{
    long long user_name;
    string user_id;
    string email;
    string password;
    vector<vector<movie>> collections;
    vector<movie> history;
};

struct admin
{
    string email;
    string password;
    vector<user>users;
    vector<movie>movies;
};