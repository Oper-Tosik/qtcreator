#include "convexHull.h"
#include <algorithm>

using namespace std;

static bool compareAngles(
    const R2Vector& v1,
    const R2Vector& v2
);

void computeConvexHull(
    const vector<R2Point>& points,
    vector<R2Point>& convexHull
) {
    int n = int(points.size());
    vector<R2Point> nodes = points;
    sort(nodes.begin(), nodes.end());
    vector<R2Vector> vectors(n-1);
    for (int i = 1; i < n; ++i) {
        vectors[i-1] = nodes[i] - nodes[0];
    }
    sort(vectors.begin(), vectors.end(), compareAngles);
    
    convexHull.clear();
    convexHull.push_back(nodes[0]);
    if (nodes.size() <= 1)
        return;
    convexHull.push_back(nodes[0] + vectors[0]);    
    int i = 1;
    while (i < int(vectors.size())) {
        R2Point newNode = nodes[0] + vectors[i];
        R2Vector vNew = newNode - convexHull[convexHull.size()-1];
        R2Vector vOld = convexHull[convexHull.size()-1] -
                        convexHull[convexHull.size()-2];
        while (vOld.angle(vNew) <= 0 && convexHull.size() >= 2) {
            convexHull.pop_back();
            vNew = newNode - convexHull[convexHull.size()-1];
            vOld = convexHull[convexHull.size()-1] -
                   convexHull[convexHull.size()-2];
        }            
        convexHull.push_back(newNode);
        ++i;
    }
}

static bool compareAngles(
    const R2Vector& v1,
    const R2Vector& v2
) {
    R2Vector ex(1., 0.);
    double alpha1 = ex.angle(v1);
    double alpha2 = ex.angle(v2);
    return (alpha1 < alpha2);
}

#ifdef CONSOLE_TEST

int main() {
    int n;
    cout << "Enter a number of points: ";
    cin >> n;
    vector<R2Point> points(n);
    cout << "Enter " << n << " points:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }
    vector<R2Point> convex;
    computeConvexHull(points, convex);
    cout << "Convex hull:" << endl;
    for (int i = 0; i < int(convex.size()); ++i) {
        cout << convex[i] << " ";
    }
    cout << endl;    
    return 0;
}

#endif  /* CONSOLE_TEST */
