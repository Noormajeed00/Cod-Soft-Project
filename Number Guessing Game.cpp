#include <iostream>

using namespace std;

int main()
{
	int answer =5;
	int guess;
	int health = 0;
	int chances = 3;
	bool gameover = false;
	
	while(answer != guess && !gameover){
		if(health<chances){
			cout<<"ENTER YOUR NUMBER-";
			cin >>guess;
			health++;
		}else{
			gameover = true;
		}
	}
	if(gameover) {
		cout<<"YOU LOST";
	}else{
	cout<<"YOU WIN!";
	}
	
	
	return 0;
};

       