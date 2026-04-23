#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x19F77B00)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_TRYSTRINGTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x19F79C10)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_TypeDefinitionIndex = 4865;

	class FormatProvider : public ::System::Object
	{
	public:
		static ::System::String* FormatBigInteger(::System::Int32 precision, ::System::Int32 scale, ::System::Boolean sign, ::System::String* format, ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::Il2CppArray<::System::Char>* digits, ::System::Int32 startIndex)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Globalization::NumberFormatInfo*, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_FORMATBIGINTEGER_OFFSET))(precision, scale, sign, format, numberFormatInfo, digits, startIndex);
		}

		static ::System::Boolean TryStringToBigInteger(::System::ReadOnlySpan_1<::System::Char> s, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::System::Text::StringBuilder* receiver, ::System::Int32& precision, ::System::Int32& scale, ::System::Boolean& sign)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Text::StringBuilder*, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_TRYSTRINGTOBIGINTEGER_OFFSET))(s, styles, numberFormatInfo, receiver, precision, scale, sign);
		}
	};
}
