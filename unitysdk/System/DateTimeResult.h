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

#define SYSTEM_DATETIMERESULT_INIT_OFFSET UNITYSDK_OFFSET(0x20D4530)
#define SYSTEM_DATETIMERESULT_SETDATE_OFFSET UNITYSDK_OFFSET(0x7B070)
#define SYSTEM_DATETIMERESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x20D4570)
#define SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x20D4560)

namespace System
{
	inline static constexpr unsigned int DateTimeResult_TypeDefinitionIndex = 265;

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

		::System::Void SetDate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETDATE_OFFSET))(this, year, month, day);
		}

		::System::Void SetFailure(::System::ParseFailureKind failure, ::System::String* failureMessageID, ::System::Object* failureMessageFormatArgument)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET))(this, failure, failureMessageID, failureMessageFormatArgument);
		}

		::System::Void SetFailure_1(::System::ParseFailureKind failure, ::System::String* failureMessageID, ::System::Object* failureMessageFormatArgument, ::System::String* failureArgumentName)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParseFailureKind, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_1_OFFSET))(this, failure, failureMessageID, failureMessageFormatArgument, failureArgumentName);
		}
	};
}
