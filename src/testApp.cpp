#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    //Slowing down the animation by enabling vertical sync, otherwise the mac
    //will run it pretty fast
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    ofSetFullscreen(true);
    ofBackground(0, 0, 0);
    
    life = false;
}


//--------------------------------------------------------------
void testApp::update(){
    if( life == true )
    {
        currentLine.update( );
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    currentLine.draw( );
    if( lines.size( ) > 0 )
    {
        for( int i = 0; i < lines.size( ); i++ )
        {
            lines[ i ].draw( );
        }
    }
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch( key )
    {
        case ' ':
            break;
        case 'l':
            life = true;
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
    currentLine.addPoint( x, y );
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    if( life == true )
    {
        currentLine.setTarget(x, y);
    }
    else
    {
        currentLine.clear( );
    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    lines.push_back( currentLine );
}

//--------------------------------------------------------------
void testApp::resized(int w, int h){

}
