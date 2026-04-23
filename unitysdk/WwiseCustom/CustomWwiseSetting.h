#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define WWISECUSTOM_CUSTOMWWISESETTING_GETMODIFYWWISEMEMSETTINGFUNC_OFFSET UNITYSDK_OFFSET(0x1A49B970)

namespace WwiseCustom
{
	inline static constexpr unsigned int CustomWwiseSetting_TypeDefinitionIndex = 3728;

	class CustomWwiseSetting : public ::System::Object
	{
	public:
		static ::System::IntPtr GetModifyWwiseMemSettingFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + WWISECUSTOM_CUSTOMWWISESETTING_GETMODIFYWWISEMEMSETTINGFUNC_OFFSET))();
		}
	};
}
