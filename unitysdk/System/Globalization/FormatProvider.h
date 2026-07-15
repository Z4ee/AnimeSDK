#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6B1CB0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_TRYSTRINGTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6B4330)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_TypeDefinitionIndex = 3836;

	class FormatProvider : public ::System::Object
	{
	public:
		static ::System::String* FormatBigInteger(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4, ::System::Globalization::NumberFormatInfo* a5, ::Il2CppArray<::System::Char>* a6, ::System::Int32 a7)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Globalization::NumberFormatInfo*, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_FORMATBIGINTEGER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean TryStringToBigInteger(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Text::StringBuilder* a4, ::System::Int32& a5, ::System::Int32& a6, ::System::Boolean& a7)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Text::StringBuilder*, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_TRYSTRINGTOBIGINTEGER_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
