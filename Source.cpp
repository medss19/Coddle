#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <conio.h>

using namespace std;

class Coddle //Coddle class
{
private :
    char p_cheatsheet[100];
    char p_project[100];
    char p_video[100];

    char j_cheatsheet[100];
    char j_project[100];
    char j_video[100];

    char c_cheatsheet[100];
    char c_project[100];
    char c_video[100];

    char site[100];

public:

    void setdata() // Codesites
    {
        cout << "Code site: "; cin.getline(site, 100);
        cout << endl;
    }

    void p_setdata()  //Python setdata
    {
        cout << "Cheatsheet links: "; cin.getline(p_cheatsheet, 100);
        cout<<"Project links: "; cin.getline(p_project, 100);
        cout<<"Video links: ";cin.getline(p_video, 100);
        cout << endl;
    }
    void j_setdata()  //Java setdata
    {
        cout << "Cheatsheet links: "; cin.getline(j_cheatsheet, 100);
        cout<<"Project links: "; cin.getline(j_project, 100);
        cout<<"Video links: ";cin.getline(j_video, 100);
        cout << endl;
    }
    void c_setdata()  //C++ setdata
    {
        cout << "Cheatsheet links: "; cin.getline(c_cheatsheet, 100);
        cout<<"Project links: "; cin.getline(c_project, 100);
        cout<<"Video links: ";cin.getline(c_video, 100);
        cout << endl;
    }

    void getdata()
    {
        cout << endl;
        cout << setw(7) << right << site << endl;
    }

    void pc_getdata()   //Python getdata
    {
        cout << endl;
        // cout << setw(7) << right << "Cheatsheet links: \n";
        cout << setw(7) << right << p_cheatsheet << endl;
    }

    void pp_getdata()
    {
        cout << endl;
        // cout << setw(7) << right << "Project links: \n";
        cout << setw(7) << right << p_project << endl;
    }

    void pv_getdata()
    {
        cout << endl;
        // cout << setw(7) << right << "Video links: \n";
        cout << setw(7) << right << p_video << endl;
    }

    void jc_getdata()   //Java getdata
    {
        cout << endl;
        // cout << setw(7) << right << "Cheatsheet links: \n";
        cout << setw(7) << right << j_cheatsheet << endl;
    }

    void jp_getdata()
    {
        cout << endl;
        // cout << setw(7) << right << "Project links: \n";
        cout << setw(7) << right << j_project << endl;
    }

    void jv_getdata()
    {
        cout << endl;
        // cout << setw(7) << right << "Video links: \n";
        cout << setw(7) << right << j_video << endl;
    }

    void cc_getdata()    //C++ getdata
    {
        cout << endl;
        // cout << setw(7) << right << "Cheatsheet links: \n";
        cout << setw(7) << right << c_cheatsheet << endl;
    }

    void cp_getdata()
    {
        cout << endl;
        // cout << setw(7) << right << "Project links: \n";
        cout << setw(7) << right << c_project << endl;
    }

    void cv_getdata()
    {
        cout << endl;
        // cout << setw(7) << right << "Video links: \n";
        cout << setw(7) << right << c_video << endl;
    }

    // PYTHON
    char* p_getcheatsheet()
    {
        return p_cheatsheet;
    }
    char* p_getproject()
    {
        return p_project;
    }
    char* p_getvideo()
    {
        return p_video;
    }

    // JAVA
    char* j_getcheatsheet()
    {
        return j_cheatsheet;
    }
    char* j_getproject()
    {
        return j_project;
    }
    char* j_getvideo()
    {
        return j_video;
    }

    // C++
    char* c_getcheatsheet()
    {
        return c_cheatsheet;
    }
    char* c_getproject()
    {
        return c_project;
    }
    char* c_getvideo()
    {
        return c_video;
    }
};
ostream &mymnp(ostream &out)
{
    out << setfill('*') << setw(80) << " " << endl;
    return out;
}
int main()
{
    system("Color 9E");
    bool sindicator = false;
    int total = 10;
    int choice;

    fstream mpfile;
    mpfile.open("PythonInfo", ios::binary | ios::out | ios::in | ios::app);

    fstream mjfile;
    mjfile.open("JavaInfo", ios::binary | ios::out | ios::in | ios::app);

    fstream mcfile;
    mcfile.open("C++Info", ios::binary | ios::out | ios::in | ios::app);

    fstream msfile;
    msfile.open("SitesInfo", ios::binary | ios::out | ios::in | ios::app);

    Coddle mov;

menu:
    while (true)
    {
        cout << mymnp;
        cout << endl;
        cout <<"\t\t\t" << "WELCOME TO COODLE.COM" << endl;
        cout << endl;
        cout << mymnp;
        cout << "MENU \n";
        cout << "1. Search by Language \n";
        cout << "2. Common Coding sites \n";
        cout << "3. Add CodeSite (accessible to Admin only) \n";
        cout << "4. About \n";
        cout << "0. Exit \n";
        cout << endl;
        cout << "Your choice: "; cin >> choice;
        cout << endl;
        switch (choice) 
        {
            case 1:  //Search by Language
                system("cls");
                int sm_choice;
            search_main_menu:
                cout << mymnp;
                cout << endl;
                cout <<"\t\t\t" << "WELCOME TO COODLE.COM" << endl;
                cout << endl;
                cout << mymnp;
                cout << endl;
                cout << "1. Search for Pyhton \n";
                cout << "2. Search for Java \n";
                cout << "3. Search for C++ \n";
                cout << "4. Back to main menu \n";
                cout << endl;
                cout << "Your choice: "; cin >> sm_choice;
                system("cls");
                switch (sm_choice) 
                {
                    case 1:  //Search for Python
                        system("cls");
                        int sp_choice;
                    search_p_menu:
                        cout << mymnp;
                        cout << endl;
                        cout <<"\t\t\t\t" << "CODDLE.COM/PYTHON" << endl;
                        cout << endl;
                        cout << mymnp;
                        cout << endl;
                        cout << "1. Search for Cheatsheets \n";
                        cout << "2. Search for Projects \n";
                        cout << "3. Search for Videos \n";
                        cout << "4. Back to main menu \n";
                        cout << "5. Add to Python db (Accessible to Admin only)\n";
                        cout << endl;
                        cout << "Your choice: "; cin >> sp_choice;
                        system("cls");
                        switch(sp_choice)
                        {
                            case 1:  //Cheatsheet
                                sindicator = false;
                                cin.ignore();
                                mpfile.open("PythonInfo", ios::binary | ios::out | ios::in | ios::app);
                                mpfile.seekg(0);
                                mpfile.clear();
                                if (mpfile.is_open())
                                {
                                    cout << "CHEATSHEET LINKS :" << endl;
                                    while (mpfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            mov.pc_getdata();
                                            sindicator = true;
                                    }
                                    mpfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_p_menu;
                                break;
                            case 2:  //Projects
                                sindicator = false;
                                cin.ignore();
                                mpfile.open("PythonInfo", ios::binary | ios::out | ios::in | ios::app);
                                mpfile.seekg(0);
                                mpfile.clear();
                                if (mpfile.is_open())
                                {
                                    cout << "PROJECT LINKS :" << endl;
                                    while (mpfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.pp_getdata();
                                            sindicator = true;
                                    }
                                    mpfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_p_menu;
                                break;
                            case 3:   //VIDEOS
                                sindicator = false;
                                cin.ignore();
                                mpfile.open("PythonInfo", ios::binary | ios::out | ios::in | ios::app);
                                mpfile.seekg(0);
                                mpfile.clear();
                                if (mpfile.is_open())
                                {
                                    cout << "VIDEO LINKS :" << endl;
                                    while (mpfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.pv_getdata();
                                            sindicator = true;
                                    }
                                    mpfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_p_menu;
                                break;
                            case 4:
                                goto search_main_menu;
                                break;
                            case 5:
                                {
                                    string pass ="";
                                    char ch;
                                    cout << "Enter pass\n";
                                    ch = _getch();
                                    while(ch != 13){//character 13 is enter
                                        pass.push_back(ch);
                                        cout << '*';
                                        ch = _getch();
                                    }
                                    if(pass == "Mitsakos"){
                                        cout << "\nAccess granted :P\n";
                                    
                                        ofstream writenew;
                                        writenew.open("PythonInfo", ios::binary | ios::app);
                                        cin.ignore();
                                        mov.p_setdata();
                                        writenew.write((char *)&mov, sizeof(Coddle));
                                        total++;
                                        writenew.close();
                                    }
                                    else{
                                        cout << "\nAccess aborted...\n";
                                    }
                                }
                                goto search_p_menu;
                                break;
                        }

                    case 2:  //Search for Java
                        system("cls");
                        int sj_choice;
                    search_j_menu:
                        cout << mymnp;
                        cout << endl;
                        cout <<"\t\t\t\t" << "CODDLE.COM/JAVA" << endl;
                        cout << endl;
                        cout << mymnp;
                        cout << endl;
                        cout << "1. Search for Cheatsheets \n";
                        cout << "2. Search for Projects \n";
                        cout << "3. Search for Videos \n";
                        cout << "4. Back to main menu \n";
                        cout << "5. Add to Java db (Accessible to Admin only)\n";
                        cout << endl;
                        cout << "Your choice: "; cin >> sj_choice;
                        system("cls");
                        switch(sj_choice)
                        {
                            case 1:  //Cheatsheet
                                sindicator = false;
                                cin.ignore();
                                mjfile.open("JavaInfo", ios::binary | ios::out | ios::in | ios::app);
                                mjfile.seekg(0);
                                mjfile.clear();
                                if (mjfile.is_open())
                                {
                                    cout << "CHEATSHEET LINKS :" << endl;
                                    while (mjfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.jc_getdata();
                                            sindicator = true;
                                    }
                                    mjfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_j_menu;
                                break;
                            case 2:  //Projects
                                sindicator = false;
                                cin.ignore();
                                mjfile.open("JavaInfo", ios::binary | ios::out | ios::in | ios::app);
                                mjfile.seekg(0);
                                mjfile.clear();
                                if (mjfile.is_open())
                                {
                                    cout << "PROJECT LINKS :" << endl;
                                    while (mjfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.jp_getdata();
                                            sindicator = true;
                                    }
                                    mjfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_j_menu;
                                break;
                            case 3:   //VIDEOS
                                sindicator = false;
                                cin.ignore();
                                mjfile.open("JavaInfo", ios::binary | ios::out | ios::in | ios::app);
                                mjfile.seekg(0);
                                mjfile.clear();
                                if (mjfile.is_open())
                                {
                                    cout << "VIDEO LINKS :" << endl;
                                    while (mjfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.jv_getdata();
                                            sindicator = true;
                                    }
                                    mjfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_j_menu;
                                break;
                            case 4:
                                goto search_main_menu;
                                break;
                            case 5:
                                {
                                    string pass ="";
                                    char ch;
                                    cout << "Enter pass\n";
                                    ch = _getch();
                                    while(ch != 13){//character 13 is enter
                                        pass.push_back(ch);
                                        cout << '*';
                                        ch = _getch();
                                    }
                                    if(pass == "Mitsakos"){
                                        cout << "\nAccess granted :P\n";
                                    
                                    ofstream writenew;
                                    writenew.open("JavaInfo", ios::binary | ios::app);
                                    cin.ignore();
                                    mov.j_setdata();
                                    writenew.write((char *)&mov, sizeof(Coddle));
                                    total++;
                                    writenew.close();
                                    }
                                    else{
                                        cout << "\nAccess aborted...\n";
                                    }
                                }
                                goto search_j_menu;
                                break;
                        }

                    case 3:  //Search for C++
                        system("cls");
                        int sc_choice;
                    search_c_menu:
                        cout << mymnp;
                        cout << endl;
                        cout <<"\t\t\t\t" << "CODDLE.COM/C++" << endl;
                        cout << endl;
                        cout << mymnp;
                        cout << endl;
                        cout << "1. Search for Cheatsheets \n";
                        cout << "2. Search for Projects \n";
                        cout << "3. Search for Videos \n";
                        cout << "4. Back to main menu \n";
                        cout << "5. Add to C++ db (Accessible to Admin only)\n";
                        cout << endl;
                        cout << "Your choice: "; cin >> sc_choice;
                        system("cls");
                        switch(sc_choice)
                        {
                            case 1:  //Cheatsheet
                                sindicator = false;
                                cin.ignore();
                                mcfile.open("C++Info", ios::binary | ios::out | ios::in | ios::app);
                                mcfile.seekg(0);
                                mcfile.clear();
                                if (mcfile.is_open())
                                {
                                    cout << "CHEATSHEET LINKS :" << endl;
                                    while (mcfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.cc_getdata();
                                            sindicator = true;
                                    }
                                    mcfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_c_menu;
                                break;
                            case 2:  //Projects
                                sindicator = false;
                                cin.ignore();
                                mcfile.open("C++Info", ios::binary | ios::out | ios::in | ios::app);
                                mcfile.seekg(0);
                                mcfile.clear();
                                if (mcfile.is_open())
                                {
                                    cout << "PROJECT LINKS :" << endl;
                                    while (mcfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.cp_getdata();
                                            sindicator = true;
                                    }
                                    mcfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_c_menu;
                                break;
                            case 3:   //VIDEOS
                                sindicator = false;
                                cin.ignore();
                                mcfile.open("C++Info", ios::binary | ios::out | ios::in | ios::app);
                                mcfile.seekg(0);
                                mcfile.clear();
                                if (mcfile.is_open())
                                {
                                    cout << "VIDEO LINKS :" << endl;
                                    while (mcfile.read((char *)&mov, sizeof(Coddle)))
                                    {
                                            
                                            mov.cv_getdata();
                                            sindicator = true;
                                    }
                                    mcfile.close();
                                }
                                cout << endl;
                                cout << endl;
                                goto search_c_menu;
                                break;
                            case 4:
                                goto search_main_menu;
                                break;
                            case 5:
                                {
                                    string pass ="";
                                    char ch;
                                    cout << "Enter pass\n";
                                    ch = _getch();
                                    while(ch != 13){//character 13 is enter
                                        pass.push_back(ch);
                                        cout << '*';
                                        ch = _getch();
                                    }
                                    if(pass == "Mitsakos"){
                                        cout << "\nAccess granted :P\n";
                                    
                                    ofstream writenew;
                                    writenew.open("C++Info", ios::binary | ios::app);
                                    cin.ignore();
                                    mov.c_setdata();
                                    writenew.write((char *)&mov, sizeof(Coddle));
                                    total++;
                                    writenew.close();
                                    }
                                    else{
                                        cout << "\nAccess aborted...\n";
                                    }
                                }
                                goto search_c_menu;
                                break;
                        }
                    
                    case 4:
                        goto menu;
                        break;
                }

            case 2:  //CodeSites
                msfile.open("SitesInfo", ios::binary | ios::out | ios::in | ios::app);
                msfile.seekg(0);
                msfile.clear();
                if (msfile.is_open())
                {
                    cout << "Common Coding Sites :" << endl;
                    while (msfile.read((char *)&mov, sizeof(Coddle)))
                    {
                            
                            mov.getdata();
                            sindicator = true;
                    }
                    msfile.close();
                }
                cout << endl;
                break;

            case 3:  //Add to  db
            {
                string pass ="";
                char ch;
                cout << "Enter pass\n";
                ch = _getch();
                while(ch != 13){//character 13 is enter
                    pass.push_back(ch);
                    cout << '*';
                    ch = _getch();
                }
                if(pass == "Mitsakos"){
                    cout << "\nAccess granted :P\n";

                ofstream writenew;
                writenew.open("SitesInfo", ios::binary | ios::app);
                cin.ignore();
                mov.setdata();
                writenew.write((char *)&mov, sizeof(Coddle));
                total++;
                writenew.close();
                }else
                {
                    cout << "\nAccess aborted...\n";
                }
            }
            goto search_main_menu;
            break; 
            
            case 4:  //About
                cout << "Coddle: Your Coding Odyssey Companion \n\n"
                        "Welcome to Coddle, a pioneering website designed in C++ to be your steadfast guide and support in the coding odyssey! \n" 
                        "Whether you're a budding programmer or an experienced coder, Coddle is here to enrich your learning experience and provide valuable resources. \n\n"
                        "Creators: Medha \n\t Aakriti \n\t Lakshya\n" << endl;
                break;

            case 0: //Exit
                exit(0);
                break;
        }
    }
    system("pause");
    return 17;
}