#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/BRECORD.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_VARIANT_CLEAR_OFFSET UNITYSDK_OFFSET(0x3C8D530)

namespace System
{
	inline static constexpr unsigned int Variant_TypeDefinitionIndex = 452;

	struct alignas(8) Variant
	{
		::System::Int16 vt; // 0x10
		::System::UInt16 wReserved1; // 0x12
		::System::UInt16 wReserved2; // 0x14
		::System::UInt16 wReserved3; // 0x16
		::System::Int64 llVal; // 0x18
		::System::Int32 lVal; // 0x18
		::System::Byte bVal; // 0x18
		::System::Int16 iVal; // 0x18
		::System::Single fltVal; // 0x18
		::System::Double dblVal; // 0x18
		::System::Int16 boolVal; // 0x18
		::System::IntPtr bstrVal; // 0x18
		::System::SByte cVal; // 0x18
		::System::UInt16 uiVal; // 0x18
		::System::UInt32 ulVal; // 0x18
		::System::UInt64 ullVal; // 0x18
		::System::Int32 intVal; // 0x18
		::System::UInt32 uintVal; // 0x18
		::System::IntPtr pdispVal; // 0x18
		::System::BRECORD bRecord; // 0x18

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VARIANT_CLEAR_OFFSET))(this);
		}
	};
}
