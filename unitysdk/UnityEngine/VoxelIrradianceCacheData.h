#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_VOXELIRRADIANCECACHEDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1EED7110)
#define UNITYENGINE_VOXELIRRADIANCECACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED7100)

namespace UnityEngine
{
	inline static constexpr unsigned int VoxelIrradianceCacheData_TypeDefinitionIndex = 4265;

	class VoxelIrradianceCacheData : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::VoxelIrradianceCacheData* a1)
		{
			return ((::System::Void(*)(::UnityEngine::VoxelIrradianceCacheData*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHEDATA_INTERNAL_CREATE_OFFSET))(a1);
		}
	};
}
