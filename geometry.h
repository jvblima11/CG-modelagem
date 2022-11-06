#ifndef GEOMETRY_H

#define GEOMETRY_H

#define PI 3.1415926535897

void drawCircle(float radius, int solid);

void drawCylinder(float base, float top, float height);

void drawCustomCircle(float startingAngle, float endingAngle, float radius, float spacing, int x, int y, int z, int solid);

void drawHalfSphere(float radius);

void drawSphereSection(float startingTheta, float startingPhi, float endingTheta, float endingPhi, float radius, float space, int solid);

void drawRings(float radius, float gap);

void drawTrapezoid3(float base, float top, float height, float depth, int withTop, int withBottom, int solid);

void drawTrapezoid2(float base, float top, float height);

#endif
