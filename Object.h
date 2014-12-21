#ifndef OBJECT_H
#define OBJECT_H

#include <vector>

class Object
{
public:
    Object();
    void initColors( int numOfVertices );

    std::vector<float> vertices;
    std::vector<float> colors;
};

#endif // OBJECT_H
