#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/Compute_DistanceTransform_EventTypes.h"
#include "unitysdk/UnityEngine/Color.h"

#define TMPRO_COMPUTE_DT_EVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B197E80)
#define TMPRO_COMPUTE_DT_EVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B197E70)

namespace TMPro
{
	inline static constexpr unsigned int Compute_DT_EventArgs_TypeDefinitionIndex = 41059;

	class Compute_DT_EventArgs : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x10
		::TMPro::Compute_DistanceTransform_EventTypes EventType; // 0x18
		::System::Single ProgressPercentage; // 0x1C

		::System::Void _ctor(::TMPro::Compute_DistanceTransform_EventTypes a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::Compute_DistanceTransform_EventTypes, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_COMPUTE_DT_EVENTARGS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::TMPro::Compute_DistanceTransform_EventTypes a1, ::Il2CppArray<::UnityEngine::Color>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::Compute_DistanceTransform_EventTypes, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + TMPRO_COMPUTE_DT_EVENTARGS__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
