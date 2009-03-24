/*
 *  shLine.h
 *  openFrameworks
 *
 *  Created by latrokles on 3/21/09.
 *  Copyright 2009 Samurai Hippo. All rights reserved.
 *
 */
#ifndef SH_LINE
#include "shParticle.h"
#include "ofMain.h"

class shLine
{
    public:
        shLine( );
        void update( );
        void draw( );
        void clear( );
        
        void addPoint( int x, int y );
        void setColor( int r, int g, int b );
        void setTarget( int x, int y );
        
        int getLength( );
        
    private:
        vector <shParticle> linePoints;
        int                 lineLength;
        int                 red;
        int                 green;
        int                 blue;
};
#endif