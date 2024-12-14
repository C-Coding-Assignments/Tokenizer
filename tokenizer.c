#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//macro definitions for the maximum number of strings and the maximum number of characters in each string
#define MAX_STRINGS 10000
#define MAX_CHARACTERS 50

int main(int argc, char *argv[])
{
    //checking if the user entered three command line arguments
    if (argc != 3)
        exit(1);
    
    //opening the input and output files and initializing variables
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");
    char inputStrings[MAX_STRINGS][MAX_CHARACTERS], outputStrings[MAX_STRINGS][MAX_CHARACTERS], temp[MAX_CHARACTERS];
    int iterations = 0, distinct = 0, periods[MAX_STRINGS] = {0};

    //checking if the input and output files were successfully opened
    if (input == NULL || output == NULL)
    {
        printf("Error opening files.\n");
        exit(1);
    }

    //while loop which reads all the words from the input file and stores the information in the inputStrings array
    while (fscanf(input, "%s", temp) == 1)
    {
        //for loop which removes all the non-alphabetic characters from the current word
        for (unsigned i = 0, validCharacters = 0; i < strlen(temp); i++)
        {
            //selection statement which checks if the current character is an alphabetic character
            if (temp[i] >= 'a' && temp[i] <= 'z')
                inputStrings[iterations][validCharacters++] = temp[i]; 
            //selection statement which checks if the current character is a period    
            else if (temp[i] == '.')    
                periods[iterations] = 1;
        }

        //incrementing the index of the number of words being read from the input file        
        iterations++;       
    }

    //copying the first word from the input file into the first index of the outputStrings array
    strcpy(outputStrings[distinct++], inputStrings[0]);

    //for loop which iterates until all the distinct words have been read and stored in the outputStrings array
    for (int i = 1; i < iterations; i++)
    {
        //flag variable declaration and initialization
        bool flag = false;

        //for loop which iterates until all the distinct words have been compared
        for (int j = 0; j < distinct; j++)
            //if the word is not distinct, this makes the flag true indicating to not add the word to the outputStrings array
            if (strcmp(inputStrings[i], outputStrings[j]) == 0)
                flag = true;

        //if the flag is still false, then the current word is distinct and can be added to the outputStrings array
        if (!flag)
            strcpy(outputStrings[distinct++], inputStrings[i]);        
    }

    //sorting the distinct words in lexicographical order
    for (int i = 0; i < distinct; i++)
        for (int j = i; j < distinct; j++)
            //if the current word is lexicographically greater than the next word, then swap them
            if (strcmp(outputStrings[i], outputStrings[j]) > 0)
            {
                char temp[MAX_CHARACTERS];
                strcpy(temp, outputStrings[i]);
                strcpy(outputStrings[i], outputStrings[j]);
                strcpy(outputStrings[j], temp);
            }

    //printing the number of distinct words to the stream
    fprintf(output, "%d\n", distinct);   
    //for loop which prints the distinct words to the stream in lexicographical order     
    for (int i = 0; i < distinct; i++)
        fprintf(output, "%s\n", outputStrings[i]);        

    //for loop which prints the distinct words and their respective counts to the stream in lexicographical order
    for (int i = 0; i < iterations; i++)
        for (int j = 0; j < distinct; j++)
        {
            //selection statement which checks if inputStrings at i and outputStrings at j are the same and if the prior word does not contain a period
            if (strcmp(inputStrings[i], outputStrings[j]) == 0 && periods[i - 1] != 1)
                fprintf(output, "%d ", j + 1);    

            //selection statement which checks if the word prior contains a period. If so, print a new-line to the file
            if (strcmp(inputStrings[i], outputStrings[j]) == 0 && periods[i - 1] == 1)
                fprintf(output, "\n%d ", j + 1);        
        }

    fprintf(output, "\n");

    //closing the input and output files
    fclose(input);
    fclose(output);

    return 0;
}    
