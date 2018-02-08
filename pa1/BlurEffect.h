#pragma once
#ifndef BLUR_EFFECT_H
#define BLUR_EFFECT_H

#include "ImageEffect.h"
#include "PpmDocument.h"
#include "Pixel.h"

class BlurEffect : public ImageEffect, PpmDocument
{

	virtual void processImage(PpmDocument &doc)
    {
       
        for (int i = 0; i < doc.getHeight(); i++)
        {
            for(int j = 0; j < doc.getWidth(); j++)
            {
                Pixel& p = getPixel(i, j);
                Pixel& temp = getPixel(i, j);
                doc.setPixel(i++, j++, p);
                doc.setPixel(i,j,temp);
                
                doc.getPixel(i, j) = p;
                
            }

        }    
        
    }
};

#endif
