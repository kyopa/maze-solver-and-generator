#include <stdio.h>
#include "generate/generate.c"
#include "solve/solve.c"

int main(int argc, char *argv[]) {
    srand(time(0));

    if (argc == 1) {    
        colMAX = rowMAX = 7; // default 
    } else colMAX = rowMAX = (atoi(argv[2]));
    stack = malloc((rowMAX * colMAX) * sizeof(point));
    Maze maze = {colMAX, rowMAX, malloc(rowMAX * colMAX)};

    initcells(&maze);
    point p = {0, 0};
    push(p);
    if (argc > 1 && strcmp(argv[1], "step") == 0) {
        step(&maze);
    } else {
        insta(&maze);
        putchar('\n');
    }


    /*for (int i = 0; i < (rowMAX * colMAX); ++i) {
        if (i % colMAX == 0) {
            putchar(10);
        }
        printf("%d", fuck++->visited);
    }*/
    
  
    return 0;
}

