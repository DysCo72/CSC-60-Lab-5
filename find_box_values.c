#include "lab5.h"

void find_box_values (FILE *data_out, FILE *data_in, double l, double h, double w, double *vol, double *s_area){
     while ((fscanf(data_in, "%lf%lf%lf", &l, &w, &h)) == 3){
           // Calculate the *vol
           *vol = l * h * w;
           // Calculate the *s_area
           *s_area = 2.0 * ( l * w + h * w + h * l);
           
           // Print the length, height, width, volume, surfaceArea
           fprintf(data_out, "%6.2lf   %6.2lf  %6.2lf    %6.2lf      %6.2lf\n", l, w, h, *vol, *s_area);
     }
     
     fprintf(data_out, "\n\n");   //print a final empty line
     return;
}
