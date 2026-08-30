#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_TOUCHFILTER_FILTERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x2F440)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TouchFilter_FilterParam_TypeDefinitionIndex = 6864;

	struct alignas(4) TouchFilter_FilterParam
	{
		::System::Single FilterLength; // 0x10
		::System::Single FilterRadianFromHorizon; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_FILTERPARAM__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
