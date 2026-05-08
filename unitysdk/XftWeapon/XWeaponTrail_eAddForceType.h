#pragma once
#include "unitysdk/unitysdk.h"

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrail_eAddForceType_TypeDefinitionIndex = 37680;

	enum class XWeaponTrail_eAddForceType : ::System::Int32
	{
		None = 0,
		InverseOfMeshDis = 1,
		InverseOfMeshDisSqr = 2,
		StraightForce = 3,
	};
}
