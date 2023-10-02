
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    Animal(int weight);
    virtual ~Animal();
    virtual int getWeight() const;
private:
    int weight;
};

#endif /* ANIMAL_H */