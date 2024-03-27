#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *res=(int*)malloc(0),count=0,i=0,j=0;
    for(i;i<wordsSize;i++){
        for(j=0;words[i][j]!='\0';j++){
            if(words[i][j]==x){
                count++;
                res= (int*)realloc(res,count*sizeof(int));
                res[count-1]=i;
                break;                
            }
        }
    }
    *returnSize=count;
    return res;

}