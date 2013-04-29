#ifndef CKFD_PARTICLES
#define CKFD_PARTICLES

#include <glm/glm.hpp>
#include "Simulation.h"

class Particles: public Simulation
{
		float frand(float min, float max);
	public:
		std::vector<cl::Memory> clVBOs;
		cl::Buffer clVel;
		cl::Buffer clPosGen;
		cl::Buffer clVelGen;
		
		int posVBO;
		int colVBO;
		
		int num;
		
		Particles();
		
		void initData();
		void step();
		void render();
};

#endif//CKFD_PARTICLES