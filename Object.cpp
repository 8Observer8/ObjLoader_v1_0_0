#include "Object.h"

Object::Object()
{
//    vertices.clear();
//    vertices.resize( 9 );
//    vertices[0] = -0.5f;
//    vertices[1] = -0.5f;
//    vertices[2] = 0.0f;

//    vertices[3] = 0.5f;
//    vertices[4] = -0.5f;
//    vertices[5] = 0.0f;

//    vertices[6] = -0.5f;
//    vertices[7] = 0.5f;
//    vertices[8] = 0.0f;

//    colors.clear();
//    colors.resize( 9 );
//    colors[0] = 1.0f;
//    colors[1] = 0.0f;
//    colors[2] = 0.0f;

//    colors[3] = 0.0f;
//    colors[4] = 1.0f;
//    colors[5] = 0.0f;

//    colors[6] = 0.0f;
//    colors[7] = 0.0f;
//    colors[8] = 1.0f;
}

void Object::initColors( int numOfVertices )
{
    colors.clear();
    colors.resize( numOfVertices * 3 );

    for ( unsigned int i = 0, j = 0; i < numOfVertices; ++i )
    {
        colors[j++] = 1.0f;
        colors[j++] = 0.0f;
        colors[j++] = 0.0f;

        colors[j++] = 0.0f;
        colors[j++] = 1.0f;
        colors[j++] = 0.0f;

        colors[j++] = 0.0f;
        colors[j++] = 0.0f;
        colors[j++] = 1.0f;
    }
}
