#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/HebrewNumberParsingContext.h"
#include "unitysdk/System/Globalization/HebrewNumberParsingState.h"
#include "unitysdk/System/Globalization/HebrewNumber_HS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class HebrewNumber_HebrewValue; }

#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1792D230)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET UNITYSDK_OFFSET(0x1792D330)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17939D80)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1793A010)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumber_TypeDefinitionIndex = 753;

	class HebrewNumber : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Globalization::HebrewNumber_HebrewValue*>** StaticGet_HebrewValues()
		{
			return (::Il2CppArray<::System::Globalization::HebrewNumber_HebrewValue*>**)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x7690);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Globalization::HebrewNumber_HS>*>** StaticGet_NumberPasingState()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Globalization::HebrewNumber_HS>*>**)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x7698);
		}
		static ::System::Char* StaticGet_maxHebrewNumberCh()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x34E0);
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
