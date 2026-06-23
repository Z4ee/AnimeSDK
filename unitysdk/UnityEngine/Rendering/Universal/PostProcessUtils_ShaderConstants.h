#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_SHADERCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC37620)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessUtils_ShaderConstants_TypeDefinitionIndex = 27172;

	class PostProcessUtils_ShaderConstants : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Grain_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessUtils_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x66D0);
		}
		static ::System::Int32* StaticGet__Grain_Texture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessUtils_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x66D4);
		}
		static ::System::Int32* StaticGet__BlueNoise_Texture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessUtils_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x66D8);
		}
		static ::System::Int32* StaticGet__Grain_TilingParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessUtils_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x66DC);
		}
		static ::System::Int32* StaticGet__Dithering_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessUtils_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x66E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_SHADERCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
