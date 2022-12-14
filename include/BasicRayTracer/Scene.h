#pragma once

#include <memory>
#include <vector>

#include "Primitive.h"
#include "Random.h"

namespace brt {

	class Scene {
	private:
		std::vector<std::unique_ptr<Primitive>> objects;

	public:

		void addObject(std::unique_ptr<Primitive> object);
		lm::Vector3f traceScene(const Ray& ray, float tMin, float tMax, int depth);

	};

}
