#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DEE5940)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DEE5920)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE5950)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlStreamChars_TypeDefinitionIndex = 38731;

	class SqlStreamChars : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS__CTOR_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
