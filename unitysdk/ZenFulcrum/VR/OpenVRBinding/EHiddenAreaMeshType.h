#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EHiddenAreaMeshType_TypeDefinitionIndex = 37073;

	enum class EHiddenAreaMeshType : ::System::Int32
	{
		k_eHiddenAreaMesh_Standard = 0,
		k_eHiddenAreaMesh_Inverse = 1,
		k_eHiddenAreaMesh_LineLoop = 2,
		k_eHiddenAreaMesh_Max = 3,
	};
}
