#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    float m1,m2;
    printf("enter the points:");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    m1=(y2-y1/x2-x1);
    m2=(y3-y2/x3-x2);
    if(m1==m2){
        printf("the points are on same line");

    }
    else 
    printf("the  points are not in same line");
return 0;
}
