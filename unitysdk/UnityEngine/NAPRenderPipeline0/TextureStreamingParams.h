#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableBool; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURESTREAMINGPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB66C30)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURESTREAMINGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB66C20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TextureStreamingParams_TypeDefinitionIndex = 6029;

	class TextureStreamingParams : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_upscalerCompensation()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(TextureStreamingParams_TypeDefinitionIndex)->GetStaticField(0x5020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURESTREAMINGPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURESTREAMINGPARAMS__CCTOR_OFFSET))();
		}
	};
}
