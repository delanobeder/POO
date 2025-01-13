
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    Animal(float weight);
    virtual ~Animal();
    virtual float getWeight() const;
private:
    float weight;
};

#endif /* ANIMAL_H */