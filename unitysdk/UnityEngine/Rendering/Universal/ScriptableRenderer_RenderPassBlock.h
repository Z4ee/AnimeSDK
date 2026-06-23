#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERPASSBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B89A2A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex = 26271;

	class ScriptableRenderer_RenderPassBlock : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_BeforeRendering()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x6220);
		}
		static ::System::Int32* StaticGet_MainRenderingOpaque()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x6224);
		}
		static ::System::Int32* StaticGet_MainRenderingTransparent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x6228);
		}
		static ::System::Int32* StaticGet_AfterRendering()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x622C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERPASSBLOCK__CCTOR_OFFSET))();
		}
	};
}
