#include"glowa.h"
int main(){
printf("\n---Program numero II---\n---Podstawy Programowania---\n---Jakub Radzik---218907\n");printf("============================");
printf("\n Dzialania na wektorach: \n	(1)--> y=x \n	(2)--> z=x+y \n	(3)--> y=a*x \n	(4)--> a=x+y");
printf("\n Dzialania na macierzach: \n	(5)-->A=B \n	(6)-->C=A+B \n	(7)-->C=a*A \n	(8)-->C=A*B\n");printf("===========wiec?====<1-8>===");


int x;
cin>>x;
switch(x){
	case 1: I();
	case 2: II();
	case 3: III();
	case 4: IV();
	case 5: V();
	case 6: VI();
	case 7: VII();
	case 8: VIII();
}return 0;}
  


// 8 DO POPRAWY: NIE KWADRATOWE MACIERZE NIE DZIALAJA!