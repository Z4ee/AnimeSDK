#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/SqlTypeException.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD8B920)
#define SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8B850)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlNullValueException_TypeDefinitionIndex = 39390;

	class SqlNullValueException : public ::System::Data::SqlTypes::SqlTypeException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLNULLVALUEEXCEPTION__CTOR_1_OFFSET))(this, message, e);
		}
	};
}
