#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void play ();
void sortofplay();
void selectlevel();
void names ();
void countries ();
void animals () ; 
void displayplayer1();
void displayplayer2();
void check(string word);
void rope();
void head();
void body();
void Larm();
void Rarm();
void Lleg();
void Rleg();

int main(){
	
	
	while(true)
	{

		string word1,word2,word3;
		play ();
		int y;
		cin >> y;
		if (y == 1){
			sortofplay();
		 int choose ;
		 cin>>choose;
			if  ( choose==1)
			names();
			else if  (choose==2)
			animals () ; 
			else if  (choose==3)
				countries () ; 
		}
		else if (y == 2){
			displayplayer1();
		string word;
		cin >> word;
		system("CLS");
		displayplayer2();
		 check(word);
		}
		else if  (y==3)
		
			return 0; 
	}
	return 0;
}
void play (){
	cout<<"Welcome to HangMan			 \n";
	cout<<"\n";
	cout<<"		1.For Single Game Prees 1\n";
	cout<<"\n";
	cout<<"		2.For MultiPlayer Prees 2\n";
	cout<<"\n";
	cout<<"		3.For exit press 3\n";

}
void selectlevel()
{
cout<<"For Easy level press 1 "<<endl ;
cout<<"For Normal level press 2"<<endl ;
cout<<"For Hard level press 3 "<<endl ;
} 
void sortofplay()
	 {
	 cout<<"which sort you want to  play ? "<<endl;
	 cout<<" Names Enter 1 "<<endl ;
	 cout<<" Animals Enter 2 "<<endl ;
	 cout<<" Countries Enter 3"<<endl ;
	 }
void names ()
{
	string word1 ; 
	string nameseasy[5]={"ali","said","adham","samy"};
	string namesnormal[5]={"ahmed","sayed","marwan","hassen"};
	string nameshard[5]={"mohamed","mostafa","ibrahim","soliman"};
	 selectlevel();
		int q ; 
		cin>>q; 
		if (q==1)
		{
		srand(time(NULL));
			int n=rand()% 4 ;
		word1=nameseasy[n];
		}
	else if (q==2)
		{
		srand(time(NULL));
		int n=rand()% 4 ;
		word1=namesnormal[n];
		}
		else if  (q==3)
		{
		srand(time(NULL));
		int n=rand()% 4 ;
		word1=nameshard[n];
		} 
	check(word1);
}
void   animals ()
{
	string word2 ; 
	string animalseasy[5]={"ant","bat","cat","rat"};
	string animalsnormal[5]={"lion","duck","fish","zebra"};
	string animalshard[5]={"monkey","octopus","kangaroo","giraffe"};
		 selectlevel();
	int c ; 
	cin>>c; 
	if (c==1)
		{
		srand(time(NULL));
		int n=rand()% 4 ;
	word2=animalseasy[n];
	}

	else if (c==2)
		{
		
		srand(time(NULL));
		int n=rand()% 4 ;
		word2=animalsnormal[n];
	
		}
		else if  (c==3)
		{
		srand(time(NULL));
			int n=rand()% 4 ;
		word2=animalshard[n];
		}

	
		check(word2);
}

void countries ()
{
	string word3 ; 
	string countrieseasy[5]={"iran","iraq","china","egypt"} ;
	string countriesnormal[5]={"brazil","jordan","nigeria","lebanon"} ; 
	string countrieshard[5]={"romania","malaysia","mongolia","zimbabwe"} ;
	
		 selectlevel();
	int r ; 
	cin>>r; 
	if (r==1)
		{
		srand(time(NULL));
		int n=rand()% 4 ;
	word3=countrieseasy[n];
	}

	else if (r==2)
		{
		
		srand(time(NULL));
			int n=rand()% 4 ;
		word3=countriesnormal[n];
	
		}
		else if  (r==3)
		{
		srand(time(NULL));
			int n=rand()% 4 ;
		word3=countrieshard[n];
		}
	
		check(word3);
}
	
	
void check(string word){
	int miss = 0;
	string copedwrd = word;
	for (int i = 0; i < word.length(); i++)
		copedwrd[i] = '-';
	
	while (true)
		{
		
		cout << copedwrd << endl;
		char ch;
		cin >> ch;
		bool right = false;
		bool right2 = false;
		for (int i = 0; i < word.length(); i++)
		if (ch == word[i])
		if (copedwrd[i] == word[i]){
			cout << ch << " The Char Is Already Entered Before " << endl;
			right2 = true;
			break;
		}
		else{
			copedwrd[i] = word[i];
			right = true;
		}
		cout << endl;
		if (right2)
			continue;
		if (!right){
			miss++;
			cout << " Ooops The Letters You Had Entered " << ch << " is not in the word " << endl;
		}
		cout << endl;
		if (miss == 6){
			cout << " Sorry you lose The word is " << word << endl;
			Rleg();
		break ;
		}
		if (copedwrd == word){
			cout << " you win The word was " << word << endl;
			break;
		}
		if (miss == 0){
			rope();
		}
		else if (miss == 1){
			head();
		}
		else if (miss == 2){
			body();
		}
		else if (miss == 3){
			Larm();
		}
		else if (miss == 4){
			Rarm();
		}
		else if (miss == 5){
			Lleg();
			
		}	
	}

}


void displayplayer1(){
	cout << "Player 1 Please Enter The Word To Player 2 " << endl;
}

void displayplayer2(){
	int miss = 0;
	cout << "Player 2 Can You Expect The letters of The Word & Be know you have " << 5 - miss << " Chances " << endl;
}

void rope()

{
	cout << endl << endl;
	cout << "   +----+  " << endl;
	cout << "   |    |  " << endl;
	cout << "   |       " << endl;
	cout << "   |       " << endl;
	cout << "   |       " << endl;
	cout << "   | 6 left" << endl;
	cout << "  =============" << endl << endl;

}

void head()
{
	cout << endl << endl;
	cout << "   +----+  " << endl;
	cout << "   |    |  " << endl;
	cout << "   |    O  " << endl;
	cout << "   |       " << endl;
	cout << "   |       " << endl;
	cout << "   | 5 left" << endl;
	cout << "  =============" << endl << endl;
}

void body()

{
	cout << endl << endl;
	cout << "   +----+  " << endl;
	cout << "   |    |  " << endl;
	cout << "   |    O  " << endl;
	cout << "   |    |  " << endl;
	cout << "   |       " << endl;
	cout << "   | 4 left" << endl;
	cout << "  =============" << endl << endl;

}
void Larm()
{
	cout << endl << endl;
	cout << "   +----+  " << endl;
	cout << "   |    |  " << endl;
	cout << "   |    O  " << endl;
	cout << "   |   /|  " << endl;
	cout << "   |       " << endl;
	cout << "   | 3 left" << endl;
	cout << "  =============" << endl << endl;

}

void Rarm()
{
	cout << endl << endl;
	cout << "   +----+   " << endl;
	cout << "   |    |   " << endl;
	cout << "   |    O   " << endl;
	cout << "   |   /|\\ " << endl;
	cout << "   |        " << endl;
	cout << "   | 2 left " << endl;
	cout << "  =============" << endl << endl;

}

void Lleg()

{
	cout << endl << endl;
	cout << "   +----+  " << endl;
	cout << "   |    |  " << endl;
	cout << "   |    O  " << endl;
	cout << "   |   /|\\ " << endl;
	cout << "   |   /   " << endl;
	cout << "   | 1 left" << endl;
	cout << "  =============" << endl << endl;

}

void Rleg()

{
	cout << endl << endl;
	cout << "   +----+     " << endl;
	cout << "   |    |     " << endl;
	cout << "   |    O     " << endl;
	cout << "   |   /|\\    " << endl;
	cout << "   |   / \\   " << endl;
	cout << "   |Game Over " << endl;
	cout << "  ============" << endl << endl;
}









