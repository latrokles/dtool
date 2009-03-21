/*
 *  shParticle.h
 *  openFrameworks
 *
 *  Created by Latrokles on 3/21/09.
 *  Copyright 2009 Samurai Hippo. All rights reserved.
 *
 */
 
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

