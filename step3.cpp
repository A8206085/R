#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    clock_t start, end;
    srand( time( 0 ) );
    start=clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      system("cls");
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
      
   }
   end=clock();
   
   if(tortoise==70)cout<<"T......Win"<<endl;
   if(hare==70)cout<<"H......Win"<<endl;
   cout<<(end-start)/1000;
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	
	for(int i=1;i<=7;i++)
	{
	
	
		cout<<"---------|";
	}
		cout<<endl;
	
	cout<<setw(*bunnyPtr )<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;

}

/*移動烏龜*/
void moveTortoise( int * const turtlePtr )
{
	int m=rand()%10;
	if(m>=0 && m<=4) *turtlePtr+=3;
	else if(m>=5 && m<=6) *turtlePtr-=6;
	else *turtlePtr+=1;
	
	if(*turtlePtr>70) *turtlePtr=70;
	else if(*turtlePtr<1) *turtlePtr=1;

}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
	int n=rand()%10;
	if(n>=0 && n<=1)
	{
		
	}
	else if(n>=2 && n<=3)*rabbitPtr+=9;
	else if(n==4)*rabbitPtr-=12;
	else if(n>=5 && n<=7)*rabbitPtr+=1;
	else if(n>=8 && n<=9)*rabbitPtr-=2;
	
	if(*rabbitPtr>70) *rabbitPtr=70;
	else if(*rabbitPtr<1) *rabbitPtr=1;

  
}
