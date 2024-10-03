#include <stdio.h>
#include "planets.h"

int main(void) 
{
    FILE *file = fopen("planetInfo.txt", "w"); // open the file

    // write data into file.
    fprintf(file, "Planet,Mass [kg], Radius [km]\n");
    fprintf(file, "mercury, %e, %e\n", MERCURY_MASS, MERCURY_RADIUS);
    fprintf(file, "venus  , %e, %e\n", VENUS_MASS, VENUS_RADIUS);
    fprintf(file, "earth  , %e, %e\n", EARTH_MASS, EARTH_RADIUS);
    fprintf(file, "mars   , %e, %e\n", MARS_MASS, MARS_RADIUS);
    fprintf(file, "jupiter, %e, %e\n", JUPITER_MASS, JUPITER_RADIUS);
    fprintf(file, "saturn , %e, %e\n", SATURN_MASS, SATURN_RADIUS);
    fprintf(file, "uranus , %e, %e\n", URANUS_MASS, URANUS_RADIUS);
    fprintf(file, "neptune, %e, %e\n", NEPTUNE_MASS, NEPTUNE_RADIUS);

    fclose(file); // close the file

    return 0; // exit function
}
