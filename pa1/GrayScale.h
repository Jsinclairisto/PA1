#pragma once
#ifndef GRAY_SCALE_H
#define GRAY_SCALE_H

#include "ImageEffect.h"

class GrayScale : public ImageEffect
{
	virtual void processImage(PpmDocument &doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
        {
            for (int j = 0; j < doc.getWidth(); j++)
            {
            	Pixel p = doc.getPixel(i, j);
            	
            	int gray;
            	gray = (p.getRed() + p.getGreen() + p.getBlue()) / 3;
            	
            	p.setRed(gray);
            	p.setGreen(gray);
            	p.setBlue(gray);

            	doc.getPixel(i, j) = p;
            }
        }
	}

};

#endif 