#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO_FORMAT_OFFSET UNITYSDK_OFFSET(0x1B92A770)
#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO_GETACTIVESECTION_OFFSET UNITYSDK_OFFSET(0x1B9299A0)
#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO_PARSE_OFFSET UNITYSDK_OFFSET(0x1B929F70)
#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92B9D0)

namespace System
{
	inline static constexpr unsigned int NumberFormatter_CustomInfo_TypeDefinitionIndex = 400;

	class NumberFormatter_CustomInfo : public ::System::Object
	{
	public:
		::System::Int32 IntegerHeadPos; // 0x10
		::System::Int32 ExponentDigits; // 0x14
		::System::Int32 DecimalTailSharpDigits; // 0x18
		::System::Boolean UseGroup; // 0x1C
		::System::Boolean UseExponent; // 0x1D
		::System::Boolean ExponentNegativeSignOnly; // 0x1E
		::System::Int32 DecimalDigits; // 0x20
		::System::Int32 IntegerDigits; // 0x24
		::System::Int32 DecimalPointPos; // 0x28
		::System::Int32 DividePlaces; // 0x2C
		::System::Int32 Percents; // 0x30
		::System::Int32 IntegerHeadSharpDigits; // 0x34
		::System::Int32 Permilles; // 0x38
		::System::Int32 ExponentTailSharpDigits; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void GetActiveSection(::System::String* format, ::System::Boolean& positive, ::System::Boolean zero, ::System::Int32& offset, ::System::Int32& length)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean&, ::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO_GETACTIVESECTION_OFFSET))(format, positive, zero, offset, length);
		}

		static ::System::NumberFormatter_CustomInfo* Parse(::System::String* format, ::System::Int32 offset, ::System::Int32 length, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::NumberFormatter_CustomInfo*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO_PARSE_OFFSET))(format, offset, length, nfi);
		}

		::System::String* Format(::System::String* format, ::System::Int32 offset, ::System::Int32 length, ::System::Globalization::NumberFormatInfo* nfi, ::System::Boolean positive, ::System::Text::StringBuilder* sb_int, ::System::Text::StringBuilder* sb_dec, ::System::Text::StringBuilder* sb_exp)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Boolean, ::System::Text::StringBuilder*, ::System::Text::StringBuilder*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO_FORMAT_OFFSET))(this, format, offset, length, nfi, positive, sb_int, sb_dec, sb_exp);
		}
	};
}
