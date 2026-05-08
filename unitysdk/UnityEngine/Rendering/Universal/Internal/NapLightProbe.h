#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class LightProbes; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB6E50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLightProbe_TypeDefinitionIndex = 30384;

	class NapLightProbe : public ::System::Object
	{
	public:
		::UnityEngine::LightProbes* lightProbes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTPROBE__CTOR_OFFSET))(this);
		}
	};
}
