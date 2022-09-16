#include <iostream>#include <math.h>int main() {    const int FOV=120, numofTris=12;    const double SCALING_FACTOR=tan(FOV*(M_PI/180));    double triangles[numofTris][3][3] = {        // SOUTH
		{{-0.5, -0.5, -0.5}, {-0.5, 0.5, -0.5}, {0.5, 0.5, -0.5}},
		{{-0.5, -0.5, -0.5}, {0.5, 0.5, -0.5}, {0.5, -0.5, -0.5}},

		// EAST
		{{0.5, -0.5, -0.5}, {0.5, 0.5, -0.5}, {0.5, 0.5, 0.5}},
		{{0.5, -0.5, -0.5}, {0.5, 0.5, 0.5}, {0.5, -0.5, 0.5}},

		// NORTH
		{{0.5, -0.5, 0.5}, {0.5, 0.5, 0.5}, {-0.5, 0.5, 0.5}},
		{{0.5, -0.5, 0.5}, {-0.5, 0.5, 0.5}, {-0.5, -0.5, 0.5}},

		// WEST
		{{-0.5, -0.5, 0.5}, {-0.5, 0.5, 0.5}, {-0.5, 0.5, -0.5}},
		{{-0.5, -0.5, 0.5}, {-0.5, 0.5, -0.5}, {-0.5, -0.5, -0.5}},

		// TOP
		{{-0.5, 0.5, -0.5}, {-0.5, 0.5, 0.5}, {0.5, 0.5, 0.5}},
		{{-0.5, 0.5, -0.5}, {0.5, 0.5, 0.5}, {0.5, 0.5, -0.5}},

		// BOTTOM
		{{0.5, -0.5, 0.5}, {-0.5, -0.5, 0.5}, {-0.5, -0.5, -0.5}},
		{{0.5, -0.5, 0.5}, {-0.5, -0.5, -0.5}, {0.5, -0.5, -0.5}}    };    std::cout << numofTris << std::endl;    for(int tri=0; tri<numofTris; tri++) {        for(int point=0; point<3; point++) {            double temporary = SCALING_FACTOR*(triangles[tri][point][2]+1.5);            std::cout << triangles[tri][point][0]/temporary << std::endl << -triangles[tri][point][1]/temporary << std::endl;        }    }}