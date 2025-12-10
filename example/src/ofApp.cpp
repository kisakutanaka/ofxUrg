#include "ofApp.h"

void ofApp::Instance::setup(string osc_prefix)
{
    device = make_shared<ofxUrg::Processor>();
    auto& urg = *device;
    
    urg.setMode(ofxUrg::DISTANCE_INTENSITY);
    urg.setupEthernet(this->ip);

#ifdef RZM_DEV
    urg.scale =1.0;
#endif
    
    ofLogNotice("Product", urg.productType());
    ofLogNotice("Serial", urg.serialId());
    ofLogNotice("Status", urg.status());
    ofLogNotice("State", urg.state());
    ofLogNotice("Firmware version", urg.firmwareVersion());
    
    urg.start();
}

void ofApp::Instance::update()
{
    device->update();
}



//--------------------------------------------------------------
void ofApp::setup(){
    for (int i=0; i<instances.size(); ++i) {
        auto& ins = instances[i];
        ins.setup("/lidar" + ofToString(i));
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
