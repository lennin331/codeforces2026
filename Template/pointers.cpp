#include<bits/stdc++.h>
class Entity {
  public: 
    Entity()
    {
      std::cout<<"Created!!"<<std::endl;
    }

    ~Entity()
    {
      std::cout<<"Destoryed!!"<<std::endl;
    }
    void print(){
      std::cout<<"print was called!"<<std::endl;
    }

};
int main()
{
  {
    std::shared_ptr<Entity> e 
    std::unique_ptr<Entity> entity(new Entity());
    entity->print();
    int x = 121512;
    int* y = x;
    int * z;
    std::cout<<x<<" "<<y<<" "<<z<<" ";

  }

}
