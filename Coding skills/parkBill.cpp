//The problem: https://app.codility.com/programmers/trainings/5/parking_bill/
#include <iostream>

using namespace std;

int solution(string &E, string &L)
{
    int counter{};

    int hourE = stoi(E);
    int minutesE = stoi(E.substr(3));
    int hourL = stoi(L);
    int minutesL= stoi(L.substr(3));
    int totalHours = hourL - hourE;
    int totalMinutes =  minutesL- minutesE;
    if (totalHours >0)
    {
        counter =1;
        if(totalMinutes>0)
        {
            totalHours +=1;
        };
        counter += totalHours *4;
    }
    else{
        if(totalMinutes>0)
        {
            counter =5;
        }
    }
return counter;
};

int main()
{
    string E = "09:00";
    string L = "09:30";
    cout<<solution(E,L)<<endl;;
}