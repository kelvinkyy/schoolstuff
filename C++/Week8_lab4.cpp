#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Player{
	
	string name;
	int hp;
	int x,y;
	
	void print(){
		
		cout << "[" << x << "," << y << "]" << endl;
	}
};

Player getPlayer(){
	Player p;
	
	p.name = "Monster";
	p.hp = rand()%10+1;
	p.x =rand()%400+1;
	p.y =rand()%400+1;
	
	return p;
}

int main(){
	
	Player m1,m2,m3;
	srand(time(0));
	
	m1 = getPlayer();
	m2 = getPlayer();
	m3 = getPlayer();
	
	m1.print();
	m2.print();
	m3.print();
		
	return 0;
}
