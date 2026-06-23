#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B073460)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTDECALMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B0733E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTVOLUMETRICFOGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B0733F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_SHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B073400)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B073410)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererExtension_TypeDefinitionIndex = 26435;

	class ForwardRendererExtension : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_DefaultDecalMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x21890);
		}
		static ::UnityEngine::Material** StaticGet_s_ShadowProxyMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x21898);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x218A0);
		}

		::System::Void _ctor(::UnityEngine::Rendering::Universal::ForwardRendererData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRendererData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION__CTOR_OFFSET))(this, data);
		}

		static ::UnityEngine::Material* get_defaultDecalMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTDECALMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_defaultVolumetricFogMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTVOLUMETRICFOGMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_shadowProxyMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_SHADOWPROXYMATERIAL_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_DISPOSE_OFFSET))(this);
		}
	};
}
