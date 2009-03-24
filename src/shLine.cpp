/*
 *  shLine.cpp
 *  openFrameworks
 *
 *  Created by latrokles on 3/21/09.
 *  Copyright 2009 Samurai Hippo. All rights reserved.
 *
 */
#include "shLine.h"
shLine::shLine( )
{
}

void shLine::update( )
{
    if( linePoints.size( ) > 0 )
    {
        for( int i = 0; i < linePoints.size( ); i++ )
        {
            linePoints[ i ].update( );
        }
    }
}

void shLine::draw( )
{
    if( linePoints.size( ) > 0 )
    {
        ofNoFill( );
        ofBeginShape( );
        for( int i = 0; i < linePoints.size( ); i++ )
        {
            ofVertex(linePoints[ i ].getPositionInX( ), linePoints[ i ].getPositionInY( ) );
        }
        ofEndShape( false );
    }
}

void shLine::clear( )
{
    linePoints.clear( );
}

void shLine::addPoint( int x, int y )
{
    shParticle newPoint;
    newPoint.setPosition( x, y );
    linePoints.push_back( newPoint );
}

void shLine::setColor( int r, int g, int b )
{
    red = r;
    green = g;
    blue = b;
}

void shLine::setTarget( int x, int y )
{
    if( linePoints.size( ) > 0 )
    {
        for( int i = 0; i < linePoints.size( ); i++ )
        {
            linePoints[ i ].setTarget( x, y );
        }
    }
}

int shLine::getLength( )
{
    return linePoints.size( );
}
