#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanFormat_FormatLiterals.h"
#include "unitysdk/System/Globalization/TimeSpanFormat_Pattern.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x179437A0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATSTANDARD_OFFSET UNITYSDK_OFFSET(0x17943190)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x17942F60)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x17942F30)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x179447F0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanFormat_TypeDefinitionIndex = 765;

	class TimeSpanFormat : public ::System::Object
	{
	public:
		static ::System::Globalization::TimeSpanFormat_FormatLiterals* StaticGet_PositiveInvariantFormatLiterals()
		{
			return (::System::Globalization::TimeSpanFormat_FormatLiterals*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanFormat_TypeDefinitionIndex)->GetStaticField(0x7AB0);
		}
		static ::System::Globalization::TimeSpanFormat_FormatLiterals* StaticGet_NegativeInvariantFormatLiterals()
		{
			return (::System::Globalization::TimeSpanFormat_FormatLiterals*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanFormat_TypeDefinitionIndex)->GetStaticField(0x7AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT__CCTOR_OFFSET))();
		}

		static ::System::String* IntToString(::System::Int32 n, ::System::Int32 digits)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_INTTOSTRING_OFFSET))(n, digits);
		}

		static ::System::String* Format(::System::TimeSpan value, ::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMAT_OFFSET))(value, format, formatProvider);
		}

		static ::System::String* FormatStandard(::System::TimeSpan value, ::System::Boolean isInvariant, ::System::String* format, ::System::Globalization::TimeSpanFormat_Pattern pattern)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::Boolean, ::System::String*, ::System::Globalization::TimeSpanFormat_Pattern))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATSTANDARD_OFFSET))(value, isInvariant, format, pattern);
		}

		static ::System::String* FormatCustomized(::System::TimeSpan value, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATCUSTOMIZED_OFFSET))(value, format, dtfi);
		}
	};
}
