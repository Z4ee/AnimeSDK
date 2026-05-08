#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19107650)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTDECALMATERIAL_OFFSET UNITYSDK_OFFSET(0x191075D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTVOLUMETRICFOGMATERIAL_OFFSET UNITYSDK_OFFSET(0x191075E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_SHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x191075F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19107600)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererExtension_TypeDefinitionIndex = 29852;

	class ForwardRendererExtension : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_ShadowProxyMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x24090);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultDecalMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x24098);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x240A0);
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
