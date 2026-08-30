#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RANGEINT_GET_END_OFFSET UNITYSDK_OFFSET(0x3C646D0)
#define UNITYENGINE_RANGEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

namespace UnityEngine
{
	inline static constexpr unsigned int RangeInt_TypeDefinitionIndex = 4333;

	struct alignas(4) RangeInt
	{
		::System::Int32 start; // 0x10
		::System::Int32 length; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEINT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_end()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEINT_GET_END_OFFSET))(this);
		}
	};
}
