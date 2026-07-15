#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define WWISECUSTOM_CUSTOMWWISESETTING_GETMODIFYWWISEMEMSETTINGFUNC_OFFSET UNITYSDK_OFFSET(0x1D22DBC0)

namespace WwiseCustom
{
	inline static constexpr unsigned int CustomWwiseSetting_TypeDefinitionIndex = 3906;

	class CustomWwiseSetting : public ::System::Object
	{
	public:
		static ::System::IntPtr GetModifyWwiseMemSettingFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + WWISECUSTOM_CUSTOMWWISESETTING_GETMODIFYWWISEMEMSETTINGFUNC_OFFSET))();
		}
	};
}
