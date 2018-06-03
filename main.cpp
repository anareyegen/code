#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

void printMenu();
void printMenu1();
void printMenu2();

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string> names;
    vector<string> numbers;
    vector<int> ages;
    
    printMenu();
    int userChoice;
    cin>>userChoice;
    int index;
    // Оичстка экрана: system("cls");
    // Размер вектора: .size()
    while(userChoice != 0)
    {
        switch(userChoice)
        {
            case 1:
                if(names.empty()&& ages.empty()&& numbers.empty())
                {  system("cls");
                    cout<<"В телефонной книге нет контактов."<<endl;
                    printMenu();
                    cin>>userChoice;}
                else
                { system("cls");
                    cout<<"Name\t\t\tNumber\t\t\tAge\n"<<endl;
                    for(int i=0;i<names.size();i++)
                        cout<<i+1<<") "<<names[i]<<"\t\t"<<numbers[i]<<"\t\t"<<ages[i]<<endl;
                    
                    cout<<endl;
                    printMenu();
                    cin>>userChoice;
                }
                break;
            case 2:
                cout<<"Введите имя контакта:"<<endl;
                string temp_names;
                cin>>temp_names;
                names.push_back(temp_names);
                cout<<"Введите номер контакта:"<<endl;
                string temp_numbers;
                cin>>temp_numbers;
                numbers.push_back(temp_numbers);
                cout<<"Введите возраст контакта:"<<endl;
                int temp_ages;
                cin>>temp_ages;
                ages.push_back(temp_ages);
                system("cls");
                cout<<"Контакт добавлен!!!"<<endl;
                cout<<endl;
                printMenu();
                cin>>userChoice;
                break;
            case 3:
                system("cls");
                cout<<"Name\t\t\tNumber\t\t\tAge\n"<<endl;
                for(int i=0;i<names.size();i++)
                    cout<<i+1<<") "<<names[i]<<"\t\t"<<numbers[i]<<"\t\t"<<ages[i]<<endl;
                cout<<endl;
                cout<<"Enter the index of he contact you want to change: ";
                cin>>index;
                printMenu1();
                int userChoice1;
                cin>>userChoice1;
                while(userChoice1!=4)
                {
                    switch(userChoice1)
                    {
                        case 1:
                            cout<<"Введите новое имя контакта:"<<endl;
                            string temp_name;
                            cin>>temp_name;
                            names[index-1] = temp_name;
                            cout<<"Контакт изменен!!!"<<endl;
                            cout<<endl;
                            printMenu1();
                            cin>>userChoice1;
                            break;
                        case 2:
                            cout<<"Введите новый номер контакта:"<<endl;
                            string temp_numbers;
                            cin>>temp_numbers;
                            //numbers.push_back(temp_numbers);
                            system("cls");
                            printMenu1();
                            cin>>userChoice1;
                            break;
                        case  3:
                            cout<<"Введите новый возраст контакта:"<<endl;
                            int temp_ages;
                            cin>>temp_ages;
                            //ages.push_back(temp_ages);
                            system("cls");
                            printMenu1();
                            cin>>userChoice1;
                            break;
                        default:
                            system("cls");
                            cout<<"Нет такого пункта меню. Попробуйте ещё раз!"<<endl;
                            printMenu1();
                            cin>>userChoice1;
                    }
                }
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                system("cls");
                cout<<"Нет такого пункта меню. Попробуйте ещё раз!"<<endl;
                printMenu();
                cin>>userChoice;
        }
        
    }
    return 0;
    
}

void printMenu()
{
    cout<<"\n<------------------ Меню действий ------------------>"<<endl;
    cout<<"|    <1> Просмотреть список контактов               |"<<endl;
    cout<<"|    <2> Добавить новый контакт                     |"<<endl;
    cout<<"|    <3> Обновить существующий контакт              |"<<endl;
    cout<<"|    <4> Удалить контакт                            |"<<endl;
    cout<<"|    <5> Просмотреть контакты на букву ...          |"<<endl;
    cout<<"|    <6> Просмотреть контакты старше/младше ... лет |"<<endl;
    cout<<"|    <0> Выйти                                      |"<<endl;
    cout<<"<--------------------------------------------------->\n"<<endl;
}

void printMenu1()
{
    cout<<"\n<------------------ Меню действий ------------------>"<<endl;
    cout<<"|    <1> Изменить имя контакта                      |"<<endl;
    cout<<"|    <2> Изменить номер контакта                    |"<<endl;
    cout<<"|    <3> Изменить возраст контакта                  |"<<endl;
    cout<<"|    <4> Вернуться в основное меню                  |"<<endl;
    cout<<"<--------------------------------------------------->\n"<<endl;
}

void printMenu2()
{
    cout<<"\n<------------------ Меню действий ------------------>"<<endl;
    cout<<"|    <1> Старше определённого возраста              |"<<endl;
    cout<<"|    <2> Младше определённого возраста              |"<<endl;
    cout<<"|    <3> Вернуться в основное меню                  |"<<endl;
    cout<<"<--------------------------------------------------->\n"<<endl;
}
