#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanFormat_FormatLiterals.h"
#include "unitysdk/System/Globalization/TimeSpanFormat_Pattern.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x18D937A0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATSTANDARD_OFFSET UNITYSDK_OFFSET(0x18D93210)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x18D92FE0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x18D92FB0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D949C0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanFormat_TypeDefinitionIndex = 767;

	class TimeSpanFormat : public ::System::Object
	{
	public:
		static ::System::Globalization::TimeSpanFormat_FormatLiterals* StaticGet_PositiveInvariantFormatLiterals()
		{
			return (::System::Globalization::TimeSpanFormat_FormatLiterals*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanFormat_TypeDefinitionIndex)->GetStaticField(0xA490);
		}
		static ::System::Globalization::TimeSpanFormat_FormatLiterals* StaticGet_NegativeInvariantFormatLiterals()
		{
			return (::System::Globalization::TimeSpanFormat_FormatLiterals*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanFormat_TypeDefinitionIndex)->GetStaticField(0xA4B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT__CCTOR_OFFSET))();
		}

		static ::System::String* IntToString(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_INTTOSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* Format(::System::TimeSpan a1, ::System::String* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMAT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatStandard(::System::TimeSpan a1, ::System::Boolean a2, ::System::String* a3, ::System::Globalization::TimeSpanFormat_Pattern a4)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::Boolean, ::System::String*, ::System::Globalization::TimeSpanFormat_Pattern))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATSTANDARD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatCustomized(::System::TimeSpan a1, ::System::String* a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATCUSTOMIZED_OFFSET))(a1, a2, a3);
		}
	};
}
