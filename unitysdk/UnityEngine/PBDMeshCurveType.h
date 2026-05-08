#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDMeshCurveType_TypeDefinitionIndex = 24839;

	enum class PBDMeshCurveType : ::System::Int32
	{
		Bezier = 0,
		CatmullRom = 1,
	};
}
