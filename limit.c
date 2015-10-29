#include <stdio.h>
#include <stdlib.h>



int main(int n_args, char* args[]) {

{

short w=1;  // 16 bit
int x=1;  // 32 bit
long y=1; // 32 bit
long long int z = 1;  // 64 bit


while(w>-1){
w++;}
w--;
printf("Limit short: %d", w);

w=-3;
while(w<-2){
w--;}
w++;
printf("\nLimit short: %d", w);


/*  

while(x>-1){
x++;}
x--;
printf("Limit int: %d", x);

while(y>-1){
y++;}
y--;
printf("Limit long: %d", y);

while(z>-1){
z++;}
z--;
printf("Limit long: %d", z);

*/

}
