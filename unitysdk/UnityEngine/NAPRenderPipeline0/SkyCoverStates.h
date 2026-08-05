#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERSTATES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7B80)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyCoverStates_TypeDefinitionIndex = 5987;

	class SkyCoverStates : public ::System::Object
	{
	public:
		::UnityEngine::MaterialPropertyBlock* HollowCoverProps; // 0x10
		::System::Single PreFrameTimer; // 0x18
		::System::Single Timer; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYCOVERSTATES__CTOR_OFFSET))(this);
		}
	};
}
