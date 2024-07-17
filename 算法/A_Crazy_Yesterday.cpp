#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;
    if(n == 1) std::cout << 7 <<"\n";
    if(n == 2) std::cout << 1 <<"\n";
    if(n == 3) std::cout << 2 <<"\n";
    if(n == 4) std::cout << 3 <<"\n";
    if(n == 5) std::cout << 4 <<"\n";
    if(n == 6) std::cout << 5 <<"\n";
    if(n == 7) std::cout << 6 <<"\n";
}

int main()
{
    std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
    int _;
    std::cin >> _;
    for(;_--;) solve();
    return 0;
}