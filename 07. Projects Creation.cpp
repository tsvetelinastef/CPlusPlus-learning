#include <iostream>
using namespace std;

// »зготв€нето на един проект отнема три часа.
// 1. »мето на архитекта - текст
// 2. Ѕрой на проектите, които тр€бва да изготви - ц€ло число в интервала[0 Е 100]
// "The architect {името на архитекта} will need {необходими часове} hours to complete
// {брой на проектите} project / s."


int main()
{
  
    string name;
    cin >> name;

    int numberProjects;
    cin >> numberProjects;

    int hours = numberProjects * 3;
    
    
   // cout << hours * 3;

    cout << "The architect " << name << " will need " << hours << " hours to complete " << numberProjects << " project/s.";

    return 0; 
}
