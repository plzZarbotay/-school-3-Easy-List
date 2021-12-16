#include "easy_list.h"

void itc_even_index_list(const vector<int> &mass, vector<int> &mass2)
{
    if(mass.size()==0)
        return;
    for(size_t i = 0 ; i < mass.size(); i++){
        if(i % 2 == 0)
            mass2.push_back(mass[i]);
    }

}
size_t GCD(size_t a,size_t b){
while(b != 0){
    size_t r = b;
    b = a % b;
    a = r;
}
return a;
}
void itc_super_shift_list(vector <int> &mass, int n)
{
     if(mass.size()==0)
        return;
    bool changed = false;
    if(n < 0){
        n = -1*n;
        changed = true;
    }
    n%=mass.size();
    if(n == 0)
        return;



    size_t gcd = GCD(n,mass.size());
    if(changed){
        n = -1 * n;
    }
    for(size_t i = 0 ;i < gcd ; i++)
    {
        size_t new_index = i;
        int elem = mass[i];
        for(size_t a = 0 ; a < mass.size() / gcd; a++){
            new_index = (new_index + n + mass.size()) % mass.size();
            int new_elem = mass[new_index];
            mass[new_index] = elem;
            elem = new_elem;
        }
    }

}
void itc_super_rshift_list(vector <int> &mass){
itc_super_shift_list(mass,1);
}
void itc_rev_par_list(vector <int> &mass){
    if(mass.size()==0)
        return;
    for(size_t i = 1; i < mass.size(); i += 2 ){
            int new_elem = mass[i - 1];
            mass[i - 1] = mass[i];
            mass[i] = new_elem;

    }

}
