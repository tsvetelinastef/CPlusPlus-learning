#include <iostream>
using namespace std;

// ����������� �� ���� ������ ������ ��� ����.
// 1. ����� �� ��������� - �����
// 2. ���� �� ���������, ����� ������ �� ������� - ���� ����� � ���������[0 � 100]
// "The architect {����� �� ���������} will need {���������� ������} hours to complete
// {���� �� ���������} project / s."


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
