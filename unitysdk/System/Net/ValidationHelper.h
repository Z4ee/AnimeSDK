#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET UNITYSDK_OFFSET(0x1A156F40)
#define SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET UNITYSDK_OFFSET(0x1A156F30)
#define SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET UNITYSDK_OFFSET(0x1A154110)
#define SYSTEM_NET_VALIDATIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A156F50)

namespace System::Net
{
	inline static constexpr unsigned int ValidationHelper_TypeDefinitionIndex = 2738;

	class ValidationHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ValidationHelper_TypeDefinitionIndex)->GetStaticField(0x14C40);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidMethodChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ValidationHelper_TypeDefinitionIndex)->GetStaticField(0x14C48);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidParamChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ValidationHelper_TypeDefinitionIndex)->GetStaticField(0x14C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER__CCTOR_OFFSET))();
		}

		static ::System::String* MakeStringNull(::System::String* stringValue)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET))(stringValue);
		}

		static ::System::Boolean IsBlankString(::System::String* stringValue)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET))(stringValue);
		}

		static ::System::Boolean ValidateTcpPort(::System::Int32 port)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET))(port);
		}
	};
}
