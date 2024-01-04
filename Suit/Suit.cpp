// Suit.cpp : This file contains the 'main' function. Program execution begins and ends there.

// library
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "color.hpp"

// using namespace
using namespace std;
using namespace dye;
using namespace hue;

// variable global
bool gameOver = false;
int p1_score = 0, p2_score = 0;

struct accounts {
    string username;
    string password;
} acc,acc2p;

void logoCredits() {
    cout << "SUIT version 1.0, Kelompok TPT 4.0, 2KA13." << endl;
    cout << "This is a group project for the Structured Programming." << endl;
    cout << "Have fun for this game and don't cheating!." << endl;
    cout << endl;
    cout << "  ______   __    __  ______  ________ " << endl;
    cout << " /      \\ |  \\  |  \\|      \\|        \\" << endl;
    cout << "|  $$$$$$\\| $$  | $$ \\$$$$$$ \\$$$$$$$$" << endl;
    cout << "| $$___\\$$| $$  | $$  | $$     | $$   " << endl;
    cout << " \\$$    \\ | $$  | $$  | $$     | $$   " << endl;
    cout << " _\\$$$$$$\\| $$  | $$  | $$     | $$   " << endl;
    cout << "|  \\__| $$| $$__/ $$ _| $$_    | $$   " << endl;
    cout << " \\$$    $$ \\$$    $$|   $$ \\   | $$   " << endl;
    cout << "  \\$$$$$$   \\$$$$$$  \\$$$$$$    \\$$   " << endl;
    cout << endl;
    cout << endl;
}

void login() {
    char ch;

    cout << "Welcome To Suit!" << endl;
    cout << "-----------------LOGIN-----------------" << endl;
    while (true)
    {
        cout << "Username : ";
        cin >> acc.username;
        cout << "Password : ";
        while ((ch = _getch()) != 13) { // 13 adalah ASCII untuk tombol Enter
            if (ch == 8) { // 8 adalah ASCII untuk tombol Backspace
                if (!acc.password.empty()) {
                    cout << "\b \b"; // Menghapus karakter terakhir dari layar
                    acc.password.pop_back(); // Menghapus karakter terakhir dari string password
                }
            }
            else {
                cout << '*'; // Menampilkan karakter "*" sebagai gantinya
                acc.password += ch; // Menambahkan karakter ke string password
            }
        }
        cout << endl;

        if (acc.username != "" && acc.password == "suit123") {
            system("CLS");
            logoCredits();
            cout << "Hi, [" << light_red(acc.username) << "]" << endl;
            cout << "Have a nice day!" << endl;
            cout << "-------------------------------" << endl;
            break;
        }
        else {
            cout << on_light_red("Username atau Password Salah!") << endl;
            acc.password.clear();
            cout << endl;
        }

    }
}

void login2p() {
    char ch;

    cout << "Welcome To Suit!" << endl;
    cout << "-----------------LOGIN 2P-----------------" << endl;
    while (true)
    {
        cout << "Username : ";
        cin >> acc2p.username;
        cout << "Password : ";
        while ((ch = _getch()) != 13) { // 13 adalah ASCII untuk tombol Enter
            if (ch == 8) { // 8 adalah ASCII untuk tombol Backspace
                if (!acc2p.password.empty()) {
                    cout << "\b \b"; // Menghapus karakter terakhir dari layar
                    acc2p.password.pop_back(); // Menghapus karakter terakhir dari string password
                }
            }
            else {
                cout << '*'; // Menampilkan karakter "*" sebagai gantinya
                acc2p.password += ch; // Menambahkan karakter ke string password
            }
        }
        cout << endl;

        if (acc2p.username != "" && acc2p.password == "suit123") {
            cout << endl;
            cout << "Hi, [" << light_red(acc.username) << "] And [" << light_blue(acc2p.username) << "]" << endl;
            cout << "Have a nice day!" << endl;
            cout << "-------------------------------" << endl;
            break;
        }
        else {
            cout << on_light_red("Username atau Password Salah!") << endl;
            acc2p.password.clear();
            cout << endl;
        }

    }
}

void gunting() {
    cout << "        ][[]_          " << endl;
    cout << "        xncut|    ]__-[ " << endl;
    cout << "        fxvvx(   >1ruuj" << endl;
    cout << "        )rczvx   tjvcx|" << endl;
    cout << "         rvXcn   }xcvxr" << endl;
    cout << "         fnzvr1  juzuft" << endl;
    cout << "-~<<[-__?1nXvrt 1xvvrf " << endl;
    cout << "11{{/)))1fvcur)[/xvnr  " << endl;
    cout << "jrxnJjxxfnuuxj/|frxj(  " << endl;
    cout << "tnvc0nvvnurj/--(frjj   " << endl;
    cout << "jrzUQznvvujtfjff/(1)   " << endl;
    cout << "jzC0QQQLUurxnvccvnr/)  " << endl;
    cout << "jzJLLQLCUurvXUUccvnf(  " << endl;
    cout << "juXYXXUJvfjnzJCCYvxf   " << endl;
    cout << "|rnnrrxrft/fjrxxrrj    " << endl;
    cout << "tfrjjft///fffffjrf     " << endl;
    cout << " jjjft///tffjrjjr1     " << endl;
    cout << " |fjfttttttfjjjrj      " << endl;
}

void kertas() {
    cout << "               [{{                " << endl;
    cout << "       txf[   (xcx1     <<+       " << endl;
    cout << "_<>    rvuj   xvcuu   _(xvj       " << endl;
    cout << "jux(   uccn{  jczc|   )ncn/       " << endl;
    cout << "fucn|  xczvf  xvzc   [jcvj        " << endl;
    cout << "xcvj} fccv/ }xuvu  ]/rvxt        " << endl;
    cout << "rxnf|]fuvxf-(jxnx  )|xx(         " << endl;
    cout << "frj|(1jxrt[)trrt]{(frj          " << endl;
    cout << "(jrf//jrrj/ttf/|1)|tj/          " << endl;
    cout << "jfjjrrrrrjft/||())(/      _++- " << endl;
    cout << "fjxxxnunxrjftttt/|1[]???[1tjnxt" << endl;
    cout << "tfrxxrrjjtttt///||||//fxuuuxf} " << endl;
    cout << "/fjffft//||(|((|/fxxuvvxt|     " << endl;
    cout << ")fft/|(()())11)|tjxuur(        " << endl;
    cout << "rft|())11111)|/tjrr|          " << endl;
    cout << "(jf/()1))))|/tfjrt            " << endl;
    cout << "_jft|())1(|tjxxxf             " << endl;
    cout << "fftt//|//tfjjrxf             " << endl;
}

void batu() {
    cout << "        <>><  +<><~+  >>>      " << endl;
    cout << " +~<>~ ?_+~+? ]?--?[}_~~_-i    " << endl;
    cout << "[]?-_?}))1111/())1)((}[[}}}    " << endl;
    cout << "|fjjrfxurrxrxCrfjjjxr||//||    " << endl;
    cout << "jxucccYYvczcXpvvvvuzcjjjjt(    " << endl;
    cout << "frxuvvUQvucccOvuzcnn+___----]+ " << endl;
    cout << "tnuzJJZOUuvvCLUuuv|tftffftt/|(1" << endl;
    cout << "tnXJQ000QQ0QQLL0CQJjxnuvvvnxrjt" << endl;
    cout << "fnXCLQ0Q00000LQ000000CCcrxxrrj)" << endl;
    cout << "trzUCCCCL0Q0LCL0000QQC0ZUcnjf( " << endl;
    cout << "(ruzXXcczXYzcczYLLUUYJCLCUvx1  " << endl;
    cout << " jxnuxxrjjjjjfjrxvczzzccvut    " << endl;
    cout << " (rrrrjfttt/||/tjxczcvnnn/     " << endl;
    cout << "  /rjjftt///|///fruvcunnt      " << endl;
    cout << "  txjjfttt//t//tfjxnuvurj      " << endl;
    cout << "   f)[]]]?]]?]]][[[}1|rx       " << endl;
}


void checkWinner(int p1_score, int p2_score, int rounds) {
    int i, j;
    if (p1_score == rounds || p2_score == rounds) {
        cout << endl;
        if (p1_score > p2_score) {
            for (i = 1; i < acc.username.length() + 8; i++) 
                cout << "_";
            
            cout << endl;
            cout << "|" << light_blue(acc.username) << " WIN!|" << endl;
            cout << "|";
            for (j = 1; j < acc.username.length() + 6; j++) 
                cout << "_";
            
            cout << "|" << endl;
            cout << endl;
        }
        else {
            for (i = 1; i < acc2p.username.length() + 8; i++) 
                cout << "_";
            
            cout << endl;
            cout << "|" << light_blue(acc2p.username) << " WIN!|" << endl;
            cout << "|";
            for (j = 1; j < acc2p.username.length() + 6; j++) 
                cout << "_";
            
            cout << "|" << endl;
            cout << endl;
        }
        cout << "With Score " << p1_score << "-" << p2_score << " in " << rounds << " Rounds" << endl;
        gameOver = true;
    }
    
}

void resetGame() {
    gameOver = false;
    acc2p.username.clear();
    acc2p.password.clear();
    p1_score = 0;
    p2_score = 0;
}

void suit(int p1_choice, int p2_choice, int rounds) {
    if (acc2p.username == "") {
        acc2p.username = "Computer";
    }

    switch (p1_choice) {
    case 1: // Gunting
        cout << "================================" << endl;
        gunting();
        cout << "[" << light_red(acc.username) << "]" << bright_white(": Gunting") << endl;
        cout << endl;
        if (p2_choice == 1 || p2_choice == 8) {
            gunting();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Gunting") << endl;
            cout << endl;
            cout << "| DRAW! |" << endl;
        }
        else if (p2_choice == 2 || p2_choice == 9) {
            batu();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Batu") << endl;
            cout << endl;
            cout << "| " << light_red(acc.username) << " LOSE! |" << endl;
            cout << "| " << light_blue(acc2p.username) << " WIN!  |" << endl;
            p2_score++;
        }
        else if (p2_choice == 3 || p2_choice == 0) {
            kertas();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Kertas") << endl;
            cout << endl;
            cout << "| " << light_red(acc.username) << " WIN!  |" << endl;
            cout << "| " << light_blue(acc2p.username) << " LOSE! |" << endl;
            p1_score++;
        }
        else {
            cout << on_light_red("Invalid input. Please try again!") << endl;
        }
        cout << endl;
        cout << "[" << light_red(acc.username) << "] Score: " << p1_score << endl;
        cout << "[" << light_blue(acc2p.username) << "] Score: " << p2_score << endl;
        cout << "----------------------------------" << endl;

        // checkWinner
        checkWinner(p1_score, p2_score, rounds);
        break;

    case 2: // Batu
        cout << "================================" << endl;
        batu();
        cout << "[" << light_red(acc.username) << "]" << bright_white(": Batu") << endl;
        cout << endl;
        if (p2_choice == 1 || p2_choice == 8) {
            gunting();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Gunting") << endl;
            cout << endl;
            cout << "| " << light_red(acc.username) << " WIN!  |" << endl;
            cout << "| " << light_blue(acc2p.username) << " LOSE! |" << endl;
            p1_score++;
        } else if (p2_choice == 2 || p2_choice == 9) {
            batu();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Batu") << endl;
            cout << endl;
            cout << "| DRAW! |" << endl;
        } else if (p2_choice == 3 || p2_choice == 0) {
            kertas();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Kertas") << endl;
            cout << endl;
            cout << "| " << light_red(acc.username) << " LOSE! |" << endl;
            cout << "| " << light_blue(acc2p.username) << " WIN!  |" << endl;
            p2_score++;
        } else {
            cout << on_light_red("Invalid input. Please try again!") << endl;
        }
        cout << endl;
        cout << "[" << light_red(acc.username) << "] Score: " << p1_score << endl;
        cout << "[" << light_blue(acc2p.username) << "] Score: " << p2_score << endl;
        cout << "----------------------------------" << endl;

        // checkWinner
        checkWinner(p1_score, p2_score, rounds);
        break;
    case 3: // Kertas
        cout << "================================" << endl;
        kertas();
        cout << "[" << light_red(acc.username) << "]" << bright_white(": Kertas") << endl;
        cout << endl;
        if (p2_choice == 1 || p2_choice == 8) {
            gunting();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Gunting") << endl;
            cout << endl;
            cout << "| " << light_red(acc.username) << " LOSE! |" << endl;
            cout << "| " << light_blue(acc2p.username) << " WIN!  |" << endl;
            p2_score++;
        } else if (p2_choice == 2 || p2_choice == 9) {
            batu();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Batu") << endl;
            cout << endl;
            cout << "| " << light_red(acc.username) << " WIN!  |" << endl;
            cout << "| " << light_blue(acc2p.username) << " LOSE! |" << endl;
            p1_score++;
        } else if (p2_choice == 3 || p2_choice == 0) {
            kertas();
            cout << "[" << light_blue(acc2p.username) << "]" << bright_white(": Kertas") << endl;
            cout << endl;
            cout << "| DRAW! |" << endl;
        } else {
            cout << on_light_red("Invalid input. Please try again!") << endl;
        }
        cout << endl;
        cout << "[" << light_red(acc.username) << "] Score: " << p1_score << endl;
        cout << "[" << light_blue(acc2p.username) << "] Score: " << p2_score << endl;
        cout << "----------------------------------" << endl;

        // checkWinner
        checkWinner(p1_score, p2_score, rounds);
        break;
    default:
        cout << on_light_red("Invalid input. Please try again!") << endl;
        break;
    }
}


void singlePlayer() {
    int p1_choice,p2_choice;
    int rounds;
    string ready;

    system("CLS");
    logoCredits();

    cout << "Are You Ready? [y/n] ";
    cin >> ready;
    if (ready == "y" || ready == "Y") {
        cout << "How Many Rounds? ";
        cin >> rounds;

        while (!gameOver) {
            cout << endl;
            cout << " ___________________________" << endl;
            cout << "| 1. Gunting                |" << endl;
            cout << "| 2. Batu                   |" << endl;
            cout << "| 3. Kertas                 |" << endl;
            cout << "|___________________________|" << endl;
            cout << "Your Choice [1-3] : ";
            cin >> p1_choice;
            p2_choice = rand() % 3 + 1; // random 1-3;
            suit(p1_choice, p2_choice, rounds);
        }
    } 
    resetGame();
}

void multiplayer() {
    int p1_choice, p2_choice;
    int rounds;
    string ready,p1,p2;
    char ch;

    system("CLS");
    logoCredits();

    login2p();
    cout << "Are You Ready? [y/n] ";
    cin >> ready;
    if (ready == "y" || ready == "Y") {
        cout << "How Many Rounds? ";
        cin >> rounds;

        while (!gameOver) {
            cout << endl;
            cout << " ___________________________" << endl;
            cout << "| Player 1                  |" << endl;
            cout << "| 1. Gunting                |" << endl;
            cout << "| 2. Batu                   |" << endl;
            cout << "| 3. Kertas                 |" << endl;
            cout << "|___________________________|" << endl;
            cout << "| Player 2                  |" << endl;
            cout << "| 8. Gunting                |" << endl;
            cout << "| 9. Batu                   |" << endl;
            cout << "| 0. Kertas                 |" << endl;
            cout << "|___________________________|" << endl;
            cout << "[" << light_red(acc.username) << "] Choice [1-3] : ";
     
            while ((ch = _getch()) != 13) { // 13 adalah ASCII untuk tombol Enter
                if (ch == 8) { // 8 adalah ASCII untuk tombol Backspace
                    if (!p1.empty()) {
                        cout << "\b \b"; // Menghapus karakter terakhir dari layar
                        p1.pop_back(); // Menghapus karakter terakhir dari string
                    }
                }
                else {
                    cout << '*'; // Menampilkan karakter "*" sebagai gantinya
                    p1 += ch; // Menambahkan karakter ke string
                }
            }
            cout << endl;
            cout << "[" << light_blue(acc2p.username) << "] Choice [8-0] : ";
            while ((ch = _getch()) != 13) { // 13 adalah ASCII untuk tombol Enter
                if (ch == 8) { // 8 adalah ASCII untuk tombol Backspace
                    if (!p2.empty()) {
                        cout << "\b \b"; // Menghapus karakter terakhir dari layar
                        p2.pop_back(); // Menghapus karakter terakhir dari string
                    }
                }
                else {
                    cout << '*'; // Menampilkan karakter "*" sebagai gantinya
                    p2 += ch; // Menambahkan karakter ke string password
                }
            }
            cout << endl;
            p1_choice = stoi(p1);
            p2_choice = stoi(p2);
            suit(p1_choice, p2_choice, rounds);
            p1.clear();
            p2.clear();
        }
    }
    resetGame();
}

void about() {
    system("CLS");
    logoCredits();
    cout << bright_white("ABOUT") << endl;
    cout << "Suit adalah permainan yang berawal dari tradisional yang dikembangkan menjadi permainan digital." << endl;
    cout << "Pada zaman sekarang khususnya di kota-kota besar banyak anak-anak yang mulai meninggal permainan tradisonal salah satunya Suit." << endl;
    cout << "Suit biasanya dimainkan oleh 2 orang dan menggunakan tangan atau jari untuk memainkannya,"<<endl;
    cout << "jari jempol, telunjuk, dan kelingking atau bisa juga gunting, batu, dan kertas. Suit bisa dimainkan beberapa ronde (sesuai kesepakatan pemain)" << endl;
    cout << "Pada segi peraturan, jika gunting vs batu, batu pemenangnya. Batu vs kertas, kertas pemenangnya. Kertas vs gunting, gunting pemenangnya." << endl;
}

int main()
{   
    int pilih;
    string quit;
    bool menu = true;

    logoCredits();
    cout << "Press any key to continue...";
    (void)_getch();
    cout << endl;
    cout << endl;

    login();

    while (menu) {
        cout << endl;
        cout << "============ MENU SUIT ============" << endl;
        cout << "1. Single Player" << endl;
        cout << "2. MultiPlayer" << endl;
        cout << "3. About" << endl;
        cout << "4. Exit Game" << endl;
        cout << "===================================" << endl;
        cout << "Your Choice [1-4] : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            singlePlayer();
            break;
        case 2:
            multiplayer();
            break;
        case 3:
            about();
            break;
        case 4:
            cout << "Are you sure to quit the suit? [y/n] ";
            cin >> quit;
            if (quit == "y" || quit == "Y") {
                menu = false;
            } else {
                system("CLS");
                logoCredits();
            }
            break;
        default:
            cout << on_light_red("Invalid input. Please try again!") << endl;
            break;
        }
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
