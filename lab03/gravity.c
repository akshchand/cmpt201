#include <stdio.h>
#include <stdlib.h> // need for atof
#include <string.h> // need for strcmp
#include "planets.h"

double calculate_gravity(double mass, double radius, double distance); // declare for later use

int main(int unused, char *args[]) 
{
    char *planet = args[1]; // store given planet name
    double distance = atof(args[2]); // store given distance above planet surface
    double mass = 0; // initialize variable to store mass
    double radius = 0; // initialize variable to store radius
  
  // compare given planet to stored planets and store the corresponding mass and radius
  if (strcmp(planet, "mercury") == 0) {
        mass = MERCURY_MASS;
        radius = MERCURY_RADIUS;
    } else if (strcmp(planet, "venus") == 0) {
        mass = VENUS_MASS;
        radius = VENUS_RADIUS;
    } else if (strcmp(planet, "earth") == 0) {
        mass = EARTH_MASS;
        radius = EARTH_RADIUS;
    } else if (strcmp(planet, "mars") == 0) {
        mass = MARS_MASS;
        radius = MARS_RADIUS;
    } else if (strcmp(planet, "jupiter") == 0) {
        mass = JUPITER_MASS;
        radius = JUPITER_RADIUS;
    } else if (strcmp(planet, "saturn") == 0) {
        mass = SATURN_MASS;
        radius = SATURN_RADIUS;
    } else if (strcmp(planet, "uranus") == 0) {
        mass = URANUS_MASS;
        radius = URANUS_RADIUS;
    } else if (strcmp(planet, "neptune") == 0) {
        mass = NEPTUNE_MASS;
        radius = NEPTUNE_RADIUS;
    } else {
        printf("Try another planet.\n");
        return 0; // exit function
    }

    double gravity = calculate_gravity(mass, radius, distance); // calculate gravity using function and store
    printf("%s-body @ %.0f [m] is %.2f [m/s2]\n", planet, distance, gravity); // print results to user

    return 0; // exit function
}

double calculate_gravity(double mass, double radius, double distance)
{
    double gravity = G * mass / ((distance + radius) * (distance + radius)); // calculate gravity using given formula

    return gravity; // return result
}