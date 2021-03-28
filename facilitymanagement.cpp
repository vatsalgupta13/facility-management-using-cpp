#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <direct.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void gotoxy (int x, int y);
void intro();
void rectangle(int x,int y,int l,int b);
void welcome();
void clrscr();
void menu();
void shortest();
void firstPage();
void menuPage();
void pizzaPage(float &price,vector <string>& itm, int &k);
void sidesPage(float &price, vector <string>& itm, int &k);
void drinksPage(float &price, vector <string>& itm, int &k);
void exitPage();
void SouthIndianNonVegPage(float &price,vector <string>& itm, int &k);
void SouthIndianVegPage(float &price, vector <string>& itm, int &k);
void SouthIndianDrinksPage(float &price, vector <string>& itm, int &k);
void chineseveg(float &price,vector <string>& itm, int &k);
void chinesenonveg(float &price, vector <string>& itm, int &k);
void chinesedrinks(float &price, vector <string>& itm, int &k);
void ItalianNonVegPage(float &price,vector <string>& itm, int &k);
void ItalianVegPage(float &price, vector <string>& itm, int &k);
void ItalianDrinksPage(float &price, vector <string>& itm, int &k);
void shakes(float &price,vector <string>& itm, int &k);
void beverages(float &price, vector <string>& itm, int &k);
void selectrestau();

void showLine1() {
	int i,j;
	for (j = 0; j < 2; j++)
    {
    cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

}
void newline(){
    for (int i = 0; i < 58; i++)
    cout<<"*";}


void desserts()
{
    char i = 0;
    float price=0;
    vector <string> item  ;
    static int k = 0;
    firstPage();
    getch();
   while (i != '3')
    {
        menuPage();
        cout<<"\n\n\n\n\n\tPlease Enter Your Selection :";
        cin>> i;
        while (i != '1' && i != '2' && i != '3' )
        {
            menuPage();
            cout<<"\n\n\n\n\n\tPlease Enter Valid Selection : ";
            cin>>i;
        }
        switch (i)
        {
        case '1':
            {
                shakes(price, item, k);
                break;
            }

        case '2':
            {
                beverages(price, item, k);
                break;
            }


        }
    }
    exitPage();
    getch();
    return ;
}
void shakes(float &price, vector <string>& itm, int &k)
{
    int i, j;
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
   showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.strawberry \t RS. 80 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.chocolate \t RS. 100 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.brownie\t RS. 170 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
    switch (i)
    {
    case 1:
        {
            price+=j*80;
            for(int s=j;s>0;s--)
            itm.push_back("o strawberry");
            k++;
            break;
        }

    case 2:
        {
            price+=j*100;
            for(int s=j;s>0;s--)
            itm.push_back("o chocolate ");
            k++;
            break;
        }

    case 3:
        {
           price+=j*170;
            for(int s=j;s>0;s--)
            itm.push_back("o brownie ");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;

    if (ch == 'y')
    {
       shakes(price, itm, k);
    }


    else if (ch == 'n')
    {
        menuPage();    }

getch();
}

void beverages(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >> Non Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.orange slushy    \t RS. 80 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.virgin mohito \t RS. 100 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.kiwi margarita \t RS.150\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
             price+= 80* j;
             for(int s=j;s>0;s--)
            itm.push_back("o Orange slushy  ");
            k++;
            break;
        }
    case 2:
        {
             price+=100 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o virgin mohito ");
            k++;
            break;
        }
    case 3:
        {
             price+=150 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o kiwi margarita");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        beverages( price, itm, k);
    }
    else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}

void italian()
{
    char i = 0;
    float price=0;
    vector <string> item  ;
    static int k = 0;
    firstPage();
    getch();
    while (i != '4')
    {
        menuPage();
        cout<<"\n\n\n\n\n\tPlease Enter Your Selection :";
        cin>> i;
        while (i != '1' && i != '2' && i != '3' && i != '4')
        {
            menuPage();
            cout<<"\n\n\n\n\n\tPlease Enter Valid Selection : ";
            cin>>i;
        }
        switch (i)
        {
        case '1':
            {
                ItalianNonVegPage(price, item, k);
                break;
            }

        case '2':
            {
                ItalianVegPage(price, item, k);
                break;
            }
        case '3':
            {
                ItalianDrinksPage(price, item, k);
                break;
            }

        }
    }
    exitPage();
    getch();
    return ;
}
void ItalianNonVegPage(float &price, vector <string>& itm, int &k)
{
    int i, j;
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
   showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Non Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Chicken Bruschetta \t RS. 310 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2. Pasta Carbonara \t RS. 280 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Mushroom Risotto \t RS. 210 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
    switch (i)
    {
    case 1:
        {
            price+=j*310;
            for(int s=j;s>0;s--)
            itm.push_back("o Chicken Bruschetta");
            k++;
            break;
        }

    case 2:
        {
            price+=j*280;
            for(int s=j;s>0;s--)
            itm.push_back("o Pasta Carbonara");
            k++;
            break;
        }

    case 3:
        {
           price+=j*210;
            for(int s=j;s>0;s--)
            itm.push_back("o Mushroom Risotto");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;

    if (ch == 'y')
    {
        ItalianNonVegPage(price, itm, k);
    }


    else if (ch == 'n')
    {
        menuPage();
    }

getch();
}

void ItalianVegPage(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Caprese salad with Pesto Sauce \t RS. 280 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2. Panzanella \t RS. 200 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Four Cheese Pasta \t RS. 310 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
             price+= 280 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Caprese salad with Pesto Sauce");
            k++;
            break;
        }
    case 2:
        {
             price+=200 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Panzanella");
            k++;
            break;
        }
    case 3:
        {
             price+=310 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Four Cheese Pasta");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        ItalianVegPage( price, itm, k);
    }
    else if (ch == 'n')
    {
     menuPage();
    }
    getch();
}
void ItalianDrinksPage(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Beverages\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Campari    \t\t RS. 180 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.Negroni \t\t RS. 250 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Prosecco  \t\t RS. 210 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
            price+=180 * j;
            for(int s=j;s>0;s--)
            itm.push_back("o Campari");
            k++;
            break;
        }
    case 2:
        {
             price+=250 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Negroni");
            k++;
            break;
        }
    case 3:
        {
             price+=210 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Prosecco");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<endl;
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        ItalianDrinksPage( price, itm, k);
    }


     else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}

void chinese()
{
    char i = 0;
    float price=0;            // to store the prices of selected items
    vector <string> item  ;           // to store the name of selected item
    static int k = 0;                  // to store the total no of items ordered yet
    firstPage();                // first page displayed
    getch();                    // will continue only when some key is pressed
    while (i != '4')
    {
        menuPage();
        cout<<"\n\n\n\n\n\tPlease Enter Your Selection :";
        cin>> i;
        while (i != '1' && i != '2' && i != '3' && i != '4')
        {
            menuPage();
            cout<<"\n\n\n\n\n\tPlease Enter Valid Selection : ";
            cin>>i;
        }
        switch (i)
        {
        case '1':
            {
                chineseveg(price, item, k);
                break;
            }

        case '2':
            {
                chinesenonveg(price, item, k);
                break;
            }
        case '3':
            {
                chinesedrinks(price, item, k);
                break;
            }

        }
    }
    exitPage();                 // out of while if i==5..exiting message
    getch();
    return ;
}
void chineseveg(float &price, vector <string>& itm, int &k)
{
    int i, j;
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
   showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.fried rice \t RS. 220  \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.noodles \t RS. 305 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.manchurian \t RS. 270 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
    switch (i)
    {
    case 1:
        {
            price+=j*220;
            for(int s=j;s>0;s--)
            itm.push_back("o fried rice");
            k++;
            break;
        }

    case 2:
        {
            price+=j*305;
            for(int s=j;s>0;s--)
            itm.push_back("o noodles");
            k++;
            break;
        }

    case 3:
        {
           price+=j*270;
            for(int s=j;s>0;s--)
            itm.push_back("o manchurian ");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;

    if (ch == 'y')
    {
       chineseveg(price, itm, k);
    }


    else if (ch == 'n')
    {
        menuPage();
    }

getch();
}

void chinesenonveg(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >> Non Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.CHICKEN CHILLY(GRAVY) \t RS. 150 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.HONG KONG CHICKEN \t RS. 270 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.CHICKEN MANCHURIAN(GRAVY) \t RS. 300 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
             price+= 150* j;
             for(int s=j;s>0;s--)
            itm.push_back("oCHICKEN CHILLY(GRAVY)");
            k++;
            break;
        }
    case 2:
        {
             price+=270 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o HONG KONG CHICKEN");
            k++;
            break;
        }
    case 3:
        {
             price+=300 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o CHICKEN MANCHURIAN(GRAVY)");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        chinesenonveg( price, itm, k);
    }
    else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}
void chinesedrinks(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Beverages\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Sinkiang Black Beer   \t\t RS. 250\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.Chivas mixed with green tea \t\t RS. 60 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3. Salt soda water \t\t RS. 40\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
            price+=180 * j;
            for(int s=j;s>0;s--)
            itm.push_back("o Sinkiang Black Beer ");
            k++;
            break;
        }
    case 2:
        {
             price+=250 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Chivas mixed with green tea");
            k++;
            break;
        }
    case 3:
        {
             price+=210 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Salt soda water");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<endl;
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        chinesedrinks( price, itm, k);
    }


     else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}


void southindian(){
char i = 0;
    float price=0;            // to store the prices of selected items
    vector <string> item  ;           // to store the name of selected item
    static int k = 0;                  // to store the total no of items ordered yet
    firstPage();                // first page displayed
    getch();                    // will continue only when some key is pressed
    while (i != '4')
    {
        menuPage();
        cout<<"\n\n\n\n\n\tPlease Enter Your Selection :";
        cin>> i;
        while (i != '1' && i != '2' && i != '3' && i != '4')
        {
            menuPage();
            cout<<"\n\n\n\n\n\tPlease Enter Valid Selection : ";
            cin>>i;
        }
        switch (i)
        {
        case '1':
            {
                SouthIndianNonVegPage(price, item, k);
                break;
            }

        case '2':
            {
                SouthIndianVegPage(price, item, k);
                break;
            }
        case '3':
            {
                SouthIndianDrinksPage(price, item, k);
                break;
            }

        }
    }
    exitPage();                 // out of while if i==5..exiting message
    getch();
    return ;}

void SouthIndianNonVegPage(float &price, vector <string>& itm, int &k)
{
    int i, j;
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
   showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Non Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Kongunadu Chicken \t RS. 225 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2. Hyderabadi Haleem \t RS. 400 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Payyoli Chicken \t RS. 360 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
    switch (i)
    {
    case 1:
        {
            price+=j*225;
            for(int s=j;s>0;s--)
            itm.push_back("o Kongunadu Chicken");
            k++;
            break;
        }

    case 2:
        {
            price+=j*400;
            for(int s=j;s>0;s--)
            itm.push_back("o Hyderabadi Haleem");
            k++;
            break;
        }

    case 3:
        {
           price+=j*360;
            for(int s=j;s>0;s--)
            itm.push_back("o Payyoli Chicken");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;

    if (ch == 'y')
    {
        SouthIndianNonVegPage(price, itm, k);
    }


    else if (ch == 'n')
    {
        menuPage();
    }

getch();
}

void SouthIndianVegPage(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Lemon Rice \t RS. 110 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2. Masala Dosa \t RS. 90 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Vada Sambhar \t RS. 70 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
             price+= 110 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Lemon Rice");
            k++;
            break;
        }
    case 2:
        {
             price+=90 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Masala Dosa");
            k++;
            break;
        }
    case 3:
        {
             price+=70 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Vada Sambhar");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        SouthIndianVegPage( price, itm, k);
    }
    else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}
void SouthIndianDrinksPage(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Beverages\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Solkhadi    \t\t RS. 40 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.Shikanjvi \t\t RS. 55 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Ramula  \t\t RS. 60 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
            price+=40 * j;
            for(int s=j;s>0;s--)
            itm.push_back("o Solkhadi");
            k++;
            break;
        }
    case 2:
        {
             price+=55 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Shikanjvi");
            k++;
            break;
        }
    case 3:
        {
             price+=60 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Ramula");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<endl;
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    cin>>ch;
    if (ch == 'y')
    {
        SouthIndianDrinksPage( price, itm, k);
    }


     else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}
void northindian(){
char i = 0;
    float price=0;
    vector <string> item  ;
    static int k = 0;
    firstPage();
    getch();
    while (i != '4')
    {
        menuPage();
        cout<<"\n\n\n\n\n\tPlease Enter Your Selection :";
        scanf("%c", &i);
        while (i != '1' && i != '2' && i != '3' && i != '4')
        {
            menuPage();
            cout<<"\n\n\n\n\n\tPlease Enter Valid Selection : ";
            scanf("%c", &i);
        }
        switch (i)
        {
        case '1':
            {
                pizzaPage(price, item, k);
                break;
            }

        case '2':
            {
                sidesPage(price, item, k);
                break;
            }
        case '3':
            {
                drinksPage(price, item, k);
                break;
            }

        }
    }
    exitPage();
    getch();
    return ;
}


void pizzaPage(float &price, vector <string>& itm, int &k)
{
    int i, j;
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
   showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Non Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Butter Chicken \t RS. 320 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.Kadhai Chicken \t RS. 300 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Chef's Special \t RS. 350 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    scanf("%d", &i);
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    scanf("%d", &j);
    switch (i)
    {
    case 1:
        {
            price+=j*320;
            for(int s=j;s>0;s--)
            itm.push_back("o Butter Chicken");
            k++;
            break;
        }

    case 2:
        {
            price+=j*300;
            for(int s=j;s>0;s--)
            itm.push_back("o Kadhai Chicken");
            k++;
            break;
        }

    case 3:
        {
           price+=j*350;
            for(int s=j;s>0;s--)
            itm.push_back("o Chef's Special");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    scanf("%c", &ch);

    if (ch == 'y')
    {
        pizzaPage(price, itm, k);
    }


    else if (ch == 'n')
    {
        menuPage();
    }

getch();
}

void sidesPage(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Vegetarian\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Paneer Tikka    \t RS. 180 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.Shahi Paneer \t RS. 250 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Paneer Masala \t RS. 280 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    scanf("%d", &i);
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    scanf("%d", &j);



    switch (i)
    {
    case 1:
        {
             price+= 180 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Paneer Tikka");
            k++;
            break;
        }
    case 2:
        {
             price+=250 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Shahi Paneer");
            k++;
            break;
        }
    case 3:
        {
             price+=280 * j;
             for(int s=j;s>0;s--)
            itm.push_back("o Paneer Masala");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    scanf("%c", &ch);
    if (ch == 'y')
    {
        sidesPage( price, itm, k);
    }
    else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}
void drinksPage(float &price, vector <string>& itm, int &k)
{
    char ch;
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Menu  Selection  >>  Beverages\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t 1.Water    \t\t RS. 30 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 2.Coca Cola \t\t RS. 50 \t\t**\t";
    showLine1();
    cout<<"\n\t**\t 3.Ice Tea  \t\t RS. 60 \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;



    switch (i)
    {
    case 1:
        {
            price+=30 * j;
            for(int s=j;s>0;s--)
            itm.push_back("o Water");
            k++;
            break;
        }
    case 2:
        {
             price+= 50 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Coca Cola");
            k++;
            break;
        }
    case 3:
        {
             price+=60 * j;
             for(int s=j;s>0;s--)
             itm.push_back("o Ice Tea");
            k++;
            break;
        }
    }

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Item Name           \t\t\t**\t";
    showLine1();
    for (int z = 0; z < itm.size(); z++)
    {
     cout<<"\n\t**\t\t  "<<itm[z]<<endl;
    }
    cout<<"\n\t**\t\tAmount to be paid: "<<price;
    showLine1();
    cout<<endl;
    cout<<"\n\t";
    newline();

    cout<<"\n\n\n\tDo you want to order anything else <y/n> : ";
    scanf("%c", &ch);
    if (ch == 'y')
    {
        drinksPage( price, itm, k);
    }


     else if (ch == 'n')
    {
        menuPage();
    }
    getch();
}

void exitPage()
{
    int i, j;
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t Exiting Program, Bye Bye  \t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    return;
}

void menuPage()
{
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  Menu  Selection  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t\t  1. Non Veg  \t\t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t\t  2. Veg  \t\t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t\t  3. Beverages  \t\t\t**\t";
    showLine1();
    cout<<"\n\t**\t\t  4. Exit  \t\t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    return;

}
void firstPage()
{
    int i, j;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t";
   newline();
    showLine1();
    cout<<"\n\t**\t\t  WELCOME TO OUR RESTAURANT  \t\t\t**\t";
    showLine1();
    cout<<"\n\t";
    newline();
    cout<<"\n\t";
    newline();
    showLine1();
    cout<<"\n\t**\t     Customer  Order  Billing  System  \t\t**";
    showLine1();
    cout<<"\n\t**\t\t  Press <Enter> to continue   \t\t**";
    showLine1();
    cout<<"\n\t";
    newline();
    return;
}

void hospital(){
cout<<"List of Hospital:    "<<endl;
cout<<"1.Apllo hospitals\n"<<"2.Max Hospital\n"<<"3.Kailash Hospital\n"<<"4.Medanta\n"<<"5.Fortis Hospitals"<<endl;
cout<<"Do you want to book an appointment?(y/n)";
char c;int hos;
cin>>c;
int month,day,year;
string k;
string s;
string monthName[12] = {"January","February","March","April","May","June","July",
"August","September","October","November","December"};
string hospital1[5] = {"Apllo hospitals","Max Hospital","Kailash Hospital","Medanta","Fortis Hospitals"};
cout<<"Do you want to book an appointment?(y/n)";
if(c=='y'||c=='Y')
{cout<<"enter hospital number:";
cin>>hos;
cout<<"\nEnter your name:  ";
cin>>s;
cout<<"\nEnter your phone number:   ";
cin>>k;
while(k.length()>10 || k.length()<10)
{
    cout<<"Enter valid phone number"<<endl;
    cout<<"Enter your phone number:   ";
    cin>>k;
}
cout << "\nEnter month (between 1 and 12):  ";
cin >> month;
while(month<1 || month>12)
{
    cout<<"Enter valid month"<<endl;
    cout<<"Enter month:   ";
    cin>>month;
}
cout << "\nEnter day (between 1 and 31):   ";
cin >> day;
while(day<1 || day>31)
{
    cout<<"Enter valid day"<<endl;
    cout<<"Enter day:   ";
    cin>>day;
}
year = 2018;
cout<<"Appointment booked successfully"<<endl;
cout<<"DETAILS ARE AS FOLLOWS\n";
cout<<hospital1[hos-1];
cout<<endl;
cout<<"Your name: "<<s<<"\n"<<"Your phone number: "<<k<<"\nDate:  "<< day << " " << monthName[month-1] << " " << year << endl;
cout<<"Thanks for visiting us";

}
else if(c== 'n'){
    cout<<"Thanks for visiting us"<<endl;
}
}

struct AdjListNode
{
    int dest;
    int weight;
    struct AdjListNode* next;
};

struct AdjList
{
    struct AdjListNode *head;
};

struct Graph
{
    int V;
    struct AdjList* array;
};
struct AdjListNode* newAdjListNode(int dest, int weight)
{
    struct AdjListNode* newNode = new AdjListNode;
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}
struct Graph* createGraph(int V)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->array = new AdjList[V];
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}


void addEdge(struct Graph* graph, int src, int dest, int weight)
{
    struct AdjListNode* newNode = newAdjListNode(dest, weight);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
}
struct MinHeapNode
{
    int  v;
    int dist;
};

struct MinHeap
{
    int size;
    int capacity;
    int *pos;
    struct MinHeapNode **array;
};

struct MinHeapNode* newMinHeapNode(int v, int dist)
{
    struct MinHeapNode* minHeapNode =new MinHeapNode;
    minHeapNode->v = v;
    minHeapNode->dist = dist;
    return minHeapNode;
}
struct MinHeap* createMinHeap(int capacity)
{
    struct MinHeap* minHeap =
         new MinHeap;
    minHeap->pos = (int *)malloc(capacity * sizeof(int));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array =(struct MinHeapNode**) malloc(capacity * sizeof(struct MinHeapNode*));
    return minHeap;
}

void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b)
{
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct MinHeap* minHeap, int idx)
{
    int smallest, left, right;
    smallest = idx;
    left = 2 * idx + 1;
    right = 2 * idx + 2;

    if (left < minHeap->size &&
        minHeap->array[left]->dist < minHeap->array[smallest]->dist )
      smallest = left;

    if (right < minHeap->size &&
        minHeap->array[right]->dist < minHeap->array[smallest]->dist )
      smallest = right;

    if (smallest != idx)
    {
            MinHeapNode *smallestNode = minHeap->array[smallest];
        MinHeapNode *idxNode = minHeap->array[idx];

        // Swap positions
        minHeap->pos[smallestNode->v] = idx;
        minHeap->pos[idxNode->v] = smallest;

        // Swap nodes
        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);

        minHeapify(minHeap, smallest);
    }
}

int isEmpty(struct MinHeap* minHeap)
{
    return minHeap->size == 0;
}
struct MinHeapNode* extractMin(struct MinHeap* minHeap)
{
    if (isEmpty(minHeap))
        return NULL;
    struct MinHeapNode* root = minHeap->array[0];
    struct MinHeapNode* lastNode = minHeap->array[minHeap->size - 1];
    minHeap->array[0] = lastNode;
    minHeap->pos[root->v] = minHeap->size-1;
   --minHeap->size;
    minHeapify(minHeap, 0);
    return root;
}
void decreaseKey(struct MinHeap* minHeap, int v, int dist)
{
    int i = minHeap->pos[v];


    minHeap->array[i]->dist = dist;

    while (i && minHeap->array[i]->dist < minHeap->array[(i - 1) / 2]->dist)
    {

        minHeap->pos[minHeap->array[i]->v] = (i-1)/2;
        minHeap->pos[minHeap->array[(i-1)/2]->v] = i;
        swapMinHeapNode(&minHeap->array[i],  &minHeap->array[(i - 1) / 2]);

        i = (i - 1) / 2;
    }
}

bool isInMinHeap(struct MinHeap *minHeap, int v)
{
   if (minHeap->pos[v] < minHeap->size)
     return true;
   return false;
}
struct display
{
    string names;
    float rating;
    int vertex;
    int dist;
};

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort1(struct display arr[], int n)
{
   int i, j;
   float a;
   int v,d;
   string s;
   for (i = 0; i < n; i++)


       for (j = 0; j < n-i-1; j++)
           if (arr[j].rating > arr[j+1].rating)
              {
                  a=arr[j].rating;
                  arr[j].rating=arr[j+1].rating;
                  arr[j+1].rating=a;
                  v=arr[j].vertex;
                  arr[j].vertex=arr[j+1].vertex;
                  arr[j+1].vertex=v;
                  s=arr[j].names;
                  arr[j].names=arr[j+1].names;
                  arr[j+1].names=s;
                  d=arr[j].dist;
                  arr[j].dist=arr[j+1].dist;
                  arr[j+1].dist=d;
              }
}
void bubbleSort2(struct display arr[], int n)
{
   int i, j;
   float a;
   int v,d;
   string s;
   for (i = 0; i < n; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j].dist > arr[j+1].dist)
              {
                  a=arr[j].rating;
                  arr[j].rating=arr[j+1].rating;
                  arr[j+1].rating=a;
                  v=arr[j].vertex;
                  arr[j].vertex=arr[j+1].vertex;
                  arr[j+1].vertex=v;
                  s=arr[j].names;
                  arr[j].names=arr[j+1].names;
                  arr[j+1].names=s;
                  d=arr[j].dist;
                  arr[j].dist=arr[j+1].dist;
                  arr[j+1].dist=d;
              }
}

void printArr(int dist[], int n)

{display d[15];
for(int i=0;i<15;i++){
d[i].dist=dist[i];
d[i].vertex=i;
}
d[0].names="HUTKAR BURGERS            ";
d[1].names="PIRATES OF GRILL          ";
d[2].names="BARBEQUE NATION           ";
d[3].names="PIND BALLUCHI             ";
d[4].names="JOHNNY ROCKETS            ";
d[5].names="CHILI'S                   ";
d[6].names="GOLDEN DRAGON             ";
d[7].names="BERCO'S                   ";
d[8].names="JUNKYARD CAFE             ";
d[9].names="WASABI                    ";
d[10].names="IHOP                      ";
d[11].names="LORD OF THE DRINKS        ";
d[12].names="ZEN                       ";
d[13].names="WAFFLESOME                ";
d[14].names="BASKIN ROBBINS             ";
d[0].rating=3.2;
d[1].rating=3.6;
d[2].rating=4.0;
d[3].rating=3.8;
d[4].rating=2.2;
d[5].rating=4.2;
d[6].rating=2.8;
d[7].rating=4.5;
d[8].rating=3.9;
d[9].rating=3.8;
d[10].rating=4.3;
d[11].rating=4.8;
d[12].rating=3.5;
d[13].rating=3.2;
d[14].rating=3.6;
    cout<<"Vertex                   Restaurant Name             Rating       Distance from Source\n\n";
    for (int j = 0; j < 15; ++j)
            cout<<d[j].vertex<<"\t\t\t"<<d[j].names<<"\t"<<d[j].rating<<"\t\t"<<d[j].dist<<endl;
char ch;
cout<<"Enter by what do you want to sort\n";
cout<<"1.Rating\n"<<"2.Distance"<<endl;
cin>>ch;

if(ch== '1'){
   cout<<"Sorting by rating"<<endl;
bubbleSort1(d, 15);
cout<<"Vertex                   Restaurant Name             Rating       Distance from Source\n\n";
    for (int j = 0; j < 15; ++j)
            cout<<d[j].vertex<<"\t\t\t"<<d[j].names<<"\t"<<d[j].rating<<"\t\t"<<d[j].dist<<endl;
}
else if(ch== '2'){
   cout<<"Sorting by Distance"<<endl;
bubbleSort2(d, 15);
cout<<"Vertex                   Restaurant Name             Rating       Distance from Source\n\n";
    for (int j = 0; j < 15; ++j)
            cout<<d[j].vertex<<"\t\t\t"<<d[j].names<<"\t"<<d[j].rating<<"\t\t"<<d[j].dist<<endl;
}
else
    return;
}



void dijkstra(struct Graph* graph, int src)
{
    int V = graph->V;
    int dist[V];


    struct MinHeap* minHeap = createMinHeap(V);


    for (int v = 0; v < V; ++v)
    {
        dist[v] = INT_MAX;
        minHeap->array[v] = newMinHeapNode(v, dist[v]);
        minHeap->pos[v] = v;
    }


    minHeap->array[src] = newMinHeapNode(src, dist[src]);
    minHeap->pos[src]   = src;
    dist[src] = 0;
    decreaseKey(minHeap, src, dist[src]);


    minHeap->size = V;

    while (!isEmpty(minHeap))
    {

        struct MinHeapNode* minHeapNode = extractMin(minHeap);
        int u = minHeapNode->v;
        struct AdjListNode* pCrawl = graph->array[u].head;
        while (pCrawl != NULL)
        {
            int v = pCrawl->dest;
            if (isInMinHeap(minHeap, v) && dist[u] != INT_MAX &&
                                          pCrawl->weight + dist[u] < dist[v])
            {
                dist[v] = dist[u] + pCrawl->weight;

                decreaseKey(minHeap, v, dist[v]);
            }
            pCrawl = pCrawl->next;
        }
    }

    printArr(dist, V);
}
void shortest1()
{cout<<"LIST OF RESTAURANTS IS AS FOLLOWS\n\n";
    cout<<"0. HUTKAR BURGERS  \n1. PIRATES OF GRILL \n2. BARBEQUE NATION \n3. PIND BALLUCHI \n4. JOHNNY ROCKETS \n5. CHILI'S \n";
    cout<<"6. GOLDEN DRAGON \n7. BERCO'S \n8. JUNKYARD CAFE \n9. WASABI \n10. IHOP \n11. LORD OF THE DRINKS \n12. ZEN \n13. WAFFLESOME \n14. BASKIN ROBBINS\n\n\n";
    int V = 39;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 13, 1, 12);
    addEdge(graph, 1, 13, 12);
    addEdge(graph, 8, 13, 11);
    addEdge(graph, 20, 13,25 );
    addEdge(graph, 0, 1, 6);
    addEdge(graph, 1, 0, 6);
    addEdge(graph, 1, 3, 9);
    addEdge(graph, 3, 1, 9);
    addEdge(graph, 7, 3, 14);
    addEdge(graph, 20, 7, 6);
    addEdge(graph, 12, 20, 7);
    addEdge(graph, 14, 12, 10);
    addEdge(graph, 12, 14, 10);
    addEdge(graph, 14, 8, 7);
    addEdge(graph, 8, 14, 7);
    addEdge(graph, 19, 12, 4);
    addEdge(graph, 19, 17, 8);
    addEdge(graph, 17, 19, 8);
    addEdge(graph, 16, 19, 15);
    addEdge(graph, 19, 16, 15);
    addEdge(graph, 9, 8, 13);
    addEdge(graph, 9, 15, 5);
    addEdge(graph, 15, 9, 5);
    addEdge(graph, 17, 6, 1);
    addEdge(graph, 6, 17, 1);
    addEdge(graph, 6, 18, 1);
    addEdge(graph, 18, 6, 1);
    addEdge(graph, 18, 11, 3);
    addEdge(graph, 11, 18, 3);
    addEdge(graph, 11, 16, 19);
    addEdge(graph, 16, 11, 19);
    addEdge(graph, 16, 10, 9);
    addEdge(graph, 10, 16, 9);
    addEdge(graph, 15, 10, 17);
    addEdge(graph, 10, 15, 17);
    addEdge(graph, 21, 11, 11);
    addEdge(graph, 11, 21, 11);
    addEdge(graph, 21, 22, 5);
    addEdge(graph, 22, 5, 7);
    addEdge(graph, 22, 9, 4);
    addEdge(graph, 23, 22, 6);
    addEdge(graph, 0, 23, 5);
    addEdge(graph, 7, 17, 3);
    addEdge(graph, 4, 2, 9);
    addEdge(graph, 6, 4, 15);
    addEdge(graph, 10, 14, 8);
    addEdge(graph, 14, 10, 8);
    addEdge(graph, 18, 5, 9);
    addEdge(graph, 2, 5, 11);
    addEdge(graph, 5, 2, 11);
    addEdge(graph, 0, 2, 7);
    addEdge(graph, 2, 0, 7);
    addEdge(graph, 3, 4, 11);
    addEdge(graph, 4, 3,11);
    addEdge(graph, 12, 20, 7);
    addEdge(graph, 9, 24, 2);
    addEdge(graph, 24, 9, 2);
    addEdge(graph, 24, 25, 1);
    addEdge(graph, 25, 24, 1);
    addEdge(graph, 25, 26, 12);
    addEdge(graph, 26, 8, 3);
    addEdge(graph, 8, 26, 3);
    addEdge(graph, 27, 24, 8);
    addEdge(graph, 28, 27, 7);
    addEdge(graph, 36, 27, 8);
    addEdge(graph, 35, 36, 7);
    addEdge(graph, 36, 35, 7);
    addEdge(graph, 35, 32, 6);
    addEdge(graph, 32, 35, 6);
    addEdge(graph, 32, 33, 3);
    addEdge(graph, 33, 34, 2);
    addEdge(graph, 34, 37, 1);
    addEdge(graph, 34, 30, 1);
    addEdge(graph, 30, 31, 10);
    addEdge(graph, 38, 31, 3);
    addEdge(graph, 31, 38, 3);
    addEdge(graph, 31, 26, 11);
    addEdge(graph, 29, 28, 5);
    addEdge(graph, 25, 29, 9);
    addEdge(graph, 29, 25, 9);
    addEdge(graph, 29, 30, 6);
    addEdge(graph, 30, 29, 6);
    addEdge(graph, 36, 27, 8);
    addEdge(graph, 37, 38, 2);
    addEdge(graph, 28, 32, 4);
    int x,t;
cout<<"ENTER YOUR LOCATION FROM 15-38\n\n"<<endl;
cin>>x;
if(x>=15 && x<=38)
{
dijkstra(graph,x);
}
else
{
	cout<<"pls enter valid location ";
	cout<<endl;
	cout<<"press any key to continue or press esc to exit";
	cout<<endl;
	char ch;
 ch=getche();
if(ch==27)
{
    exit(0);
}
else if(ch)
{
    shortest1();
}
}
selectrestau();
}

void selectrestau()
{

cout<<"ENTER RESTAURANT NAME OF YOUR CHOICE"<<endl;
cout<<"\nYou are now being redirected to restaurant portal............."<<endl;
char s[50],c1;
cin>>s;
if(!strcmp(s,"HUTKAR-BURGERS")||!strcmp(s,"hutkar-burgers")||!strcmp(s,"HUTKARBURGERS")||!strcmp(s,"HUTKAR")||!strcmp(s,"hutkar")||!strcmp(s,"hutkarburgers"))
{
italian();
}
else if(!strcmp(s,"PIRATES-OF-GRILL")||!strcmp(s,"pirates-of-grill")||!strcmp(s,"piratesofgrill")||!strcmp(s,"PIRATESOFGRILL")){
    northindian();}
else if(!strcmp(s,"BARBEQUE-NATION")||!strcmp(s,"barbeque-nation")||!strcmp(s,"barbequenation")||!strcmp(s,"BARBEQUENATION")){
    chinese();}
else if(!strcmp(s,"PIND-BALLUCHI")||!strcmp(s,"pindballuchi")||!strcmp(s,"pind-balluchi")||!strcmp(s,"PINDBALLUCHI")){
    northindian();}
else if(!strcmp(s,"JONNY-ROCKETS")||!strcmp(s,"JONNYROCKETS")||!strcmp(s,"jonnyrockets")||!strcmp(s,"jonny-rockets")){
    northindian();}
else if(!strcmp(s,"CHILI'S")||!strcmp(s,"CHILIS")||!strcmp(s,"chilis")||!strcmp(s,"chili's")){
        chinese();}
else if(!strcmp(s,"GOLDEN-DRAGON")||!strcmp(s,"golden-dragon")||!strcmp(s,"GOLDENDRAGON")||!strcmp(s,"goldendragon")){
    desserts();}
else if(!strcmp(s,"BERCO'S")||!strcmp(s,"BERCOS")||!strcmp(s,"bercos")||!strcmp(s,"berco's")||!strcmp(s,"berco")||!strcmp(s,"BERCO")){
    southindian();}
else if(!strcmp(s,"JUNKYARD-CAFE")||!strcmp(s,"JUNKYARDCAFE")||!strcmp(s,"junkyardcafe")||!strcmp(s,"junkyard-cafe")||!strcmp(s,"junkyard")||!strcmp(s,"JUNKYARD")){
    southindian();}
else if(!strcmp(s,"WASABI")||!strcmp(s,"wasabi")){
    chinese();}
else if(!strcmp(s,"IHOP")||!strcmp(s,"ihop")){
    italian();}
else if(!strcmp(s,"LORD-OF-THE-DRINKS")||!strcmp(s,"lord-of-the-drinks")||!strcmp(s,"lordofthedrinks")||!strcmp(s,"LORDOFTHEDRINKS")){
    desserts();}
else if(!strcmp(s,"ZEN")||!strcmp(s,"zen")){
    chinese();}
else if(!strcmp(s,"WAFFLESOME")||!strcmp(s,"wafflesome")){
    desserts();}
else if(!strcmp(s,"BASKIN-ROBBINS")||!strcmp(s,"baskin-robbins")||!strcmp(s,"BASKINROBBINS")||!strcmp(s,"baskinrobbins")){
    desserts();}
else {
        cout<<"NO SUCH RESTAURANT EXISTS IN DATABASE";
        cout<<"\ndo you want enter  restaurant name again y/n";
        cin>>c1;
        if (c1=='y'||c1=='Y')
        {
         selectrestau();
        }

        else
            intro();
        
        
}

}

void menu()
{
    cout<<"\n\n\n";

            char ch;
            cout<<"Where would you like to go : r for Restaurant and h for Hospital:    ";
            cin>>ch;
            if(ch== 'r'||ch=='R')
            shortest1();
            else if (ch == 'h'||ch=='H')
            hospital();
        }


void clrscr()
{
    for(int i=0;i<25;i++)
    {
        cout<<"\n";
    }
}
void rectangle(int x,int y,int l,int b)
{
    int i,m;
    gotoxy(x,y);
     printf("%c",201);
    for(i=x+1;i<l-1;i++)
    {
        gotoxy(i,y);
        printf("%c",205);
    }
    gotoxy(i,y); printf("%c",187);

    for (m=y+1;m<b;m++)
    {
        gotoxy(x,m);
        for(i=x;i<l;i++)
        {
            if(i==x||i==l-1)
            {
                gotoxy(i,m); printf("%c",186);
            }

        }

    }

    gotoxy(x,m); printf("%c",200);
    for(i=x+1;i<l-1;i++)
    {
        gotoxy(i,m);
        printf("%c",205);
    }
    gotoxy(i,m); printf("%c",188);
}

COORD coord = {0, 0};

void gotoxy (int x, int y)
        {
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }

void welcome()
{
    system("cls");
    rectangle(9,5,80,30);
    system("color 1A");

gotoxy(35,10);cout<<"FACILITY MANAGEMENT";

gotoxy(31,8);cout<<"___________________________";
gotoxy(31,11);cout<<"__________________________";

gotoxy(20,15);cout<<"               SUBMITTED BY";
gotoxy(16,16);cout<<"                 **SHRUTI GUPTA**";
gotoxy(16,17);cout<<"                 **VATSAL GUPTA**";
gotoxy(16,18);cout<<"                 **ARJAV JAIN**";
gotoxy(16,19);cout<<"                  **ANANYA SHARMA**";

gotoxy(16,23);cout<<"             A PROJECT IN C++ (BY BATCH - B12)";
gotoxy(16,25);cout<<"      JAYPEE INSTITUTE OF INFORMATION TECHNOLOGY";
gotoxy(16,26);cout<<"      ******************************************";

gotoxy(30,28);cout<<"A DEEMED UNIVERSITY";
gotoxy(0,30);cout<<"Press ESC to exit  or press any key to continue";

char ch;
ch=getche();
if(ch==27)
{
    exit(0);
}
else if(ch)
{
    intro();
}
}

void intro()
{
    char c;
    do
    {
        system("cls"); //Clears the screen
        gotoxy(35,10);cout<<"FACILITY MANAGEMENT";
        gotoxy(31,8);cout<<"___________________________";
        gotoxy(31,11);cout<<"__________________________";

        rectangle(8,9,91,13);
        gotoxy(0,30);cout<<"Press ESC to exit";
        gotoxy(10,11); cout<<"Press L to login\t\t\t";
        c=getche(); //Variable c stores the key pressed by user
        if (c=='L'||c=='l')
        {
         menu();
            break;
        }

        if (c==27)  //27 is ASCII code of escape key, means program exits when user presses Esc key insted to A or S
        {
            welcome();
        }
    }while(1); //infinite loop

}

int main(){


    welcome();
    getchar();
    clrscr();
    getchar();
    return 0;
}
