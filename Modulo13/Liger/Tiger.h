#ifndef TIGER_H
#define TIGER_H

#include "Animal.h"

class Tiger : public Animal {
public:
    Tiger(int weight);
    virtual ~Tiger();
    int getWeight() const;
};

#endif /* TIGER_H */

