#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; ++i) {
		int h, m;
		scanf("%d %d", &h, &m);
		printf("%d\n", 1440 - h * 60 - m);
	}
	
	return 0;
}
