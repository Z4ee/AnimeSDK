#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_SQLTYPEEXCEPTIONSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B9A4A30)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9A4920)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B9A47C0)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B9A49B0)
#define SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A4850)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlTypeException_TypeDefinitionIndex = 38728;

	class SqlTypeException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_2_OFFSET))(this, message, e);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION__CTOR_3_OFFSET))(this, si, sc);
		}

		static ::System::Runtime::Serialization::SerializationInfo* SqlTypeExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc)
		{
			return ((::System::Runtime::Serialization::SerializationInfo*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLTYPEEXCEPTION_SQLTYPEEXCEPTIONSERIALIZATION_OFFSET))(si, sc);
		}
	};
}
