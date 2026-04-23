#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RPGGrassSetting.h"

#define UNITYENGINE_RPGGRASSSETTINGUTIL_CLOSEGRASSPARAMETEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A46AD00)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A46ACF0)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_OFFSET UNITYSDK_OFFSET(0x1A46ACA0)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_SETGRASSPARAMETEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A46AD10)
#define UNITYENGINE_RPGGRASSSETTINGUTIL_SETRPGGRASSSETTING_OFFSET UNITYSDK_OFFSET(0x1A46AC90)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGGrassSettingUtil_TypeDefinitionIndex = 4095;

	class RPGGrassSettingUtil : public ::System::Object
	{
	public:
		static ::System::Void SetRPGGrassSetting(::UnityEngine::RPGGrassSetting& grassSetting)
		{
			return ((::System::Void(*)(::UnityEngine::RPGGrassSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_SETRPGGRASSSETTING_OFFSET))(grassSetting);
		}

		static ::UnityEngine::RPGGrassSetting GetRPGGrassSetting()
		{
			return ((::UnityEngine::RPGGrassSetting(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_OFFSET))();
		}

		static ::System::Void CloseGrassParameterOverride()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_CLOSEGRASSPARAMETEROVERRIDE_OFFSET))();
		}

		static ::System::Void SetGrassParameterOverride(::System::Single overallDensityFactor, ::System::Boolean enableGrassDensityReduce, ::System::Single grassMaxDistance, ::System::Single grassConstantDensityRangeFactor, ::System::Single grassDensityReduceFactor)
		{
			return ((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_SETGRASSPARAMETEROVERRIDE_OFFSET))(overallDensityFactor, enableGrassDensityReduce, grassMaxDistance, grassConstantDensityRangeFactor, grassDensityReduceFactor);
		}

		static ::System::Void GetRPGGrassSetting_Injected(::UnityEngine::RPGGrassSetting& ret)
		{
			return ((::System::Void(*)(::UnityEngine::RPGGrassSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSSETTINGUTIL_GETRPGGRASSSETTING_INJECTED_OFFSET))(ret);
		}
	};
}
