#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/MonoLightObjectProxy_ControlType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class MonoLightObjectProxy_LightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_APPLYINTENSITYCHANGE_OFFSET UNITYSDK_OFFSET(0x1C5BB900)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_COLLECTCHILDLIGHT_OFFSET UNITYSDK_OFFSET(0x1C5BB6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5BB650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C5BB5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5BBD40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BBCF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MonoLightObjectProxy_TypeDefinitionIndex = 27808;

	class MonoLightObjectProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__IntensityByScript()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLightObjectProxy_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy_ControlType controlType; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy_LightData*>* controlledLightDataList; // 0x20
		::UnityEngine::Material* boxFogMaterial; // 0x28
		::System::Single localIntensity; // 0x30
		::System::Boolean previewMode; // 0x34
		::System::Boolean controlWindIntensity; // 0x35
		::System::Single extraWindIntensity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void CollectChildLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_COLLECTCHILDLIGHT_OFFSET))(this);
		}

		::System::Void ApplyIntensityChange(::System::Single intensityMultiply, ::System::Single fogIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXY_APPLYINTENSITYCHANGE_OFFSET))(this, intensityMultiply, fogIntensity);
		}
	};
}
