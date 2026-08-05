#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3013B0)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F301390)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3013C0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlStreamChars_TypeDefinitionIndex = 39392;

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
