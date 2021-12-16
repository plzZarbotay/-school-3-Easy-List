#include "easy_list.h"
bool itc_same_parts_list(const vector<int> &mass)
{
if(mass.size()==0)
    return true;
for(size_t i = 1; i < mass.size(); i++)
{
    if((mass[i] >= 0 && mass[i-1] >=0) || ( mass[i]<0 &&  mass[i - 1]< 0))
        return true;

}
return false;
}
int itc_sl_list(const vector<int> &mass){
if(mass.size()==0)
    return 0;
int county = 0;
for(size_t i = 1; i < mass.size(); i++)
{
    if(mass[i] > mass[i-1])
        ++county;
}
return county;
}
int itc_positive_list(const vector <int> &mass)
{
if(mass.size()==0)
    return 0;
int county = 0;
for(size_t i = 0; i < mass.size(); i++)
{
    if(mass[i] > 0)
        ++county;
}
return county;
}
void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2)
{
    if(mass.size()==0)
        return;
    for(size_t i = 0 ; i < mass.size(); i++){
        if(mass[i] % 2 == 0)
            mass2.push_back(mass[i]);
    }



}
void itc_rev_list(vector <int> &mass){
if(mass.size()==0)
    return;
for(size_t i = 0; i < mass.size()/2; i++)
{
    int joke = 0;

    int y = mass.size() - i - 1;
    joke = mass[mass.size() - i - 1];
    mass[y] = mass[i];
    mass[i] = joke;
}

}
