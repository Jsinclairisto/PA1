#pragma once
#ifndef NEGATE_BLUE_IMAGE_EFFECT_H
#define NEGATE_BLUE_IMAGE_EFFECT_H

#include "ImageEffect.h"

//this image effect will remove all red from a picture
class NegateBlueImageEffect : public ImageEffect
{
    virtual void processImage(PpmDocument &doc)
    {
        for (int i = 0; i < doc.getHeight(); i++)
        {
            for (int j = 0; j < doc.getWidth(); j++)
            {
                //PA1 TODO: implement!
				Pixel& p = doc.getPixel(i, j);
				p.setBlue(255 - p.getBlue());
            }
        }
    }

};

#endif // !REMOVE_RED_IMAGE_EFFECT 