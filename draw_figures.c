/* 
  Alexander Cruz 
  ID: 119092071 
*/ 

#include <stdio.h> 

/* Prototypes */ 

int draw_rectangle(char c, int width, int length); 

int draw_triangle(char c, int size); 

int valid_character(char c); 

int main() { 
  int choice, width, length, size; 
  char c; 
  
  while (1) { /* Continuously running this loop until 0 is provided */ 
    printf("Enter 1(rectangle), 2(triangle), 3(other), 0(quit): "); 
    scanf(" %d", &choice); 
    
    if (choice == 0) { 
      printf("Bye Bye.\n"); 
      break; /* Breaking the loop with 0 */ 
    } else if (choice == 1) { 
      printf("Enter character, width and length: "); 
      scanf(" %c %d %d", &c, &width, &length); 
      draw_rectangle(c, width, length); /* Performing method with inputs from scanner */ 
    } else if (choice == 2) { 
      printf("Enter character and size: "); 
      scanf(" %c %d", &c, &size); 
      draw_triangle(c, size); /*Same thing here */ 
    } else if (choice == 3) { 
      printf("Enter some other option.\n"); /* Able to implement more shapes here if desired */ 
    } else { 
      printf("Invalid choice.\n"); 
    } 
  } 
  
  return 0; 
} 

int draw_rectangle(char c, int width, int length) { 
  int i, j; 
  
  if (width <= 0 || length <= 0 || !valid_character(c)) { 
    printf("Invalid data provided.\n"); 
    return 0; 
  } 
  
  /* 2-D printing to get shape */ 
  for (i = 0; i < width; i++) { 
    for (j = 0; j < length; j++) { 
      printf("%c", c); 
    } 
    /* Spacing to next line */ 
    printf("\n"); 
  } 
  return 1; 
} 

int draw_triangle(char c, int size) { 
  int i, j; 
  
  if (size <= 0 || !valid_character(c)) { 
    printf("Invalid data provided.\n"); 
    return 0; 
  } 
  
  /* Same as the last method */ 
  for (i = 1; i <= size; i++) { 
    
    /* We use this method to create the correct spacing to make a perfectly symmetrical triangle */ 
    for (j = 1; j <= size - i; j++) { 
      printf(" "); 
    } 
    
    for (j = 1; j <= 2 * i - 1; j++) { 
      printf("%c", c); 
    } 
    
    printf("\n"); 
  } 
  return 1; 
} 

int valid_character(char c) { 
  /* Checking for variables as defined in the exercise specifications */ 
  return (c == '*' || c == '%' || c == '#'); 
}
