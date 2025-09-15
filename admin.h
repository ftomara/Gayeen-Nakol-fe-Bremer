#include <iostream>
#include "data_models.h"

using namespace std;

class Admin
{
private:
    admin admn;

public:
    Admin(admin a)
    {
        admn = a;
    }
    bool editMovie(movie mov)
    {
        if (!admn.movies_map.contain(mov.id))
            return false;
        int mov_idx = admn.movies_map[mov.id];
        admn.movies[mov_idx] = mov;
        return true;
    }
    bool addMovie(movie mov)
    {
        if (admn.movies_map.contain(mov.id))
            return true;
        int size = admn.movies.size();
        admn.movies.push_back(mov);
        admn.movies_map[mov.id] = size;
        int new_size = admn.movies.size();
        return size + 1 == new_size;
    }
    bool deleteMovie(movie mov)
    {
        int size = admn.movies.size();
        if (!admn.movies_map.contain(mov.id))
            return false;
        int mov_idx = movies_map[mov.id];
        movie temp = admn.movies.back();
        admn.movies[size - 1] = admn.movies[mov_idx];
        admn.movies[mov_idx] = temp;
        admn.movies.pop_back();
        admn.movies_map.erase(mov.id);
    }
};