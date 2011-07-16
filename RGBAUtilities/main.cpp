//
//  main.cpp
//  RGBAUtilities
//
//  Created by Beau Johnston on 13/07/11.
//  Copyright 2011 University Of New England. All rights reserved.
//

#include <iostream>
#include "RGBAUtilities.h"


int main(int argc, char **argv)
{  
    read_png_file((char*)"rgba.png");
    uint8* image = getImage();
    
    //just an example on how to access individual pixels/components of pixels
    //process_file();
    
    setImage(image);
    write_png_file((char*)"out.png");
    
    return 0;
}