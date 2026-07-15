#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO_FORMAT_OFFSET UNITYSDK_OFFSET(0x1AFB9410)
#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO_GETACTIVESECTION_OFFSET UNITYSDK_OFFSET(0x1AFB8790)
#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO_PARSE_OFFSET UNITYSDK_OFFSET(0x1AFB8B10)
#define SYSTEM_NUMBERFORMATTER_CUSTOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBA940)

namespace System
{
	inline static constexpr unsigned int NumberFormatter_CustomInfo_TypeDefinitionIndex = 412;

	class NumberFormatter_CustomInfo : public ::System::Object
	{
	public:
		::System::Int32 IntegerHeadSharpDigits; // 0x10
		::System::Boolean UseGroup; // 0x14
		::System::Boolean ExponentNegativeSignOnly; // 0x15
		::System::Boolean UseExponent; // 0x16
		::System::Int32 Percents; // 0x18
		::System::Int32 IntegerHeadPos; // 0x1C
		::System::Int32 ExponentDigits; // 0x20
		::System::Int32 ExponentTailSharpDigits; // 0x24
		::System::Int32 DividePlaces; // 0x28
		::System::Int32 DecimalTailSharpDigits; // 0x2C
		::System::Int32 DecimalPointPos; // 0x30
		::System::Int32 Permilles; // 0x34
		::System::Int32 IntegerDigits; // 0x38
		::System::Int32 DecimalDigits; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void GetActiveSection(::System::String* a1, ::System::Boolean& a2, ::System::Boolean a3, ::System::Int32& a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean&, ::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO_GETACTIVESECTION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::NumberFormatter_CustomInfo* Parse(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Globalization::NumberFormatInfo* a4)
		{
			return ((::System::NumberFormatter_CustomInfo*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO_PARSE_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* Format(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Globalization::NumberFormatInfo* a4, ::System::Boolean a5, ::System::Text::StringBuilder* a6, ::System::Text::StringBuilder* a7, ::System::Text::StringBuilder* a8)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Boolean, ::System::Text::StringBuilder*, ::System::Text::StringBuilder*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CUSTOMINFO_FORMAT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
