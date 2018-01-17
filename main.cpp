//
//  main.cpp
//  create Big Data Randomly
//
//  Created by ustc@tll on 17/1/18.
//  Copyright © 2018 ustc@tll. All rights reserved.
//

#include <iostream>
#define MAX_LINE_LENGTH 200
#define MAX_Record_LENGTH 60000
int main(int argc,  char * argv[]) {
    char *data_file;
    int num[MAX_LINE_LENGTH];
    char *token;
    FILE *f_in;
    int i,n_cases=20000;
    srand(time(0));
    for(int i=0;i<MAX_LINE_LENGTH;i++)
    {
        num[i]=rand()%10+1;
        printf("%d  ",num[i]);
    }
    const char *separators="\n";
    data_file = argv[1];
    printf("%s",data_file);
    f_in=fopen(data_file, "w+");
    if (!f_in)
    {
        perror("Failed to open file");
        exit(1);
    }
    srand(time(0));
    for(unsigned int i=0;i<MAX_Record_LENGTH;i++){
        for(int j=0;j<MAX_LINE_LENGTH;j++){
            
            fprintf(f_in,"%d\t",(rand()%num[j])+1);
            
        }
        fprintf(f_in,"\n");
        
    }
    fclose(f_in);
    return 0;
}

