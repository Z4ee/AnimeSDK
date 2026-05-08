#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAONATIVEINSTANCE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B185940)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAONATIVEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B185950)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapCapsuleAONativeInstance_TypeDefinitionIndex = 5706;

	class NapCapsuleAONativeInstance : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAONATIVEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Cleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPCAPSULEAONATIVEINSTANCE_CLEANUP_OFFSET))();
		}
	};
}
