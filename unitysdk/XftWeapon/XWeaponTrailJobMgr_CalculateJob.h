#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define XFTWEAPON_XWEAPONTRAILJOBMGR_CALCULATEJOB_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x1B1809D0)
#define XFTWEAPON_XWEAPONTRAILJOBMGR_CALCULATEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x951AD0)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrailJobMgr_CalculateJob_TypeDefinitionIndex = 37686;

	struct alignas(1) XWeaponTrailJobMgr_CalculateJob
	{
		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_CALCULATEJOB_EXECUTE_OFFSET))(this, index);
		}

		static ::System::Void ExecuteImpl(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_CALCULATEJOB_EXECUTEIMPL_OFFSET))(index);
		}
	};
}
