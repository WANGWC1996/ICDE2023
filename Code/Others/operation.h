#ifndef OPERATION_H
#define OPERATION_H

#include "../structure/data_struct.h"
#include "../structure/data_utility.h"
#include <cmath>
#include <vector>
#include "../structure/hyperplane.h"
#include "../structure/point_t.h"
#include "../Qhull/qhull_build.h"

using namespace std;



// Basic operations
int isZero(double x);
void print(double *a, int d);
double dot_prod(double* v1, double* v2, int dim);
int guassRank(vector< point_t* > P);
bool linearInd(point_t* p, point_t* q);
point_t* getPoint(point_set* p, double* point);
bool R_cover(double* p1, double *p2, std::vector<point_t*> &R);//check whether p1 cover p2
bool is_same_array(double *p1, double *p2, int dim);
void printMidResult(std::ofstream &out_cp, double Csize, int Qcount, timeval t1, int mode);
double differenceRatio(double s1, double s2);
#endif