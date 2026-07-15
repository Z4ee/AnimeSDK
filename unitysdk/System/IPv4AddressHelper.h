#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET UNITYSDK_OFFSET(0x1917BC50)
#define SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1917BC20)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1917B3E0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET UNITYSDK_OFFSET(0x1917B970)
#define SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET UNITYSDK_OFFSET(0x1917B880)
#define SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET UNITYSDK_OFFSET(0x1917BF20)
#define SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x1917B830)

namespace System
{
	inline static constexpr unsigned int IPv4AddressHelper_TypeDefinitionIndex = 2474;

	class IPv4AddressHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 ParseHostNumber(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsValid(::System::Char* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean IsValidCanonical(::System::Char* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int64 ParseNonCanonical(::System::Char* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Boolean a4)
		{
			return ((::System::Int64(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Parse(::System::String* a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ParseCanonical(::System::String* a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET))(a1, a2, a3, a4);
		}
	};
}
