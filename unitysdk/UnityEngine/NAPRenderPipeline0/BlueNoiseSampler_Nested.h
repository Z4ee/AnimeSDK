#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class BlueNoiseSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_NESTED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA29010)
#define UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_NESTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA29060)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int BlueNoiseSampler_Nested_TypeDefinitionIndex = 5791;

	class BlueNoiseSampler_Nested : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::BlueNoiseSampler** StaticGet_instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::BlueNoiseSampler**)Il2CppClass::FromTypeDefinitionIndex(BlueNoiseSampler_Nested_TypeDefinitionIndex)->GetStaticField(0x5530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_NESTED__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BLUENOISESAMPLER_NESTED__CTOR_OFFSET))(this);
		}
	};
}
