#include <iostream>
using namespace std;
int one(int n) {
	if (n == 0) return 1;
	else {
        int ret=0;
		if (n - 1>=0) ret+=one(n - 1);
		if (n - 2 >= 0) ret+=one(n - 2);
		if (n - 3 >= 0) ret+=one(n - 3);
        return ret;
	}
}
int main() {
	int n,t;
	int cnt;
	scanf("%d", &t);
	while (t--) {
		cnt = 0;
		scanf("%d", &n);
		cnt+=one(n);
		printf("%d\n", cnt);
	}
	return 0;
}