#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanParse_ParseFailureKind.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanThrowStyle.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_GETTIMESPANPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3839300)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x3839190)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x3839210)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_2_OFFSET UNITYSDK_OFFSET(0x3839280)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x38391A0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TimeSpanResult_TypeDefinitionIndex = 776;

	struct alignas(8) TimeSpanParse_TimeSpanResult
	{
		::System::TimeSpan parsedTimeSpan; // 0x10
		::System::Globalization::TimeSpanParse_TimeSpanThrowStyle throwStyle; // 0x18
		::System::Globalization::TimeSpanParse_ParseFailureKind m_failure; // 0x1C
		::System::String* m_failureMessageID; // 0x20
		::System::Object* m_failureMessageFormatArgument; // 0x28
		::System::String* m_failureArgumentName; // 0x30

		::System::Void Init(::System::Globalization::TimeSpanParse_TimeSpanThrowStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_TimeSpanThrowStyle))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_INIT_OFFSET))(this, a1);
		}

		::System::Void SetFailure(::System::Globalization::TimeSpanParse_ParseFailureKind a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_ParseFailureKind, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetFailure_1(::System::Globalization::TimeSpanParse_ParseFailureKind a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFailure_2(::System::Globalization::TimeSpanParse_ParseFailureKind a1, ::System::String* a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::TimeSpanParse_ParseFailureKind, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_SETFAILURE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Exception* GetTimeSpanParseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANRESULT_GETTIMESPANPARSEEXCEPTION_OFFSET))(this);
		}
	};
}
