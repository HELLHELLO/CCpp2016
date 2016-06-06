#include "fireQueue.h"

fireQueue::fireQueue()
{
    now=0;
}

void fireQueue::append(float distantX,float distantY,sf::Vector2f planePosition){
    Fire temp;
    temp.moveDistantX=distantX;
    temp.moveDistantY=distantY;
    temp.shape->setPosition(planePosition);
    temp.shape->setRadius(3);
    temp.shape->setFillColor(sf::Color::Black);
    lists.push_back(temp);
    now++;
}

void fireQueue::moving(){
   for(int i=0;i<lists.size();i++){
        lists[i].shape->move(lists[i].moveDistantX,lists[i].moveDistantY);
        if(lists[i].shape->getPosition().y<0.0){
            std::vector<Fire>::iterator it = lists.begin()+i;
            lists.erase(it);
            std::vector<Fire>().swap(lists);
        }
   }
}

void fireQueue::burning(){
}

Fire fireQueue::drawing(int i){
    return lists[i];
}

int fireQueue::sizeOfLists(){
    return lists.size();
}

fireQueue::~fireQueue()
{

}
