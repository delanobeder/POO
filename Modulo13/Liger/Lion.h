#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal {
public:
    Lion(float weight);
    virtual ~Lion();
    float getWeight() const;
};

#endif /* LION_H */

