#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_CLEARPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1C44DB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C44D0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1C44D220)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1C44D1D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C44DBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_REFRESHMATRIX_OFFSET UNITYSDK_OFFSET(0x1C44D2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C44DC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C44DC20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCausticProxy_TypeDefinitionIndex = 27204;

	class MonoCausticProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7370);
		}
		static ::System::Int32* StaticGet__CausticsBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7374);
		}
		static ::System::Int32* StaticGet__FadeParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7378);
		}
		static ::System::Int32* StaticGet__EnableXZFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x737C);
		}
		static ::System::Int32* StaticGet__FadeParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7380);
		}
		static ::System::Int32* StaticGet__EnableYFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7384);
		}
		::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x18
		::System::Boolean overrideBrightness; // 0x20
		::System::Single brightness; // 0x24
		::UnityEngine::Vector3 causticProjectionAngle; // 0x28
		::System::Boolean enableYFade; // 0x34
		::UnityEngine::Vector2 yBlendValue; // 0x38
		::System::Boolean enableXZFade; // 0x40
		::UnityEngine::Vector4 xzBlendValue; // 0x44

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

		::System::Void RefreshMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_REFRESHMATRIX_OFFSET))(this);
		}

		::System::Void ClearPropertyBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_CLEARPROPERTYBLOCK_OFFSET))(this);
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
