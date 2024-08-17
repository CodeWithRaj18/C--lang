#include<stdio.h>
 
int main(){
    int age = 65;
// if first stamenet is true then all other statment are going to be ignored if not then 2nd statment goona be check 
// these are the else if lader  if any statment is true then all other goona be ignored by a system 
    if(age>70){
      printf("You can drive you are a senior citizen");

    }
    else if(age>18){
            printf("You can drive ");
    }
    else{                     //this else is optionl (this will excute if all other statment are false )
        printf("you cannot drive ");
    }
    return(0);
}