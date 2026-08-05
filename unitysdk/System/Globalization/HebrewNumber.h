#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/HebrewNumberParsingContext.h"
#include "unitysdk/System/Globalization/HebrewNumberParsingState.h"
#include "unitysdk/System/Globalization/HebrewNumber_HS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class HebrewNumber_HebrewValue; }

#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1CD3AD30)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET UNITYSDK_OFFSET(0x1CD3AAD0)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD3A730)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD3AE20)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3A720)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumber_TypeDefinitionIndex = 732;

	class HebrewNumber : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Globalization::HebrewNumber_HS>*>** StaticGet_NumberPasingState()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Globalization::HebrewNumber_HS>*>**)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		static ::Il2CppArray<::System::Globalization::HebrewNumber_HebrewValue*>** StaticGet_HebrewValues()
		{
			return (::Il2CppArray<::System::Globalization::HebrewNumber_HebrewValue*>**)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0xB18);
		}
		static ::System::Char* StaticGet_maxHebrewNumberCh()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x250);
		}
		// static const ::System::Int32 minHebrewNumberCh = 0x5D0; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER__CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::System::Int32 Number)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET))(Number);
		}

		static ::System::Globalization::HebrewNumberParsingState ParseByChar(::System::Char ch, ::System::Globalization::HebrewNumberParsingContext& context)
		{
			return ((::System::Globalization::HebrewNumberParsingState(*)(::System::Char, ::System::Globalization::HebrewNumberParsingContext&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET))(ch, context);
		}

		static ::System::Boolean IsDigit(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET))(ch);
		}
	};
}
