#ifndef _CAMERA_H
#define _CAMERA_H

#include "Vect.h"
class Camera{
	
	Vect campos, camdir, camright, camdown;
	
	public:
		
		Camera();
		
		Camera(Vect, Vect, Vect, Vect);
		
		//methods
		
		Vect getCameraPosition() {
			return campos;
		}
		
		Vect getCameraRight() {
			return camright;
		}
		
		Vect getCameraDown() {
			return camdown;
		}
		
		Vect getCameraDirection(){
			return camdir;
		}
		
};

Camera::Camera(){
	campos = Vect(0,0,0);
	camdir = Vect(0,0,1);
	camright = Vect(0,0,0);
	camdown = Vect(0,0,0);
}

Camera::Camera(Vect pos, Vect dir, Vect r, Vect d){
	campos = pos;
	camdir = dir;
	camright = r;
	camdown = d;
}

#endif

