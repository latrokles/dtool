#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    //Slowing down the animation by enabling vertical sync, otherwise the mac
    //will run it pretty fast
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    ofSetFullscreen(true);
    ofBackground(0, 0, 0);
}


//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch( key )
    {
        case ' ':
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::resized(int w, int h){

}
