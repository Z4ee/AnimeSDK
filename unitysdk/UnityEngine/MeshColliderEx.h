#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MeshCollider.h"

#define UNITYENGINE_MESHCOLLIDEREX_GET_MULTILAYERMASK_OFFSET UNITYSDK_OFFSET(0x1CB42E40)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshColliderEx_TypeDefinitionIndex = 5310;

	class MeshColliderEx : public ::UnityEngine::MeshCollider
	{
	public:
		::System::UInt32 get_MultiLayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDEREX_GET_MULTILAYERMASK_OFFSET))(this);
		}
	};
}
