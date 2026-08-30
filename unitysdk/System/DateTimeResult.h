#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ParseFailureKind.h"
#include "unitysdk/System/ParseFlags.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class Calendar; }

#define SYSTEM_DATETIMERESULT_INIT_OFFSET UNITYSDK_OFFSET(0x3B69640)
#define SYSTEM_DATETIMERESULT_SETDATE_OFFSET UNITYSDK_OFFSET(0x7CCB0)
#define SYSTEM_DATETIMERESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x3B69680)
#define SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x3B69670)

namespace System
{
	inline static constexpr unsigned int DateTimeResult_TypeDefinitionIndex = 264;

	struct alignas(8) DateTimeResult
	{
		::System::Int32 Year; // 0x10
		::System::Int32 Month; // 0x14
		::System::Int32 Day; // 0x18
		::System::Int32 Hour; // 0x1C
		::System::Int32 Minute; // 0x20
		::System::Int32 Second; // 0x24
		::System::Double fraction; // 0x28
		::System::Int32 era; // 0x30
		::System::ParseFlags flags; // 0x34
		::System::TimeSpan timeZoneOffset; // 0x38
		::System::Globalization::Calendar* calendar; // 0x40
		::System::DateTime parsedDate; // 0x48
		::System::ParseFailureKind failure; // 0x50
		::System::String* failureMessageID; // 0x58
		::System::Object* failureMessageFormatArgument; // 0x60
		::System::String* failureArgumentName; // 0x68

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_INIT_OFFSET))(this);
		}

		::System::Void SetDate(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFailure(::System::ParseFailureKind a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFailure_1(::System::ParseFailureKind a1, ::System::String* a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParseFailureKind, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
