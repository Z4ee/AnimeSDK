#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanParse_ParseFailureKind.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanThrowStyle.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_GETTIMESPANPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x20D7500)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x20D7390)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x20D7410)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_2_OFFSET UNITYSDK_OFFSET(0x20D7480)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x20D73A0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanResult_TypeDefinitionIndex = 775;

	struct alignas(8) TimeSpanParse_TimeSpanResult
	{
		::System::TimeSpan parsedTimeSpan; // 0x10
		::System::Globalization::TimeSpanParse_TimeSpanThrowStyle throwStyle; // 0x18
		::System::Globalization::TimeSpanParse_ParseFailureKind m_failure; // 0x1C
		::System::String* m_failureMessageID; // 0x20
		::System::Object* m_failureMessageFormatArgument; // 0x28
		::System::String* m_failureArgumentName; // 0x30

		::System::Void Init(::System::Globalization::TimeSpanParse_TimeSpanThrowStyle canThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_TimeSpanThrowStyle))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_INIT_OFFSET))(this, canThrow);
		}

		::System::Void SetFailure(::System::Globalization::TimeSpanParse_ParseFailureKind failure, ::System::String* failureMessageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_ParseFailureKind, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_OFFSET))(this, failure, failureMessageID);
		}

		::System::Void SetFailure_1(::System::Globalization::TimeSpanParse_ParseFailureKind failure, ::System::String* failureMessageID, ::System::Object* failureMessageFormatArgument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_1_OFFSET))(this, failure, failureMessageID, failureMessageFormatArgument);
		}

		::System::Void SetFailure_2(::System::Globalization::TimeSpanParse_ParseFailureKind failure, ::System::String* failureMessageID, ::System::Object* failureMessageFormatArgument, ::System::String* failureArgumentName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_ParseFailureKind, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_2_OFFSET))(this, failure, failureMessageID, failureMessageFormatArgument, failureArgumentName);
		}

		::System::Exception* GetTimeSpanParseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_GETTIMESPANPARSEEXCEPTION_OFFSET))(this);
		}
	};
}
