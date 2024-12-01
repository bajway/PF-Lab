/*Write a program which perform following operations
Dynamically allocate memory to read the contents of a file of unknown size.Resize the buffer as needed while reading. 
Count the frequency of each word in the file.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define INITIAL_BUFFER_SIZE 1024
#define MAX_WORD_LENGTH 100

// Structure for word frequency
typedef struct{
    char* word;
    int count;
} WordFrequency;

// Function to dynamically resize buffer
char* readFile(const char* filename){
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        exit(1);
    }

    size_t bufferSize = INITIAL_BUFFER_SIZE;
    char* buffer = (char*)malloc(bufferSize);
    if (!buffer) {
        printf("Error: Memory allocation failed.\n");
        exit(1);
    }

    size_t length = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        buffer[length++] = (char)ch;

        //Resize buffer if needed
        if (length >= bufferSize) {
            bufferSize *= 2;
            buffer = (char*)realloc(buffer, bufferSize);
            if (!buffer) {
                printf("Error: Memory reallocation failed.\n");
                exit(1);
            }
        }
    }
    buffer[length] = '\0'; // Null-terminate the string

    fclose(file);
    return buffer;
}

// Function to count word frequencies
WordFrequency* countWordFrequency(const char* text, int* wordCount){
    WordFrequency* frequencies = NULL;
    int capacity = 0;
    *wordCount = 0;

    char word[MAX_WORD_LENGTH];
    int index = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (isalnum(text[i])) {
            word[index++] = tolower(text[i]);
        } else if (index > 0) {
            word[index] = '\0';
            index = 0;

            //Check if the word already exists in the frequency list
            int found = 0;
            for (int j = 0; j < *wordCount; j++){
                if (strcmp(frequencies[j].word, word) == 0) {
                    frequencies[j].count++;
                    found = 1;
                    break;
                }
            }

            //Add new word if not found
            if (!found){
                if (*wordCount >= capacity) {
                    capacity = capacity == 0 ? 10 : capacity * 2;
                    frequencies = (WordFrequency*)realloc(frequencies, capacity * sizeof(WordFrequency));
                    if (!frequencies) {
                        printf("Error: Memory reallocation failed.\n");
                        exit(1);
                    }
                }
                frequencies[*wordCount].word = strdup(word);
                frequencies[*wordCount].count = 1;
                (*wordCount)++;
            }
        }
    }

    return frequencies;
}

//Function to free memory allocated for word frequencies
void freeFrequencies(WordFrequency* frequencies, int wordCount){
    for (int i = 0; i < wordCount; i++) {
        free(frequencies[i].word);
    }
    free(frequencies);
}

int main(){
    char filename[256];
    printf("Enter the filename: ");
    scanf("%s", filename);

    //Read file contents dynamically
    char* content = readFile(filename);

    //Count word frequencies
    int wordCount;
    WordFrequency* frequencies = countWordFrequency(content, &wordCount);

    //Print word frequencies
    printf("\nWord Frequencies:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", frequencies[i].word, frequencies[i].count);
    }

    //Cleanup
    free(content);
    freeFrequencies(frequencies, wordCount);

    return 0;
}
//End main