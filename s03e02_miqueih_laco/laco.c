/* 
//incremento
for(inicializações; ponto de entrada; incrementosssssssssssssssssss)

for(int x = 0, y = 10; x < y; x += 1, y -= 1)

for(int angulo = 0; angulo <= 90; angulo = angulo + 5){

}

//ponto de parada
while(){

} */

#include <stdio.h>
int main(){
    for(int x = 0, y = 10; x < y; x += 1, y -= 1)
        printf("%d %d\n", x, y);

    //inicializao
    int x = 0;
    int y = 10;
    
    while(x < y){//ponto de entrada
        printf("%d %d\n", x, y);
    }
}