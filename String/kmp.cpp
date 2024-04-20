const int mxM = 1e6;
int phi[mxM + 1];
 
int KMP (string &t, string &p) {
    const int m = p.size();
    int matches = 0;
    phi[0] = -1;
 
    for (int i = 0, j = -1; i < m;) {
        while (j > -1 && p[j] != p[i]) j = phi[j];
        ++i, ++j;
        phi[i] = j;
    }
 
    for (int i = 0, j = 0; i < t.size(); ) {
        while (j > -1 && p[j] != t[i]) j = phi[j];
        ++i, ++j;
        if (j == m) matches++, j = phi[j];
    }
//    if(matches >= 1) cout << matches << endl;
    return matches;
}