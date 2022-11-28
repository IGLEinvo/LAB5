
using namespace std;
#include "class.h"


int main()
{

 Fruit apple = Fruit("Apple", 30, "Red", SWEET);
 Fruit strawberry = Fruit("Strawberry", 10, "Red", SWEET);
 Fruit lemon = Fruit("Lemon", 25, "yellow", SOUR);
 Fruit banana = Fruit("Banana", 10, "yellow", NEUTRAL);
 Fruit myfruits[] = {banana, strawberry, lemon, apple};
 random_device rd;
 mt19937 g(rd());
 for (auto i = 0; i<1; ++i){
 shuffle(myfruits, myfruits+4, g);
 cout << "FruitMIX: " ;
 for(auto i: myfruits) cout << i.GetName() << ' ';
 cout << '\n';
 }
 return 0;
}