#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/HebrewNumberParsingContext.h"
#include "unitysdk/System/Globalization/HebrewNumberParsingState.h"
#include "unitysdk/System/Globalization/HebrewNumber_HS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class HebrewNumber_HebrewValue; }

#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x186E2BA0)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET UNITYSDK_OFFSET(0x186E2CA0)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186EDC20)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186EE1C0)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumber_TypeDefinitionIndex = 752;

	class HebrewNumber : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Globalization::HebrewNumber_HebrewValue*>** StaticGet_HebrewValues()
		{
			return (::Il2CppArray<::System::Globalization::HebrewNumber_HebrewValue*>**)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x6E70);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Globalization::HebrewNumber_HS>*>** StaticGet_NumberPasingState()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Globalization::HebrewNumber_HS>*>**)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x6E78);
		}
		static ::System::Char* StaticGet_maxHebrewNumberCh()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(HebrewNumber_TypeDefinitionIndex)->GetStaticField(0x3490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER__CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET))(a1);
		}

		static ::System::Globalization::HebrewNumberParsingState ParseByChar(::System::Char a1, ::System::Globalization::HebrewNumberParsingContext& a2)
		{
			return ((::System::Globalization::HebrewNumberParsingState(*)(::System::Char, ::System::Globalization::HebrewNumberParsingContext&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET))(a1);
		}
	};
}
