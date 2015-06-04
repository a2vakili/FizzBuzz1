//
//  main.cpp
//  FizzBuzz
//
//  Created by Arsalan Vakili on 2015-05-28.
//  Copyright (c) 2015 Arsalan Vakili. All rights reserved.
//

#include<stdio.h>

int main(){
    for (int num= 1; num< 101; num++){
        if (num % 3 == 0 && num % 5 == 0)
        {
            printf("FizzBuzz \n");
        }
        else if (num % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (num % 5 ==0)
        {
            printf("Buzz\n");
            
        }
        else
            printf("%d\n",num);
    }
}