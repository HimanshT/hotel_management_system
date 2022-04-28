#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quant;
    int choice;

    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schiken = 0;
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of Items we have in our hotel";
    cout << "\n Rooms available\n";
    cin >> Qrooms;
    cout << "\nPasta available\n";
    cin >> Qpasta;
    cout << "\nBurger available\n";
    cin >> Qburger;
    cout << "\nNoodles available\n";
    cin >> Qnoodles;
    cout << "\nshake available\n";
    cin >> Qshake;
    cout << "\nChiken available\n";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Select from the given options";
    cout << "\n\n1)Rooms";
    cout << "\n2)Pasta";
    cout << "\n3)burger";
    cout << "\n4)noodles";
    cout << "\n5)shake";
    cout << "\n6)chicken";
    cout << "\n7) Sales and collection";
    cout << "\n8)Exit";

    cout << "\n\n Please select your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nEnter the no. of rooms you want:";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms += quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "rooms \n rooms have been allotted to you";
        }
        else
        {
            cout << "\n\tOnly " << Qrooms - Srooms << " remaining in the hotel";
        }
        break;
    case 2:
        cout << "\nEnter the no. of pasta you want:";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta += quant;
            Total_pasta = Total_pasta + quant * 100;
            cout << "\n\n\t\t" << quant << "pasta \n pasta have been allotted to you";
        }
        else
        {
            cout << "\n\tOnly " << Qpasta - Spasta << " remaining in the hotel";
        }
        break;
    case 3:
        cout << "\nEnter the no. of burger you want:";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger += quant;
            Total_burger = Total_burger + quant * 80;
            cout << "\n\n\t\t" << quant << "burger \nburger have been allotted to you";
        }
        else
        {
            cout << "\n\tOnly " << Qburger - Sburger << " remaining in the hotel";
        }
        break;
    case 4:
        cout << "\nEnter the no. of noodles you want:";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles += quant;
            Total_noodles = Total_noodles + quant * 150;
            cout << "\n\n\t\t" << quant << " noodles \nnoodles have been allotted to you";
        }
        else
        {
            cout << "\n\tOnly " << Qnoodles - Snoodles << " remaining in the hotel";
        }
        break;
    case 5:
        cout << "\nEnter the no. of shake you want:";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake += quant;
            Total_shake = Total_shake + quant * 50;
            cout << "\n\n\t\t" << quant << " shake \n shake have been allotted to you";
        }
        else
        {
            cout << "\n\tOnly " << Qshake - Sshake << " remaining in the hotel";
        }
        break;
    case 6:
        cout << "\nEnter the no. of chicken you want:";
        cin >> quant;
        if (Qchicken - Schiken >= quant)
        {
            Schiken += quant;
            Total_chicken = Total_chicken + quant * 200;
            cout << "\n\n\t\t" << quant << " chicken \n chicken have been allotted to you";
        }
        else
        {
            cout << "\n\tOnly " << Qchicken - Schiken << " remaining in the hotel";
        }
        break;
    case 7:
        cout << "\n\tDetails of sales and collection";
        cout << "\n Number of rooms we had:" << Qrooms;
        cout << "\n Number of rooms given for rent:" << Srooms;
        cout << "\n Remaining rooms " << Qrooms - Srooms;
        cout << " total collection from rooms " << Total_rooms;

        cout << "\n Number of pasta we had:" << Qpasta;
        cout << "\n Number of pasta given for rent:" << Spasta;
        cout << "\n Remaining pasta " << Qpasta - Spasta;
        cout << " total collection from pasta " << Total_pasta;

        cout << "\n Number of burger we had:" << Qburger;
        cout << "\n Number of burger given for rent:" << Sburger;
        cout << "\n Remaining burger " << Qburger - Sburger;
        cout << " total collection from burger " << Total_burger;

        cout << "\n Number of noodles we had:" << Qnoodles;
        cout << "\n Number of noodles given for rent:" << Snoodles;
        cout << "\n Remaining noodles " << Qnoodles - Snoodles;
        cout << " total collection from noodles " << Total_noodles;

        cout << "\n Number of shake we had:" << Qshake;
        cout << "\n Number of noodles given for rent:" << Snoodles;
        cout << "\n Remaining noodles " << Qnoodles - Snoodles;
        cout << " total collection from noodles " << Total_noodles;

        cout << "\n Number of shake we had:" << Qshake;
        cout << "\n Number of shake given for rent:" << Sshake;
        cout << "\n Remaining shake " << Qshake - Sshake;
        cout << " total collection from shake " << Total_shake;

    case 8:
        exit(0);

    default:
        cout << "\nInvalid selection";
    }
    goto m;
}