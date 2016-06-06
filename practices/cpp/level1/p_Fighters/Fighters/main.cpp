#include <SFML/Graphics.hpp>
#include "fireQueue.h"
#include <windows.h>
#include <stdio.h>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

enum hardDegree{
easy,middled,hard
};

enum planeFirstPosition{
     X=240,Y=470
};

int main()
{

    sf::Music music;
    if(!music.openFromFile("kld.ogg")){
        return -1;
    }
    music.play();
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::CircleShape shape(10,3);                     //����ս��ͼ��
    shape.setFillColor(sf::Color::Red);
    shape.setOutlineThickness(1);
    shape.setOutlineColor(sf::Color::White);
    shape.setPosition(X,Y);                         //ȷ��ս����ʼλ��
    fireQueue playerFire;                           //��������ѷ�������б�
    sf::CircleShape *attacking[50];
    int attackers=0;                                  //��ǵл�����
    const float p[3]={0.9,0.5,0.1};                    //�л�������ֵ
    int harding=easy;                                 //��ʼ���Ѷ�


    while (window.isOpen())
    {
        sf::Event event;
        sf::Time breakTime=sf::microseconds(70);
        sf::Clock clock;
        while (window.pollEvent(event))
        {
               if (event.type == sf::Event::Closed)
               {
                   window.close();
               }
               if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
               {
                   shape.move(-5,0);
                   if(shape.getPosition().x<=0){
                        shape.move(5,0);
                   }
               }
               if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
               {
                   shape.move(5,0);
                   if(shape.getPosition().x>=460){
                        shape.move(-5,0);
                   }
               }
               if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
               {
                   playerFire.append(0,-5,shape.getPosition());
               }
        }
        if(clock.getElapsedTime()>breakTime){
            playerFire.moving();
            clock.restart();
        }
        window.clear(sf::Color::Blue);
        for(int i=0;i<playerFire.sizeOfLists();i++){
            window.draw((*playerFire.drawing(i).shape));
        }
        window.draw(shape);
        window.display();
    }
    return 0;
}
