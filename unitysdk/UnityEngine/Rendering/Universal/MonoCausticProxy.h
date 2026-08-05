#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_GETCACHEDRENDERER_OFFSET UNITYSDK_OFFSET(0x1D605380)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6051B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1D605300)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1D6052B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D605DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_REFRESHMATRIX_OFFSET UNITYSDK_OFFSET(0x1D605540)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D605E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D605E00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCausticProxy_TypeDefinitionIndex = 27511;

	class MonoCausticProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__FadeParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7320);
		}
		static ::System::Int32* StaticGet__EnableYFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7324);
		}
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7328);
		}
		static ::System::Int32* StaticGet__CausticsBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x732C);
		}
		static ::System::Int32* StaticGet__EnableXZFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7330);
		}
		static ::System::Int32* StaticGet__CausticColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7334);
		}
		static ::System::Int32* StaticGet__FadeParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7338);
		}
		::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x18
		::UnityEngine::Renderer* m_CachedRenderer; // 0x20
		::System::Boolean overrideBrightness; // 0x28
		::System::Single brightness; // 0x2C
		::System::Boolean overrideColor; // 0x30
		::UnityEngine::Color causticColor; // 0x34
		::UnityEngine::Vector3 causticProjectionAngle; // 0x44
		::System::Boolean enableYFade; // 0x50
		::UnityEngine::Vector2 yBlendValue; // 0x54
		::System::Boolean enableXZFade; // 0x5C
		::UnityEngine::Vector4 xzBlendValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::UnityEngine::Renderer* GetCachedRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_GETCACHEDRENDERER_OFFSET))(this);
		}

		::System::Void RefreshMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_REFRESHMATRIX_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONVALIDATE_OFFSET))(this);
		}
	};
}
