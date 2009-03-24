/*
 *  shParticle.h
 *  openFrameworks
 *
 *  Created by latrokles on 3/21/09.
 *  Copyright 2009 Samurai Hippo. All rights reserved.
 *
 */
 #ifndef SH_PARTICLE
 #include "ofMain.h"
 
 class shParticle
 {
    public:
        shParticle( );
        
        void setPosition( int x, int y );
        void setTarget( int x, int y );
        void setParticleSpeed( float newSpeed );
        void update( );
        void draw( );
        
        int  getPositionInX( );
        int  getPositionInY( );
    
    private:
        ofPoint     particlePosition;
        ofPoint     particleVelocity;
        ofPoint     particleTarget;
        int         particleSize;
        float       particleSpeed;
        float       particleDrag;
        bool        targetMode;
 };

#endif