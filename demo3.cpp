#include <stdio.h>


int MinTwoNum(int a, int b){
	return (a < b ? a : b);
}
int MinThreeNum(int a, int b, int c){
    return MinTwoNum(a, MinTwoNum(b, c));
}
 
 
int main(){
    int firstNum, secondNum, thirdNum;
 
    printf("\nNhap so thu nhat: "); scanf("%d", &firstNum);
    printf("\nNhap so thu hai: "); scanf("%d", &secondNum);
    printf("\nNhap so thu ba: "); scanf("%d", &thirdNum);
  
    printf("\nMin = %d", MinThreeNum(firstNum, secondNum, thirdNum));
    return 0;
}
