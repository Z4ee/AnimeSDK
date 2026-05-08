#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDMassUseType_TypeDefinitionIndex = 24840;

	enum class PBDMassUseType : ::System::Int32
	{
		UseMass = 0,
		NoMass = 1,
		UseInverseMass = 2,
	};
}
