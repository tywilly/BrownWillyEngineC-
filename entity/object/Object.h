//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#ifndef BROWNWILLYENGINE_OBJECT_H
#define BROWNWILLYENGINE_OBJECT_H

#include "../Entity.h"
#include "Mesh.h"

class Object : Entity {
public:
    Object(float x, float y, float z) : Entity(x,y,z);
    Mesh getMesh();
protected:
private:
    Mesh objMesh;
};


#endif //BROWNWILLYENGINE_OBJECT_H
