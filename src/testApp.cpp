#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    //Slowing down the animation by enabling vertical sync, otherwise the mac
    //will run it pretty fast
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    //ofSetFullscreen(true);
    ofSetWindowShape(600, 600);
    ofBackground(0, 0, 0);
    
    linesAreAlive = false;
}


//--------------------------------------------------------------
void testApp::update(){
    if( linesAreAlive == true )
    {
        for( int i=0; i < lines.size( ); i++ )
        {
            lines[ i ].update( );
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){

    if( linesAreAlive == true )
    {
        ofDrawBitmapString("Target is Set.\nTarget: " + ofToString(currentTargetX, 0) + ", " + ofToString(currentTargetY, 0), 20, 20);
    }
    else
    {
        ofDrawBitmapString("Target is not Set.", 20, 20 );
    }
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
            lines.clear();
            break;
        case 'l':
            linesAreAlive = !linesAreAlive;
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
    if( linesAreAlive != true)
    {
        currentLine.addPoint( x, y );
    }
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    if( linesAreAlive == true )
    {
        lines[ lines.size( ) - 1 ].setTarget( x, y );
    }
    currentTargetX = x;
    currentTargetY = y;
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    if( linesAreAlive != true )
    {
        lines.push_back( currentLine );
    }
    currentLine.clear( );
}

//--------------------------------------------------------------
void testApp::resized(int w, int h){

}
