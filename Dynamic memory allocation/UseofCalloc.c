#include<stdio.h>
#include<stdlib.h>
 
// Define a structure to represent a point in 2D space
struct Point {
    int x;
    int y;
};

int  main(){
    int n , i ;
    struct Point *Alpha;
    printf("Enter number of points: ");
    scanf("%d", &n);
    Alpha = (struct Point*)calloc(n, sizeof(struct Point));
    if(Alpha == NULL){
        printf("Memory not allocated");
        return 1;
    }
    // Input coordinates for each point
    for(i=0; i<n; i++){
        printf("Enter x and y coordinates for point %d: ", i+1);
        scanf("%d %d", &Alpha[i].x, &Alpha[i].y);
    }
    // Display the points
    printf("The points are:\n");
    for(i=0; i<n; i++){
        printf("Point %d: (%d, %d)\n", i+1, Alpha[i].x, Alpha[i].y);
    }
    free(Alpha);
    return 0;
}
