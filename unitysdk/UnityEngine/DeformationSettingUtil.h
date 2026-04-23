#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeformationSetting.h"

#define UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A440030)
#define UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1A43FFE0)
#define UNITYENGINE_DEFORMATIONSETTINGUTIL_SETDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1A43FFD0)

namespace UnityEngine
{
	inline static constexpr unsigned int DeformationSettingUtil_TypeDefinitionIndex = 4089;

	class DeformationSettingUtil : public ::System::Object
	{
	public:
		static ::System::Void SetDeformationSetting(::UnityEngine::DeformationSetting& grassSetting)
		{
			return ((::System::Void(*)(::UnityEngine::DeformationSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFORMATIONSETTINGUTIL_SETDEFORMATIONSETTING_OFFSET))(grassSetting);
		}

		static ::UnityEngine::DeformationSetting GetDeformationSetting()
		{
			return ((::UnityEngine::DeformationSetting(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_OFFSET))();
		}

		static ::System::Void GetDeformationSetting_Injected(::UnityEngine::DeformationSetting& ret)
		{
			return ((::System::Void(*)(::UnityEngine::DeformationSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_INJECTED_OFFSET))(ret);
		}
	};
}
