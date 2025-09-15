#include <iostream>
#include "data_models.h"

using namespace std;

class User
{
private:
    user usr;

public:
    User(user u)
    {
        usr = u;
    }

    bool addMovie(int lisId, movie mov)
    {
        int size = usr.collections[lisId].size();
        usr.collections[lisId].push_back(mov);
        int new_size = usr.collections[lisId].size();
        return size + 1 == new_size;
    }
    bool addUserRating(int movieId, int rate, string review = "")
    {
        
    }
};