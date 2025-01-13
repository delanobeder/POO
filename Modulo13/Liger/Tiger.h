#ifndef TIGER_H
#define TIGER_H

#include "Animal.h"

class Tiger : public Animal {
public:
    Tiger(float weight);
    virtual ~Tiger();
    float getWeight() const;
};

#endif /* TIGER_H */

