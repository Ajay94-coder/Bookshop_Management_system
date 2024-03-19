#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std;
int asccii = 178;
char ch = asccii, i = 0;
int choice = 0;
struct BookShop
{
    int id;
    float price;
    string name, a_name, p_name;
} B[10];
void heading()
{
    system("cls");
    cout << endl;
    for (int m = 0; m <= 26; m++)
    {
        cout << ch;
    }
    cout << " Book Shop Project in C++ ";
    for (int m = 0; m <= 26; m++)
    {
        cout << ch;
    }
}
// insert Book
void insert()
{
    system("cls");
    heading();
    cout << "Enter Book ID -> ";
    cin >> B[i].id;
    cout << "Enter Book Name -> ";
    cin >> B[i].name;
    cout << "Enter Author Name -> ";
    cin >> B[i].a_name;
    cout << "Enter Publisher Name -> ";
    cin >> B[i].p_name;
    cout << "Enter Book Price -> ";
    cin >> B[i].price;
    i++;
    cout << "\n\n\n " << ch << ch << " Insert New Book Successfully " << ch << ch;
}
// Search Book
void search()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n\n"
             << ch << ch << ch << " Structure Is Empty " << ch << ch << ch;
    }
    else
    {
        int t_id, found = 0;
        cout << "\n\n Enter Book ID For Search -> ";
        cin >> t_id;
        for (int a = 0; a < i; a++)
        {
            if (t_id == B[a].id)
            {
                cout << "\n\n\n Book Name -> " << B[a].name;
                cout << "\n\n\n Author Name -> " << B[a].a_name;
                cout << "\n\n\n Publisher Name -> " << B[a].p_name;
                cout << "\n\n\n Book Price -> " << B[a].price;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << "\n\n\n " << ch << ch << ch << " Book Id Not Found " << ch << ch << ch;
        }
    }
}
void update()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n\n"
             << ch << ch << ch << " Structure Is Empty " << ch << ch << ch;
    }
    else
    {
        int t_id, found = 0;
        cout << "\n\n Enter Book ID For Update -> ";
        cin >> t_id;
        for (int a = 0; a < i; a++)
        {
            if (t_id == B[a].id)
            {
                cout << "Enter Book ID -> ";
                cin >> B[a].id;
                cout << "Enter Book Name -> ";
                cin >> B[a].name;
                cout << "Enter Author Name -> ";
                cin >> B[a].a_name;
                cout << "Enter Publisher Name -> ";
                cin >> B[a].p_name;
                cout << "Enter Book Price -> ";
                cin >> B[a].price;
                cout << "\n\n\n " << ch << ch << ch << " update Book successfully " << ch << ch << ch;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << "\n\n\n " << ch << ch << ch << " Book Id Not Found " << ch << ch << ch;
        }
    }
}
void Delete()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n\n"
             << ch << ch << ch << " Structure Is Empty " << ch << ch << ch;
    }
    else
    {
        int t_id, found = 0;
        cout << "\n\n Enter Book ID For Dlete -> ";
        cin >> t_id;
        for (int a = 0; a < i; a++)
        {
            if (t_id == B[a].id)
            {
                for (int k = a; k < i; k++)
                {
                    B[k].id = B[k + 1].id;
                    B[k].name = B[k + 1].name;
                    B[k].a_name = B[k + 1].a_name;
                    B[k].p_name = B[k + 1].p_name;
                    B[k].price = B[k + 1].price;
                }
                cout << "\n\n\n " << ch << ch << ch << " Delete Book successfully " << ch << ch << ch;
                found++;
                i--;
                break;
            }
        }
        if (found == 0)
        {
            cout << "\n\n\n " << ch << ch << ch << " Book Id Not Found " << ch << ch << ch;
        }
    }
}
void Show()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n\n"
             << ch << ch << ch << " Structure Is Empty " << ch << ch << ch;
    }
    else
    {

        for (int a = 0; a < i; a++)
        {
            cout << "\n\n\n Book Id -> " << B[a].id;
            cout << "\n\n\n Book Name -> " << B[a].name;
            cout << "\n\n\n Author Name -> " << B[a].a_name;
            cout << "\n\n\n Publisher Name -> " << B[a].p_name;
            cout << "\n\n\n Book Price -> " << B[a].price << "\n\n";
            for (int m = 1; m <= 26; m++)
            {

                cout << ch;
            }
        }
    }
}
// update book
// delete book
// show all book
int main()
{
p:
    system("cls");
    cout << endl;
    for (int i = 0; i <= 26; i++)
    {
        cout << ch;
    }
    cout << " Book Shop Project in C++ ";
    for (int i = 0; i <= 26; i++)
    {
        cout << ch;
    }
    cout << endl
         << endl
         << ch << ch << " 1. Insert Book";
    cout << endl
         << endl
         << ch << ch << " 2. Search Book";
    cout << endl
         << endl
         << ch << ch << " 3. Update Book";
    cout << endl
         << endl
         << ch << ch << " 4. Delete Book";
    cout << endl
         << endl
         << ch << ch << " 5. Show All Book";
    cout << endl
         << endl
         << ch << ch << " 6. Exit\n\n";
    for (int i = 0; i <= 26; i++)
    {
        cout << ch;
    }
    cout << endl
         << endl
         << ch << ch << " Enter Your Choice -> ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        search();
        break;
    case 3:
        update();
        break;
    case 4:
        break;
        Delete();
    case 5:
        Show();
        break;
    case 6:
        exit(0);
    default:
        cout << endl
             << endl
             << ch << ch << " Please Select Correct Option " << ch << ch;
    }
    getch();
    goto p;
}