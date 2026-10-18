#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeformationSetting.h"

#define UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3B9680)
#define UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1F3B9630)
#define UNITYENGINE_DEFORMATIONSETTINGUTIL_SETDEFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1F3B9620)

namespace UnityEngine
{
	inline static constexpr unsigned int DeformationSettingUtil_TypeDefinitionIndex = 4281;

	class DeformationSettingUtil : public ::System::Object
	{
	public:
		static ::System::Void SetDeformationSetting(::UnityEngine::DeformationSetting& a1)
		{
			return ((::System::Void(*)(::UnityEngine::DeformationSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFORMATIONSETTINGUTIL_SETDEFORMATIONSETTING_OFFSET))(a1);
		}

		static ::UnityEngine::DeformationSetting GetDeformationSetting()
		{
			return ((::UnityEngine::DeformationSetting(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_OFFSET))();
		}

		static ::System::Void GetDeformationSetting_Injected(::UnityEngine::DeformationSetting& a1)
		{
			return ((::System::Void(*)(::UnityEngine::DeformationSetting&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFORMATIONSETTINGUTIL_GETDEFORMATIONSETTING_INJECTED_OFFSET))(a1);
		}
	};
}
