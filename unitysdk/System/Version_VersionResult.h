#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Version_ParseFailureKind.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Version; }

#define SYSTEM_VERSION_VERSIONRESULT_GETVERSIONPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x8ACB70)
#define SYSTEM_VERSION_VERSIONRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x8ACA80)
#define SYSTEM_VERSION_VERSIONRESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x8ACB00)
#define SYSTEM_VERSION_VERSIONRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x8ACA90)

namespace System
{
	inline static constexpr unsigned int Version_VersionResult_TypeDefinitionIndex = 354;

	struct alignas(8) Version_VersionResult
	{
		::System::Version* m_parsedVersion; // 0x10
		::System::Version_ParseFailureKind m_failure; // 0x18
		::System::String* m_exceptionArgument; // 0x20
		::System::String* m_argumentName; // 0x28
		::System::Boolean m_canThrow; // 0x30

		::System::Void Init(::System::String* argumentName, ::System::Boolean canThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_VERSIONRESULT_INIT_OFFSET))(this, argumentName, canThrow);
		}

		::System::Void SetFailure(::System::Version_ParseFailureKind failure)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version_ParseFailureKind))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_VERSIONRESULT_SETFAILURE_OFFSET))(this, failure);
		}

		::System::Void SetFailure_1(::System::Version_ParseFailureKind failure, ::System::String* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version_ParseFailureKind, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_VERSIONRESULT_SETFAILURE_1_OFFSET))(this, failure, argument);
		}

		::System::Exception* GetVersionParseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_VERSIONRESULT_GETVERSIONPARSEEXCEPTION_OFFSET))(this);
		}
	};
}
