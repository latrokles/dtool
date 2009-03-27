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
    particleSize    = 10;
    particleDrag    = 0.98;
    particleSpeed   = 0.68;
    targetMode      = false;
}

void shParticle::setPosition( int x, int y )
{
    particlePosition.x = x;
    particlePosition.y = y;
}

void shParticle::setTarget( int x, int y)
{
    particleTarget.x = x;
    particleTarget.y = y;
    
    targetMode = true;
}

void shParticle::update( )
{
    ofPoint difference;     //target pos - particle pos
    
    particleVelocity.x *= particleDrag;
    particleVelocity.y *= particleDrag;
    
    if( targetMode == true )
    {
        difference.x = particleTarget.x - particlePosition.x;
        difference.y = particleTarget.y - particlePosition.y;
        
        float distanceToTarget = sqrt( ( difference.x * difference.x ) + ( difference.y * difference.y ) );
        
        if( distanceToTarget != 0 )
        {
            difference.x /= distanceToTarget;
            difference.y /= distanceToTarget;
            
            particleVelocity.x += difference.x * particleSpeed;
            particleVelocity.y += difference.y * particleSpeed;
        }
    }
    
    particlePosition.x += particleVelocity.x;
    particlePosition.y += particleVelocity.y;
}

void shParticle::draw( )
{
    ofSetColor(0, 0, 255);
    ofCircle(particlePosition.x, particlePosition.y, particleSize);
}

int shParticle::getPositionInX( )
{
    return particlePosition.x;
}

int shParticle::getPositionInY( )
{
    return particlePosition.y;
}