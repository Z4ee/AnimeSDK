#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNREALTYPES_SCRIPTARRAY_GET_DATA_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNREALTYPES_SCRIPTARRAY_GET_NUM_OFFSET UNITYSDK_OFFSET(0x32EEE0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ScriptArray_TypeDefinitionIndex = 28387;

	struct alignas(8) ScriptArray
	{
		::System::Void* _data; // 0x10
		::System::Int32 _arrayNum; // 0x18
		::System::Int32 _arrayMax; // 0x1C

		::System::Int32 get_Num()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTARRAY_GET_NUM_OFFSET))(this);
		}

		::System::Void* get_Data()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTARRAY_GET_DATA_OFFSET))(this);
		}
	};
}
