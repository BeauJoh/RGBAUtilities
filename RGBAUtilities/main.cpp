//
//  main.cpp
//  RGBAUtilities
//
//  Created by Beau Johnston on 13/07/11.
//  Copyright 2011 University Of New England. All rights reserved.
//

#include <iostream>
#include "RGBAUtilities.h"

//int main (int argc, const char * argv[])
//{
//
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}


int main(int argc, char **argv)
{
//    if (argc != 3)
//        abort_("Usage: program_name <file_in> <file_out>");
//    
    
    read_png_file((char*)"rgba.png");
    uint8* image = getImage();
    //process_file();
    setImage(image);
    write_png_file((char*)"out.png");
    
    return 0;
}