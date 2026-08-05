#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4D3530)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTDECALMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4D34B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTVOLUMETRICFOGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4D34C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_SHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4D34D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D34E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererExtension_TypeDefinitionIndex = 27351;

	class ForwardRendererExtension : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_ShadowProxyMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x23040);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x23048);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultDecalMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x23050);
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
