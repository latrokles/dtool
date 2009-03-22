/*
 *  shParticle.cpp
 *  openFrameworks
 *
 *  Created by latrokles on 3/21/09.
 *  Copyright 2009 Samurai Hippo. All rights reserved.
 *
 */

#include "shParticle.h"

shParticle::shParticle( )
{
    particleSize = 10;
}

void shParticle::setPosition( float x, float y )
{
    particlePosition.x = x;
    particlePosition.y = y;
}

void shParticle::update( )
{
    particlePosition.y++;
}

void shParticle::draw( )
{
    ofSetColor(0, 0, 255);
    ofCircle(particlePosition.x, particlePosition.y, particleSize);
}