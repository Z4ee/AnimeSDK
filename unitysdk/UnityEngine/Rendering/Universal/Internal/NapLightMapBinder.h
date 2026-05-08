#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLightMapData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B087750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B087430)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER_SETLIGHTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1B0870D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B087A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B087A30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLightMapBinder_TypeDefinitionIndex = 30378;

	class NapLightMapBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_binderIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLightMapBinder_TypeDefinitionIndex)->GetStaticField(0x6520);
		}
		::System::Boolean ignoreTimeScale; // 0x18
		::UnityEngine::Vector3 bakeTimePosition; // 0x1C
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData; // 0x28
		::System::Boolean ignoreLightProbe; // 0x30
		::System::Boolean UseStaticTOD; // 0x31
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* visualEnvironmentE; // 0x38
		::System::Int32 lightMapOffset; // 0x40
		::System::Int32 lightMapCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER__CCTOR_OFFSET))();
		}

		::System::Void SetLightMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER_SETLIGHTMAPDATA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPBINDER_ONDISABLE_OFFSET))(this);
		}
	};
}
