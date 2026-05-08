#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintConfigData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal::Internal { class SpecialFootPrintConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTCONFIGSCRIPTABLEOBJECT_CONVERTMATCHNAMETOLOWCASE_OFFSET UNITYSDK_OFFSET(0x19689770)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTCONFIGSCRIPTABLEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196899D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTCONFIGSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19689B40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintConfigScriptableObject_TypeDefinitionIndex = 30490;

	class FootPrintConfigScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single fadeOutLifeTime; // 0x18
		::System::Single fadeOutMultiValue; // 0x1C
		::System::Single fadeInLifeTime; // 0x20
		::System::Single fadeInMultiValue; // 0x24
		::UnityEngine::Rendering::Universal::Internal::FootPrintConfigData m_CommonFootPrintData; // 0x28
		::UnityEngine::GameObject* footPrintSpawnerForMaleSize01; // 0x58
		::UnityEngine::GameObject* footPrintSpawnerForMaleSize02; // 0x60
		::UnityEngine::GameObject* footPrintSpawnerForMaleSize03; // 0x68
		::UnityEngine::GameObject* footPrintSpawnerForFemaleSize01; // 0x70
		::UnityEngine::GameObject* footPrintSpawnerForFemaleSize02; // 0x78
		::UnityEngine::GameObject* footPrintSpawnerForFemaleSize03; // 0x80
		::UnityEngine::GameObject* footPrintSpawnerBangBoo; // 0x88
		::UnityEngine::GameObject* footPrintSpawnerBear; // 0x90
		::System::Single npcFootSizeChild; // 0x98
		::System::Single npcFootFemaleSize01; // 0x9C
		::System::Single npcFootMaleSize01; // 0xA0
		::System::Single npcFootFemaleSize02; // 0xA4
		::System::Single npcFootMaleSize02; // 0xA8
		::System::Single npcFootSizeOld; // 0xAC
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SpecialFootPrintConfig*>* specialFootPrintConfig; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SpecialFootPrintConfig*>* commonPrintConfig; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTCONFIGSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void ConvertMatchNameToLowCase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTCONFIGSCRIPTABLEOBJECT_CONVERTMATCHNAMETOLOWCASE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTCONFIGSCRIPTABLEOBJECT_ONENABLE_OFFSET))(this);
		}
	};
}
