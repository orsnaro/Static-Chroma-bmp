#pragma once 
#include <bits/stdc++.h>
//#include <filessytem> //in stdc++.h



           // --------------TASKS TODO SECTION -----------------
//TODO :load image  , do checks funcs , resize , cvrt to gray scale
//TODO : init linikng to gui here ( my 1st cpp gui ever <3 )





          // --------------- ENUMS SECTION ----------------
typedef short int state_t;
enum class Signals_BMPstruct : state_t {
    //all valid states = 0 
    OK_FILE_TYPE, 
    VALID_OFFSET  = 0, 
    VALID_DIB_SZ = 0, 
    OK_IMAGES_SIZE = 0,
    VALID_COMPRESSION = 0, 
    VALID_BIT_DEPTH = 0 ,
    VALID_PADDING = 0, 

    //all invalid states != 0 and unique 
    INVALID_FILE_TYPE,
    INVALID_OFFSET,
    INVALID_DIB_SZ,
    BAD_IMAGES_SIZE,
    INVALID_COMPRESSION,
    INVALID_BIT_DEPTH,
    INVALID_PADDING //if read wrong or paddings  not 0x00 valued
};

enum class Signals_app : state_t {
    //all valid states = 0

    // all invalid states != 0 and unique

};

           //--------------  PARENT CLASSES SECTION ----------------

class Load_img { 
    public:
        
    

    private:



};


          //----------------- GLOBAL FUNCTIONS SECTION -------------


