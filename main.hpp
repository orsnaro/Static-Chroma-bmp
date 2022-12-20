#pragma once 
using namespace std;
#include <bits/stdc++.h>
#include "chroma.hpp"
#include "app_enums.hpp"
#include  "inout_bmp.hpp"
#include  "simple_img_manip.hpp"

Signals_app op_menu(){
   cout << "__Operations Menu__:\n\n 1)simple_threshold_binarize \n 2)convert to Gray scale\n "\
         << "3)Resize"  ;
    cout << "\n choose your operations please : \n > "  ;
    int op ;
    cin >> op;
    if ( op == 1)
    cout << "SOON";
        // thresh_bin();
    else if ( op == 2)
        cout << "SOON";
        // cvt_weihtd_grayscale();
    else if (op == 3 )
        resize(); 
    else{
        cout << "INVALID OPTION ..RETRY \n\n";
        op_menu();
    }
    cout << "SAVING IMAGE...\n\n";
    //TODO: make use choose save dir
    Signals_app save_state =save_image();
    if ( int(save_state) != 0){
        cout << "SAVE ERROR TERMINATING!\n\n";
        exit(EXIT_FAILURE);
    }
}

Signals_app  app_start(void){
    //TODO : move all this to menues class
    system("clear");
    cout << "\n\n___________Welcome To BMP APP (prealpha v0.5)_____________\n\n";

    Signals_app app_state = Init_img::load_img();
    if(app_state == Signals_app::APP_ERROR){
        cerr << "FETAL ERROR TERMINATING";
        exit(EXIT_FAILURE);
    }

    op_menu();
    
    cout << " ENTER: \n\n '1' to quit \n'0' to restart\n\n >  ";
    bool is_done;
    cin >> is_done;

    

    is_done ?  app_state = Signals_app::APP_OK : app_state = Signals_app::DONT_QUIT;
    return app_state;
}

// TODO : app_start() either in cli or gui 


