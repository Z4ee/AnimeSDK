#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RPGGrassSetting.h"

#define UNITYENGINE_RPGGRASSSETTINGUTIL_CLOSEGRASSPARAMETEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1ED49550)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED49540)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_OFFSET UNITYSDK_OFFSET(0x1ED494F0)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_SETGRASSPARAMETEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1ED49560)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_SETRPGGRASSSETTING_OFFSET UNITYSDK_OFFSET(0x1ED494E0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGGrassSettingUtil_TypeDefinitionIndex = 4284;

	class RPGGrassSettingUtil : public ::System::Object
	{
	public:
		static ::System::Void SetRPGGrassSetting(::UnityEngine::RPGGrassSetting& a1)
		{
			return ((::System::Void(*)(::UnityEngine::RPGGrassSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_SETRPGGRASSSETTING_OFFSET))(a1);
		}

		static ::UnityEngine::RPGGrassSetting GetRPGGrassSetting()
		{
			return ((::UnityEngine::RPGGrassSetting(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_OFFSET))();
		}

		static ::System::Void CloseGrassParameterOverride()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_CLOSEGRASSPARAMETEROVERRIDE_OFFSET))();
		}

		static ::System::Void SetGrassParameterOverride(::System::Single a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_SETGRASSPARAMETEROVERRIDE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetRPGGrassSetting_Injected(::UnityEngine::RPGGrassSetting& a1)
		{
			return ((::System::Void(*)(::UnityEngine::RPGGrassSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_INJECTED_OFFSET))(a1);
		}
	};
}
