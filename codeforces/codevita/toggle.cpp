#include<bits/stdc++.h>
using namespace std ;
pair<double, double> r(double px, double py, double x1, double y1, double x2, double y2) {
    double a = y2 - y1;
    double b = x1 - x2;
    double c = x2 * y1 - x1 * y2;
    double d = (a * px + b * py + c) / sqrt(a * a + b * b);
    double nx = px - 2 * d * (a / sqrt(a * a + b * b));
    double ny = py - 2 * d * (b / sqrt(a * a + b * b));
    return {nx, ny};
}

int main() {
    double ar;
    cin >> ar;

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double s = sqrt(ar);
    vector<pair<double, double>> cr = {
        {0, 0},
        {0, s},
        {s, s},
        {s, 0},
    };

    set<pair<double, double>> pts(cr.begin(), cr.end());

    for (const auto& c : cr) {
        auto [rx, ry] = r(c.first, c.second, x1, y1, x2, y2);
        pts.insert({rx, ry});
    }

    for (const auto& p : pts) {
        cout << fixed << setprecision(2) << p.first << " " << p.second << endl;
    }

    return 0;
}