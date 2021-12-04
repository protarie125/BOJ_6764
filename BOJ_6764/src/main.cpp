#include <iostream>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto isRising = bool{ true };
    auto isDiving = bool{ true };
    auto isConstant = bool{ true };

    ll before;
    cin >> before;

    for (int i = 0; i < 3; ++i)
    {
        ll now;
        cin >> now;

        if (before < now) {
            isDiving = false;
            isConstant = false;
        }
        else if (now < before) {
            isRising = false;
            isConstant = false;
        }
        else {
            isRising = false;
            isDiving = false;
        }

        before = now;
    }

    if (isRising)
        cout << "Fish Rising";
    else if (isDiving)
        cout << "Fish Diving";
    else if (isConstant)
        cout << "Fish At Constant Depth";
    else
        cout << "No Fish";

    return 0;
}