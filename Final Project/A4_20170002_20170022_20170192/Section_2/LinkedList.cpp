#include "LinkedList.h"
bool operator < (string &a, string &b)
{
    string c,d;
    for (int i=0; i<a.length() ; ++i){
        c+=tolower(a[i]);
    }
    for (int i=0; i<b.length() ; ++i){
        d+=tolower(b[i]);
    }
    return (c<d);
}
