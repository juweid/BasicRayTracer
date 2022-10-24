#pragma once

#include <memory>

#include <LeptonMath/Vector.h>

namespace brt {

	class Material;

	class HitResult {
	private:
		lm::Vector3f position;
		lm::Vector3f normal;
		
		std::shared_ptr<Material> material;

	public:
		HitResult() = default;
		explicit HitResult(lm::Vector3f position, lm::Vector3f normal, std::shared_ptr<Material> material);

		const lm::Vector3f& getPosition() const;
		const lm::Vector3f& getNormal() const;
		std::shared_ptr<Material>& getMaterial();
	};


}
