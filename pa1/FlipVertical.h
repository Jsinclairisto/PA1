#pragma once
#ifndef FLIP_VERTICAL_H
#define FLIP_VERTICAL_H

#include "ImageEffect.h"
#include "PpmDocument.h"
#include "Pixel.h"

class FlipVertical : public ImageEffect, PpmDocument
{

	virtual void processImage(PpmDocument &doc)
    {
       
        for (int i = 0; i < doc.getHeight()/2; i++)
        {
                
                Pixel& p = doc.getPixel(i, j);
                Pixel& temp =doc.getPixel(doc.getHeight() - i, j);
                doc.setPixel(doc.getHeight() - i,j, p);
                doc.setPixel(i,j,temp);


        }    
        
    }
};


#endif
