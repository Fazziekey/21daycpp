# include <iostream>
# include <vector>
# include <string>
using namespace std;
int main(){
    Jump:
        int a,b;
        cin >> a;
        cin >>b;
        if(a!=b)
            goto Jump;
}