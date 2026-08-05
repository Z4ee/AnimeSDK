#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanRawInfo.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanResult.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanStandardStyles.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanToken.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TimeSpanTokenizer.h"
#include "unitysdk/System/Globalization/TimeSpanStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1D191290)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET UNITYSDK_OFFSET(0x1D191150)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTLITERAL_OFFSET UNITYSDK_OFFSET(0x1D191330)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1D18B110)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1D18ACB0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSE_OFFSET UNITYSDK_OFFSET(0x1D18A7A0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINALSTATE_OFFSET UNITYSDK_OFFSET(0x1D18B610)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_DHMSF_OFFSET UNITYSDK_OFFSET(0x1D18F930)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_D_OFFSET UNITYSDK_OFFSET(0x1D18B860)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HMS_F_D_OFFSET UNITYSDK_OFFSET(0x1D18DB50)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_OFFSET UNITYSDK_OFFSET(0x1D18BD30)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_S_D_OFFSET UNITYSDK_OFFSET(0x1D18C1F0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEBYFORMAT_OFFSET UNITYSDK_OFFSET(0x1D18FED0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLETIMESPAN_OFFSET UNITYSDK_OFFSET(0x1D18B1C0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1D18B560)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1D18AD60)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1D18B060)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPANCONSTANT_OFFSET UNITYSDK_OFFSET(0x1D18FEA0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x1D18A840)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D18AC20)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYTIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1D18A5E0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x1D18A570)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1913A0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TypeDefinitionIndex = 755;

	class TimeSpanParse : public ::System::Object
	{
	public:
		static ::System::Globalization::TimeSpanParse_TimeSpanToken* StaticGet_zero()
		{
			return (::System::Globalization::TimeSpanParse_TimeSpanToken*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanParse_TypeDefinitionIndex)->GetStaticField(0x4E0);
		}
		// static const ::System::Int32 unlimitedDigits = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 maxFractionDigits = 0x7; // 0x0
		// static const ::System::Int32 maxDays = 0xA2E3FF; // 0x0
		// static const ::System::Int32 maxHours = 0x17; // 0x0
		// static const ::System::Int32 maxMinutes = 0x3B; // 0x0
		// static const ::System::Int32 maxSeconds = 0x3B; // 0x0
		// static const ::System::Int32 maxFraction = 0x98967F; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE__CCTOR_OFFSET))();
		}

		static ::System::Void ValidateStyles(::System::Globalization::TimeSpanStyles style, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::Globalization::TimeSpanStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_VALIDATESTYLES_OFFSET))(style, parameterName);
		}

		static ::System::Boolean TryTimeToTicks(::System::Boolean positive, ::System::Globalization::TimeSpanParse_TimeSpanToken days, ::System::Globalization::TimeSpanParse_TimeSpanToken hours, ::System::Globalization::TimeSpanParse_TimeSpanToken minutes, ::System::Globalization::TimeSpanParse_TimeSpanToken seconds, ::System::Globalization::TimeSpanParse_TimeSpanToken fraction, ::System::Int64& result)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYTIMETOTICKS_OFFSET))(positive, days, hours, minutes, seconds, fraction, result);
		}

		static ::System::TimeSpan Parse(::System::String* input, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSE_OFFSET))(input, formatProvider);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSE_OFFSET))(input, formatProvider, result);
		}

		static ::System::TimeSpan ParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACT_OFFSET))(input, format, formatProvider, styles);
		}

		static ::System::Boolean TryParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACT_OFFSET))(input, format, formatProvider, styles, result);
		}

		static ::System::TimeSpan ParseExactMultiple(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTMULTIPLE_OFFSET))(input, formats, formatProvider, styles);
		}

		static ::System::Boolean TryParseExactMultiple(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLE_OFFSET))(input, formats, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseTimeSpan(::System::String* input, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::IFormatProvider*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPAN_OFFSET))(input, style, formatProvider, result);
		}

		static ::System::Boolean ProcessTerminalState(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINALSTATE_OFFSET))(raw, style, result);
		}

		static ::System::Boolean ProcessTerminal_DHMSF(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_DHMSF_OFFSET))(raw, style, result);
		}

		static ::System::Boolean ProcessTerminal_HMS_F_D(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HMS_F_D_OFFSET))(raw, style, result);
		}

		static ::System::Boolean ProcessTerminal_HM_S_D(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_S_D_OFFSET))(raw, style, result);
		}

		static ::System::Boolean ProcessTerminal_HM(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_OFFSET))(raw, style, result);
		}

		static ::System::Boolean ProcessTerminal_D(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_D_OFFSET))(raw, style, result);
		}

		static ::System::Boolean TryParseExactTimeSpan(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTTIMESPAN_OFFSET))(input, format, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseByFormat(::System::String* input, ::System::String* format, ::System::Globalization::TimeSpanStyles styles, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::TimeSpanStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEBYFORMAT_OFFSET))(input, format, styles, result);
		}

		static ::System::Boolean ParseExactDigits(::System::Globalization::TimeSpanParse_TimeSpanTokenizer& tokenizer, ::System::Int32 minDigitLength, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanTokenizer&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET))(tokenizer, minDigitLength, result);
		}

		static ::System::Boolean ParseExactDigits_1(::System::Globalization::TimeSpanParse_TimeSpanTokenizer& tokenizer, ::System::Int32 minDigitLength, ::System::Int32 maxDigitLength, ::System::Int32& zeroes, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanTokenizer&, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_1_OFFSET))(tokenizer, minDigitLength, maxDigitLength, zeroes, result);
		}

		static ::System::Boolean ParseExactLiteral(::System::Globalization::TimeSpanParse_TimeSpanTokenizer& tokenizer, ::System::Text::StringBuilder* enquotedString)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanTokenizer&, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTLITERAL_OFFSET))(tokenizer, enquotedString);
		}

		static ::System::Boolean TryParseTimeSpanConstant(::System::String* input, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPANCONSTANT_OFFSET))(input, result);
		}

		static ::System::Boolean TryParseExactMultipleTimeSpan(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::Globalization::TimeSpanParse_TimeSpanResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLETIMESPAN_OFFSET))(input, formats, formatProvider, styles, result);
		}
	};
}
