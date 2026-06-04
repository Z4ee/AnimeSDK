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

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_1_OFFSET UNITYSDK_OFFSET(0x18700230)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET UNITYSDK_OFFSET(0x18700080)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTLITERAL_OFFSET UNITYSDK_OFFSET(0x18700340)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x186F90D0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x186F8CC0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSE_OFFSET UNITYSDK_OFFSET(0x186F8530)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINALSTATE_OFFSET UNITYSDK_OFFSET(0x186F9AA0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_DHMSF_OFFSET UNITYSDK_OFFSET(0x186FD940)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_D_OFFSET UNITYSDK_OFFSET(0x186F9D10)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HMS_F_D_OFFSET UNITYSDK_OFFSET(0x186FBE10)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_OFFSET UNITYSDK_OFFSET(0x186FA200)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_S_D_OFFSET UNITYSDK_OFFSET(0x186FA6D0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEBYFORMAT_OFFSET UNITYSDK_OFFSET(0x186FEF90)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLETIMESPAN_OFFSET UNITYSDK_OFFSET(0x186F9180)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLE_OFFSET UNITYSDK_OFFSET(0x186F9520)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTTIMESPAN_OFFSET UNITYSDK_OFFSET(0x186F8D70)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x186F9020)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPANCONSTANT_OFFSET UNITYSDK_OFFSET(0x186FEF60)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x186F85E0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x186F8C30)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYTIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x186F8300)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x186F8290)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18700990)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TypeDefinitionIndex = 768;

	class TimeSpanParse : public ::System::Object
	{
	public:
		static ::System::Globalization::TimeSpanParse_TimeSpanToken* StaticGet_zero()
		{
			return (::System::Globalization::TimeSpanParse_TimeSpanToken*)Il2CppClass::FromTypeDefinitionIndex(TimeSpanParse_TypeDefinitionIndex)->GetStaticField(0x7210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE__CCTOR_OFFSET))();
		}

		static ::System::Void ValidateStyles(::System::Globalization::TimeSpanStyles a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Globalization::TimeSpanStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_VALIDATESTYLES_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryTimeToTicks(::System::Boolean a1, ::System::Globalization::TimeSpanParse_TimeSpanToken a2, ::System::Globalization::TimeSpanParse_TimeSpanToken a3, ::System::Globalization::TimeSpanParse_TimeSpanToken a4, ::System::Globalization::TimeSpanParse_TimeSpanToken a5, ::System::Globalization::TimeSpanParse_TimeSpanToken a6, ::System::Int64& a7)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYTIMETOTICKS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::TimeSpan Parse(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::IFormatProvider* a2, ::System::TimeSpan& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeSpan ParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4, ::System::TimeSpan& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::TimeSpan ParseExactMultiple(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTMULTIPLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseExactMultiple(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4, ::System::TimeSpan& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseTimeSpan(::System::String* a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanParse_TimeSpanResult& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::IFormatProvider*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ProcessTerminalState(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINALSTATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessTerminal_DHMSF(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_DHMSF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessTerminal_HMS_F_D(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HMS_F_D_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessTerminal_HM_S_D(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_S_D_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessTerminal_HM(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ProcessTerminal_D(::System::Globalization::TimeSpanParse_TimeSpanRawInfo& a1, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles a2, ::System::Globalization::TimeSpanParse_TimeSpanResult& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanRawInfo&, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_D_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseExactTimeSpan(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4, ::System::Globalization::TimeSpanParse_TimeSpanResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTTIMESPAN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseByFormat(::System::String* a1, ::System::String* a2, ::System::Globalization::TimeSpanStyles a3, ::System::Globalization::TimeSpanParse_TimeSpanResult& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::TimeSpanStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEBYFORMAT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ParseExactDigits(::System::Globalization::TimeSpanParse_TimeSpanTokenizer& a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanTokenizer&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ParseExactDigits_1(::System::Globalization::TimeSpanParse_TimeSpanTokenizer& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanTokenizer&, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ParseExactLiteral(::System::Globalization::TimeSpanParse_TimeSpanTokenizer& a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Boolean(*)(::System::Globalization::TimeSpanParse_TimeSpanTokenizer&, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTLITERAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseTimeSpanConstant(::System::String* a1, ::System::Globalization::TimeSpanParse_TimeSpanResult& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPANCONSTANT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseExactMultipleTimeSpan(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4, ::System::Globalization::TimeSpanParse_TimeSpanResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::Globalization::TimeSpanParse_TimeSpanResult&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTMULTIPLETIMESPAN_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
