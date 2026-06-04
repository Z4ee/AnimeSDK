#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Enum_ParseFailureKind.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_ENUM_ENUMRESULT_GETENUMPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3838250)
#define SYSTEM_ENUM_ENUMRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x3838190)
#define SYSTEM_ENUM_ENUMRESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x38381E0)
#define SYSTEM_ENUM_ENUMRESULT_SETFAILURE_2_OFFSET UNITYSDK_OFFSET(0x3838210)
#define SYSTEM_ENUM_ENUMRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x38381D0)

namespace System
{
	inline static constexpr unsigned int Enum_EnumResult_TypeDefinitionIndex = 239;

	struct alignas(8) Enum_EnumResult
	{
		::System::Object* parsedEnum; // 0x10
		::System::Boolean canThrow; // 0x18
		::System::Enum_ParseFailureKind m_failure; // 0x1C
		::System::String* m_failureMessageID; // 0x20
		::System::String* m_failureParameter; // 0x28
		::System::Object* m_failureMessageFormatArgument; // 0x30
		::System::Exception* m_innerException; // 0x38

		::System::Void Init(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ENUMRESULT_INIT_OFFSET))(this, a1);
		}

		::System::Void SetFailure(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ENUMRESULT_SETFAILURE_OFFSET))(this, a1);
		}

		::System::Void SetFailure_1(::System::Enum_ParseFailureKind a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Enum_ParseFailureKind, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ENUMRESULT_SETFAILURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFailure_2(::System::Enum_ParseFailureKind a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Enum_ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ENUMRESULT_SETFAILURE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Exception* GetEnumParseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ENUMRESULT_GETENUMPARSEEXCEPTION_OFFSET))(this);
		}
	};
}
