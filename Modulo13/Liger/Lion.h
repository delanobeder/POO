#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal {
public:
    Lion(int weight);
    virtual ~Lion();
    int getWeight() const;
};

#endif /* LION_H */

