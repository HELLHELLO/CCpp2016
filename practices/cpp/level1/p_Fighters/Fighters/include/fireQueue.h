#ifndef FIREQUEUE_H
#define FIREQUEUE_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

typedef struct Fire{
    sf::CircleShape *shape;
    float moveDistantX;
    float moveDistantY;
} Fire;

class fireQueue
{
    public:
        void append(float distantX,float distantY,sf::Vector2f planePosition);
        void burning();
        void moving();
        fireQueue();
        ~fireQueue();
        int sizeOfLists();
        Fire drawing(int i);
    protected:
    private:
        std::vector<Fire> lists;
        int now;
};

#endif // FIREQUEUE_H
