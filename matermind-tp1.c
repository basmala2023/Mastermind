#include<stdio.h>
#include<string.h>
const int num_pawns=5;
const int num_colors=8;
const int num_attempts=10;
char case1[]="red";
char case2[]="green";
char case3[]="blue";
char case4[]="yellow";
char case5[]="black";
char case6[]="white";
char case7[]="gray";
char case8[]="purple" ;
char *boardcmb[num_colors]={case1,case2,case3,case4,case5,case6,case7,case8};
char boardprp[num_pawns][7];
void retrieve_proposition (char boardprp[num_pawns][7]) {
    int i;
    for( i=0; i<num_pawns ; i++){
      scanf("%s",boardprp[i]);
     }
}
 void evaluate_proposition (char *boardcmb[num_pawns],char boardprp[num_pawns][7]){
   int j;
   int num_misplaced_pawns=0;
   int num_well_placed_pawns=0;
   for(j=0;j<num_pawns;j++){
    if (strcmp(boardcmb[j] , boardprp[j]) == 0) {
     num_well_placed_pawns=num_well_placed_pawns+1;
     }else{
     num_misplaced_pawns=num_misplaced_pawns+1;}
    }
   printf(" There are %d well-placed pawns , and %d poorly placed pawns \n " ,num_well_placed_pawns,num_misplaced_pawns);
 }
 
 void game (char boardprp[num_pawns][7]){
  int t;
  printf("choose only 5 colors , You can try 10 times \n");
  printf("Start ! \n");
  for(t=0;t<num_attempts;t++){
   retrieve_proposition(boardprp); 
   evaluate_proposition(boardcmb,boardprp);
  }
 }
 int main()
{
    printf("COLORS : gray,black,white,purple,red,green,blue,yellow \n ");
    game(&boardprp[num_pawns]);
    return 0;
}
