#include "hiddenlib.h"
int N;
void main() {
    int high,low,comp;
    N = getN();
    while ( true ) {
        comp = compare(low,high);
        if ((comp)==1) {
            if (ishidden(low)) return 1;
            low++;
            high = (low+high)/2;
        }
        if (comp==0) return ishidden((low+high)/2);
        if (comp==-1) {
            if (ishidden(high)) return 1;
            low = (low+high)/2;
            high++;
        }
    }
}
