#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<ctime>
using namespace std;

void color(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
}
class start
{
	char guess;
	string player1,player2;
	int option;
	int lives=5;
	string cat="Others";
	int wordLength;
	string word;
	int point1=0,point2=0;

	
	public:
		void title(){
			color(13);
         cout<<"\n\n\t\t\t\t{}    {}   {}{}{}   {}{}    {}   {}}}}}     {}        {}   {}{}{}   {}     {}"<<endl;
         cout<<"\t\t\t\t{}    {}  {}    {}  {} {}   {}  {}          {}}}    {{{}  {}    {}  {}}}   {}"<<endl;
         cout<<"\t\t\t\t{}{{}}{}  {}{{}}{}  {}  {}  {}  {}   {}}}}  {}  {{}}  {}  {}{{}}{}  {} {}  {}"<<endl;
         cout<<"\t\t\t\t{}    {}  {}    {}  {}   {} {}  {}   {} {}  {}   {}   {}  {}    {}  {}   {{{}"<<endl;
         cout<<"\t\t\t\t{}    {}  {}    {}  {}    {}{}   {}}}}} {}  {}        {}  {}    {}  {}     {}";
		 	
		 }
	 void title2(){
		 color(11);
         cout<<"\n\n\t\t\t\t{}    {}   {}{}{}   {}{}    {}   {}}}}}     {}        {}   {}{}{}   {}     {}"<<endl;
         cout<<"\t\t\t\t{}    {}  {}    {}  {} {}   {}  {}          {}}}    {{{}  {}    {}  {}}}   {}"<<endl;
         cout<<"\t\t\t\t{}{{}}{}  {}{{}}{}  {}  {}  {}  {}   {}}}}  {}  {{}}  {}  {}{{}}{}  {} {}  {}"<<endl;
         cout<<"\t\t\t\t{}    {}  {}    {}  {}   {} {}  {}   {} {}  {}   {}   {}  {}    {}  {}   {{{}"<<endl;
         cout<<"\t\t\t\t{}    {}  {}    {}  {}    {}{}   {}}}}} {}  {}        {}  {}    {}  {}     {}";	
		}
     start(){
		  title();
          color(7);	
	      cout<<"\n\n\n\n\t\t\t\t\t\t|---------------------------------"<<endl;
	      cout<<"\t\t\t\t\t\t|                   |                 "<<endl;
          cout<<"\t\t\t\t\t\t|                   |                 "<<endl;
	      cout<<"\t\t\t\t\t\t|                 -----              "<<endl;
	      cout<<"\t\t\t\t\t\t|                |     |             "<<endl;
	      cout<<"\t\t\t\t\t\t|                 -----              "<<endl;
	      cout<<"\t\t\t\t\t\t|                   |                "<<endl;
      	  cout<<"\t\t\t\t\t\t|                 /-|-\\             "<<endl;
	      cout<<"\t\t\t\t\t\t|                /  |  \\            "<<endl;
	      cout<<"\t\t\t\t\t\t|                   |                "<<endl;
	      cout<<"\t\t\t\t\t\t|                  / \\              "<<endl;
	      cout<<"\t\t\t\t\t\t|                 /   \\       "<<endl;     
          cout<<"\t\t\t\t\t\t|                              "<<endl;
          cout<<"\t\t\t\t\t\t|                              "<<endl<<endl;
          color(7);	
          int x=177, y=219;
          cout<<"\n\t\t\t\t\t\t    loading..."<<endl;
          cout<<"\t\t\t\t\t\t    ";
	      for(int i=0;i<25;i++)
          cout<<(char)x;
          cout<<"\r";
          cout<<"\t\t\t\t\t\t    ";
          color(13);
          for(int i=0;i<25;i++)
            {
	         cout<<(char)y;
             Sleep(200);
            }
          color(7);
          cout<<"\n\t\t\t\t\t\t    ";
	      system ("pause");
	      system("Cls");
	      menu();
		}
	  void menu(){
		  title();  
	    
     	  color(7);
          cout<<"\n\n\n\n\n\t\t\t\t\t\t   1. Single Player "<<endl;
          cout<<"\n\n\t\t\t\t\t\t   2. Multiplayer "<<endl;color(7);
          cout<<"\n\n\t\t\t\t\t\t   3. Exit \n\n\n\n\t\t\t\t\t\t ---> Select ";
          color(13);
          cin>>option;
    
          if(option==1){
    	    system("Cls");
            singleplayermode();
           }
	      if(option==2){
	        system("Cls");
	        multiplayermode();
           }
	      if(option==3)
	       {
	        color(13);
	        cout<<"\n\n\n\t\t\t\t\t\t........PROGRAM ENDS........";
	        color(7);
	        exit(0);
			}
	      else
	     {
	      cout<<"Invalid Input";
	      menu();
          }
        }
      void drawman(int lives){
		  switch (lives)
		  {
		
		 case 5:
			 cout<<"\n\n\t\t\t\t\t\t------------------------------- ";
			 cout<<"\n\t\t\t\t\t\t|                               ";
			 cout<<"\n\t\t\t\t\t\t|                               ";
		     cout<<"\n\t\t\t\t\t\t|                               ";
	         cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	         cout<<"\n\t\t\t\t\t\t|                               ";
		     cout<<"\n\t\t\t\t\t\t|                               ";	
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	   		 cout<<"\n\t\t\t\t\t\t|                               "; 	
		     cout<<"\n\t\t\t\t\t\t|                               "; 
		 	 cout<<"\n\t\t\t\t\t\t|                               ";  break;
 	    
 	    case 4:
			 cout<<"\n\n\t\t\t\t\t\t------------------------------- ";
			 cout<<"\n\t\t\t\t\t\t|                |              ";
			 cout<<"\n\t\t\t\t\t\t|                |              ";
		     cout<<"\n\t\t\t\t\t\t|                               ";
	         cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	         cout<<"\n\t\t\t\t\t\t|                               ";
		     cout<<"\n\t\t\t\t\t\t|                               ";	
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	   		 cout<<"\n\t\t\t\t\t\t|                               "; 	
		     cout<<"\n\t\t\t\t\t\t|                               "; 
			 cout<<"\n\t\t\t\t\t\t|                               ";  break;
			 
	     case 3:
			 cout<<"\n\n\t\t\t\t\t\t------------------------------- ";
			 cout<<"\n\t\t\t\t\t\t|                |              ";
			 cout<<"\n\t\t\t\t\t\t|              -----            ";
		     cout<<"\n\t\t\t\t\t\t|             | * * |           ";
	         cout<<"\n\t\t\t\t\t\t|             |  _  |           ";
	       	 cout<<"\n\t\t\t\t\t\t|              -----            ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	         cout<<"\n\t\t\t\t\t\t|                               ";
		     cout<<"\n\t\t\t\t\t\t|                               ";	
	       	cout<<"\n\t\t\t\t\t\t|                               ";
	   		cout<<"\n\t\t\t\t\t\t|                               "; 	
		     cout<<"\n\t\t\t\t\t\t|                               "; 
			 cout<<"\n\t\t\t\t\t\t|                               ";  break;
	     case 2:
			 cout<<"\n\n\t\t\t\t\t\t------------------------------- ";
			 cout<<"\n\t\t\t\t\t\t|                |              ";
			 cout<<"\n\t\t\t\t\t\t|              -----            ";
		     cout<<"\n\t\t\t\t\t\t|             | * * |           ";
	         cout<<"\n\t\t\t\t\t\t|             |  _  |           ";
	       	 cout<<"\n\t\t\t\t\t\t|              -----            ";
	       	 cout<<"\n\t\t\t\t\t\t|                |              ";
	       	 cout<<"\n\t\t\t\t\t\t|                |              ";
	         cout<<"\n\t\t\t\t\t\t|                |              ";
		     cout<<"\n\t\t\t\t\t\t|                |              ";	
	       	 cout<<"\n\t\t\t\t\t\t|                               ";
	   		 cout<<"\n\t\t\t\t\t\t|                               "; 	
		     cout<<"\n\t\t\t\t\t\t|                               "; 
			 cout<<"\n\t\t\t\t\t\t|                               ";  break;
 	     case 1:
			 cout<<"\n\n\t\t\t\t\t\t------------------------------- ";
			 cout<<"\n\t\t\t\t\t\t|                |              ";
			 cout<<"\n\t\t\t\t\t\t|              -----            ";
		     cout<<"\n\t\t\t\t\t\t|             | * * |           ";
	         cout<<"\n\t\t\t\t\t\t|             |  _  |           ";
	       	cout<<"\n\t\t\t\t\t\t|              -----            ";
	       	cout<<"\n\t\t\t\t\t\t|              / | \\           ";
	       	cout<<"\n\t\t\t\t\t\t|             /  |  \\          ";
	         cout<<"\n\t\t\t\t\t\t|                |              ";
		     cout<<"\n\t\t\t\t\t\t|                |              ";	
	       	cout<<"\n\t\t\t\t\t\t|                               ";
	   		cout<<"\n\t\t\t\t\t\t|                               "; 	
		     cout<<"\n\t\t\t\t\t\t|                               "; 
			cout<<"\n\t\t\t\t\t\t|                               ";  break;
		case 0:
			 cout<<"\n\n\t\t\t\t\t\t------------------------------- ";
			 cout<<"\n\t\t\t\t\t\t|                |              ";
			 cout<<"\n\t\t\t\t\t\t|              -----            ";
		     cout<<"\n\t\t\t\t\t\t|             | * * |           ";
	         cout<<"\n\t\t\t\t\t\t|             |  _  |           ";
	       	cout<<"\n\t\t\t\t\t\t|              -----            ";
	       	cout<<"\n\t\t\t\t\t\t|              / | \\           ";
	       	cout<<"\n\t\t\t\t\t\t|             /  |  \\          ";
	         cout<<"\n\t\t\t\t\t\t|                |              ";
		     cout<<"\n\t\t\t\t\t\t|                |              ";	
	       	cout<<"\n\t\t\t\t\t\t|               / \\            ";
	   		cout<<"\n\t\t\t\t\t\t|              /   \\           "; 	
		     cout<<"\n\t\t\t\t\t\t|                               "; 
			 cout<<"\n\t\t\t\t\t\t|                               "; 
			 break;
		   }
	   }
	  

       void singleplayermode()
	   {
    	  title();
    	  color(7);
    	  string name;
    	  cout<<"\n\n\n\n\n\t\t\t\t\t\t\t  Your Name : ";
    	  color(13);
    	  cin>>player1;
    	  color(7);
       	  cout<<"\n\n\t\t\t\t\t\t\tOk ";
		  color(13);
		  cout<<player1;
		  color(7);
		  cout<<" lets start the Game ";		
		  Sleep(1000);
		  system("cls");
    	  cout<<"\n\n\n\t\t\t\t\t\t Instructions : ";
    	  color(13);
    	  cout<<"\n\n\n\t\t\t\t\t In this Game you have to guess a word by picking the \n\n\t\t\t\t\tletter if the letter is wrong the part of man will\n\n\t\t\t\t\t appear and you will not be able to pick that letter again\n\n\t\t\t\t\t if the letter is correct score will be addded.\n\n\t\t\t\t\t try to guess what the object is. GOODLUCK!"<<endl;
    	  color(7);
		  cout<<"\n\n\t\t\t\t\t";
		  system("pause");
		  system("cls");
		
		  srand (time(NULL));
          string wordlist[49];
          ifstream list;
          list.open("C:/filling/word.txt");
          for(int i=0;i<49;i++)
		  {
	        list>>wordlist[i];
          }
	
	      string guessed;
	      int random=rand()%50;
          word = wordlist[random];
	
	      wordLength = word.length();
	      string dispWord (wordLength, '_');
	
	      int found = 0;
	      int flagFound = 0; 

	      while(lives>=0)
		  {
		    system("cls");
		    cout<<"\n\n\t\t\t\t\t\t\tGuess "<<endl<<endl;
		    cout<<"\t\t\t\t\t\t\t";
		    for(int i=0; i<wordLength; i++)
			{
			   cout<<" "<<dispWord[i]<<" ";
		    }
		    cout<<endl<<endl<<endl;
		 	cout<<"Wrong Attempts: "<<lives<<" / "<<5<<endl;
		    cout<<"\t\t\t\t\t\tGuessed Letters: ";
		    color(13);
		    cout<<guessed<<endl; 
		    color(7);
	        drawman(lives);
	       if( found == wordLength )
		   {
		      Sleep(1000);
		      system("cls");
		      title();
		      color(7);
			  cout<<"\n\n\n\n\t\t\t\t\t\t\t    *****************"<<endl;
			  cout<<"\t\t\t\t\t\t\t    *  ";
			  color(13);
			  cout<<"  You Win    ";
		  	  color(7);
			  cout<<"*"<<endl;
			  cout<<"\t\t\t\t\t\t\t    *****************"<<endl<<endl<<endl<<endl;
			  break;
		    }
		     if( lives == 0) 
	          break;
	         cout<<"\n\n\t\t\t\t\t\tPick a Letter:";
		     color(13);
		     guess = getche();
		     color(7);
			 guessed = guessed + " " + guess;
		     if( dispWord.find(guess)!=string::npos ) lives++;
		     flagFound = 0;
		     for(int i=0; i<wordLength; i++)
			  {
			    if( word[i]==guess && dispWord[i]=='_' )
				{
				   dispWord[i] = guess;
				   found++;
				   flagFound = 1; 
            	}
		      }
		 
		      if( !flagFound )
			  lives--;
	            
			}
	       if(  lives==0  ){
    	   cout<<"\n\n\t\t\t\t\t\t\tThe word was ";color(13);cout<<word;color(7);
    	    Sleep(2000);
    	    system("cls");
    	    title();
    	    color(7);
		    cout<<"\n\n\n\n\t\t\t\t\t\t\t    ******************"<<endl;
		    cout<<"\t\t\t\t\t\t\t    *";
		    color(13);
		    cout<<"    You Lose    ";
		    color(7);
		    cout<<"*"<<endl;
		    cout<<"\t\t\t\t\t\t\t    ******************"<<endl<<endl<<endl<<endl;
	        }
     	    cout<<"\t\t\t\t\t\t1. Play Again"<<endl<<endl;
		    cout<<"\n\t\t\t\t\t\t2. Go Back To Menu"<<endl<<endl;
		    cout<<"\n\t\t\t\t\t\t3. Exit"<<endl<<endl;;
		    cout<<"\n\n\t\t\t\t\t\t---> Select ";
	    	color(13);
		    cin>>option;
		    color(7);
	        if(option==1)
	        {	
	       	 Sleep(100);
		     system("cls");
		     lives=5;
	         singleplayermode();
	        }
	        else if(option==2)
	        {	
		     Sleep(100);
		     system("cls");
	         menu();
	        }
	       else if(option==3)
	       {
		     color(13);
	         cout<<"\n\n\n\t\t\t\t\t\t........PROGRAM ENDS........";
	         color(7);
	         exit(0);
		    }
	       else
	        cout<<"Invalid Input";
        }


      void multiplayermode()
     {
	  color(7);
	  cout<<"\n\n\n\t\t\t\t\t\t\tInstructions : ";
      color(11);
      cout<<"\n\n\n\t\t\t\t\tIn this multiplayer mode player 1 will give the word to player 2 to guess\n\n\t\t\t\t and player 2 will guess it he/she will be given 5 lives If too many letters\n\n\t\t\t\t which do not appear in the word are guessed, the player is hanged(and loses)\n\n\t\t\t\t\t\t and player 1 will Win\n";
	  color(7);
	 cout<<"\n\n\t\t\t\t\t";
	 system("pause");
	 system("cls");
	 title2();
	 color(7);
	 cout<<"\n\n\n\n\n\t\t\t\t\t\tPLAYER 1 : ";
	 color(11);
	 cin>>player1;
	 color(7);
	 cout<<"\n\n\n\t\t\t\t\t\tPLAYER 2 : ";
	 color(11);
	 cin>>player2;
	 color(7);
	 cout<<"\n\n\t\t\t\t\t\tLETS START THE GAME! "<<(char)1;
	 Sleep(1000);
	 system("cls");
	 title2();
   	 color(11);
     again:
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t"<<player1;
     color(7);
     string categories[]={"Animal","Country","Fruit","City","Sports","Vehicle",cat};
     cout<<" Select Category of word : ";
     cout<<"\n\n\t\t\t\t\t\t\t  1. Animal"
         <<"\n\t\t\t\t\t\t\t  2. Country"
         <<"\n\t\t\t\t\t\t\t  3. Fruit"
         <<"\n\t\t\t\t\t\t\t  4. City"
         <<"\n\t\t\t\t\t\t\t  5. Sports"
         <<"\n\t\t\t\t\t\t\t  6. Vehicle"
         <<"\n\t\t\t\t\t\t\t  7. Others";
       
      cout<<"\n\n\n\t\t\t\t\t\t-----> Select ";
      color(11);
      cin>>option;
      string selected_Category= categories[option-1];
      color(7);
     if(option==7)
     {
   	    cout<<"\n\n\t\t\t\t\t\t\t Enter other: ";
   	    color(11);
   	    cin>>cat;
   	    color(7);
     }
     else if(option>=8||option<=0)
     {
        cout<<"\n\n\t\t\t\t\t\t\tInvalid Input";
        cout<<"\n\n\t\t\t\t\t\t\tEnter a Valid choice : ";
        color(11);
        cin>>option;
        color(7);
     }
     cout<<"\n\n\t\t\t\t\t\t\tEnter Word : ";
     color(11);
	 string word;
	 cin>>word;
	 color(7);
	 string guessed;
     int wordLength;
	 wordLength = word.length();
	 //cout<<wordLength;
	 string dispWord (wordLength, '_');
	
	 int found = 0;
	 int flagFound = 0; 

	 while(lives>=0)
	   {
		 system("cls");
		 cout<<"\n\n\t\t\t\t\t\t\tGuess      Category:  "<<selected_Category<<endl<<endl;
		 cout<<"\t\t\t\t\t\t\t";
		 for(int i=0; i<wordLength; i++)
		 {
		
			cout<<" "<<dispWord[i]<<" ";
		 }
		 cout<<endl<<endl<<endl;
		 		
		 cout<<"Wrong Attempts: "<<lives<<" / "<<5<<endl;
		  cout<<"\t\t\t\t\t\tGuessed Letters: ";
		 color(11);
		 cout<<guessed<<endl; 
		 color(7);
	     drawman(lives);
	     if( found == wordLength )
	     {
		  point2++;
		  Sleep(1000);
		  system("cls");
		  title2();
		  color(7);
		  cout<<"\n\n\n\n\t\t\t\t\t\t\t    *****************"<<endl;
		  cout<<"\t\t\t\t\t\t\t    *  ";
		  color(11);
		  cout<<"  You Win    ";
		  color(7);
		  cout<<"*"<<endl;
		  cout<<"\t\t\t\t\t\t\t    *****************"<<endl;
		  cout<<"\n\n\n\t\t\t\t\t\t\t";
		  color(11);
		  cout<<player2;
		  color(7);
		  cout<<" got "<<point2<<" point ";
			break;
		}
		
		if( lives == 0) 
	    break;
	
		
		cout<<"\n\n\t\t\t\t\t\tPick a Letter:";
		color(11);
		guess = getche();
		color(7);
		
		guessed = guessed + " " + guess;
		
		if( dispWord.find(guess)!=string::npos ) lives++;
		
		flagFound = 0;
		for(int i=0; i<wordLength; i++)
		{
			if( word[i]==guess && dispWord[i]=='_' )
			{
				dispWord[i] = guess;
				found++;
				flagFound = 1; 
	        }
		}
		 
		if( !flagFound )
			lives--;
	}
	
    if(  lives==0  )
	    {
    	  point1++;
    	  cout<<"\n\n\t\t\t\t\t\t\tThe word was ";color(11);cout<<word;color(7);
    	  Sleep(2000);
    	  system("cls");
    	  title2();
    	  color(7);
		  cout<<"\n\n\n\n\t\t\t\t\t\t\t    ******************"<<endl;
	      cout<<"\t\t\t\t\t\t\t    *";
		  color(11);
		  cout<<"    You Lose    ";
		  color(7);
		  cout<<"*"<<endl;
		  cout<<"\t\t\t\t\t\t\t    ******************"<<endl;
		  cout<<"\n\n\n\t\t\t\t\t\t\t  ";
		  color(11);
		  cout<<player1;
		  color(7);
		  cout<<" got "<<point1<<" point ";
	    }
	    char repeat;
		cout<<"\n\n\n\t\t\t\t\t\t     Do You Want To Continue(Y/N) : ";
		repeat=getche();
		
		if(repeat=='y'||repeat=='Y')
		{
		  Sleep(600);
		  system("cls");
		  goto again;
	    }
		else if (repeat=='n'||repeat=='N')
		{
		  Sleep(600);
		  system("cls");
		  menu();
	    }
	}

};
int main(){
	start run;
	
}
