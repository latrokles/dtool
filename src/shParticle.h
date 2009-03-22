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
        shParticle();
        
        void setPosition(float x, float y);
        void update();
        void draw();
    
    private:
        ofPoint     particlePosition;
        ofPoint     particleVelocity;
        int         particleSize;
 };

#endif