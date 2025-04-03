#include"Bat.h"

Bat::Bat(float startX, float startY){
          
          m_Position.x= startX; //set the horizontal position  
          m_Position.y= startY; //set the horizontal position
          
          m_Shape.setSize(sf::Vector2f(50,5));
           m_Shape.setPosition(m_Position);
  }
  
  
 FloatRect Bat::getPosition() 
 {
        return m_Shape.getGlobalBounds();
 }
        
RectangleShape  Bat::getShape()
{
         return m_Shape; 
         }
         
 void Bat::moveLeft(){
   m_movingLeft=true;
 }
         
 void Bat::moveRight(){
   m_movingRight=true;
  }
          
 void Bat::stopLeft(){
   m_movingLeft=false;
   }
   
  void Bat::stopRight(){
   m_movingRight=false;
  } 
  //Moves the bat left by decreasing the x-coordinate
     void Bat::update(Time dt){
          if(m_movingLeft){
             m_Position.x -=m_Speed * dt.asSeconds();
             }
            if(m_movingRight){
             m_Position.x +=m_Speed * dt.asSeconds();
             }
             m_Shape.setPosition(m_Position);}
              
   
       
        
         
