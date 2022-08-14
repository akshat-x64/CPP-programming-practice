#include <stdio.h> 
 
int main () 
{ 
    int x, y; 
    unsigned char color[3] = {200,0,255}, black[3] = {0,0,0}; 
    FILE *output = fopen ( "triangle.ppm", "w" ); 
    fprintf ( output, "P6 512 512 255\n" ); 
    for ( y=0; y<512; y++, color[2]-=y>>8 ) 
        for ( x=0; x<512; x++ ) 
            if ( x>256-(y/2) && x<256+(y/2) ) 
                fwrite ( color, 1, 3, output ); 
            else 
                fwrite ( black, 1, 3, output ); 
    fclose ( output ); 
}