#ifndef OBJLOADER_H
#define OBJLOADER_H

#include <vector>

class ObjLoader
{
public:
    ObjLoader();
    static bool load( const char *fileName, std::vector<float> &vertices );
};

#endif // OBJLOADER_H
