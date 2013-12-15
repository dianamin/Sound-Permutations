#include <iostream>
#include <iomanip>
#include <windows.h>
#include <algorithm>

using namespace std;

int n = 8;
int durata;
int frecventa[] = {0, 264, 287, 330, 352, 392, 440, 495, 529};

void suna () {
    for (int i=1; i<=n; i++) Beep (frecventa[i], 400);
}

void permuta () {
    do {
        suna ();
    }
    while (next_permutation(frecventa+1, frecventa+n+1));
}

int main () {
    permuta ();
    return 0;
}
