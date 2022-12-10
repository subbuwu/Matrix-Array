#include <stdio.h>
#include <ctype.h>
//int mat[3][3];
int row,col,ch; //Global Var 
int AddElements(int [3][3],int row,int col);
int DisplayMat(int [3][3],int row,int col);
//int DisplayMat();
//int AddMatrix();
//int DiagnolMatAdd();
void main(){
    printf("*****************************************************************\n");
    printf("-----HELLO WELCOME TO MATRIX OPERATIONS-----\n");
    printf("*****************************************************************\n");
    printf("Enter the row size (only numbers) : ");
    scanf("%d",&row);
    printf("Enter the column size (only numbers) : ");
    scanf("%d",&col);
    //printf("%d\n",isdigit(row)); RETURN 0 IF IT'S A NUMBER
    //printf("%d",isdigit(col)); RETURN 0 IF IT'S A NUMBER
    if (isdigit(row)==0 && isdigit(col)==0){
        printf("The entered dimensions of the matrix are as follows : \n");
        printf("Row Size : %d\n",row);
        printf("Column Size : %d\n",col);
    }
    else{ //CHECKING NUMBER PROBLEM IF USER ENTERED CHAR NOT DEFINED
        printf("The entered dimensions are wrong / or not defined properly\n");
        printf("NOW ENTER AGAIN\n");
        main();
    }
    int mat[row][col];
    printf("1.) ADD ELEMENTS TO THE MATRIX and DISPLAY IT AFTER ADDING\n");
    printf("2.) DISPLAY THE EXISTING MATRIX\n");
    printf("Enter the choice - (1-5) : ");
    scanf("%d",&ch);
    if (ch==1){
        AddElements(mat,row,col);
    }
    else if (ch==2){
        DisplayMat(mat,row,col);
    }
}

int AddElements(int mat[row][col],int row,int col){
    int i,j;
    int a=1;
    int b=1,c=1,d=1;
    for (i=0;i<row;i++){ //i=0,row=3 0<3,1<3,2<3 -- 3<3xxx
        for (j=0;j<col;j++){
            if (i==0){ 
                printf("Enter the %d row %d column element : ",a,b++);
                scanf("%d",&mat[i][j]);
            }
            if (i==1){
                a=2;
                printf("Enter the %d row %d column element : ",a,c++);
                scanf("%d",&mat[i][j]);
            }
            if (i==2){
                a=3;
                printf("Enter the %d row %d column element : ",a,d++);
                scanf("%d",&mat[i][j]);
            }
        }
    }
    DisplayMat(mat,row,col);
}
int DisplayMat(int mat[row][col],int row,int col){
    int i,j;
    int a=1;
    int b=1,c=1,d=1;
    printf("This is the matrix : ");
    printf("\n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
