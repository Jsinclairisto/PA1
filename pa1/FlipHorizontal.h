#pragma once
#ifndef FLIP_HORIZONTAL_H
#define FLIP_HORIZONTAL_H

#include "ImageEffect.h"
#include "PpmDocument.h"
#include "Pixel.h"

class FlipHorizontal : public ImageEffect, PpmDocument
{

	virtual void processImage(PpmDocument &doc)
    {
       
        
        for(int j = 0; j < doc.getWidth()/2; j++)
        {
            Pixel& p = getPixel(i, j);
            Pixel& temp = getPixel(i, doc.getWidth() - j);
            doc.setPixel(i, doc.getWidth() - j , p);
            doc.setPixel(i,j,temp);

        }   
        
    }
};

#endif