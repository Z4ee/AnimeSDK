#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET UNITYSDK_OFFSET(0x1A0EAAA0)
#define SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A0EAA70)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1A0EA060)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET UNITYSDK_OFFSET(0x1A0EA7C0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET UNITYSDK_OFFSET(0x1A0EA6B0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET UNITYSDK_OFFSET(0x1A0EAD70)
#define SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x1A0EA660)

namespace System
{
	inline static constexpr unsigned int IPv4AddressHelper_TypeDefinitionIndex = 2470;

	class IPv4AddressHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& isLoopback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(str, start, end, isLoopback);
		}

		static ::System::Int32 ParseHostNumber(::System::String* str, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET))(str, start, end);
		}

		static ::System::Boolean IsValid(::System::Char* name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean allowIPv6, ::System::Boolean notImplicitFile, ::System::Boolean unknownScheme)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET))(name, start, end, allowIPv6, notImplicitFile, unknownScheme);
		}

		static ::System::Boolean IsValidCanonical(::System::Char* name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean allowIPv6, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET))(name, start, end, allowIPv6, notImplicitFile);
		}

		static ::System::Int64 ParseNonCanonical(::System::Char* name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean notImplicitFile)
		{
			return ((::System::Int64(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET))(name, start, end, notImplicitFile);
		}

		static ::System::Boolean Parse(::System::String* name, ::System::Byte* numbers, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET))(name, numbers, start, end);
		}

		static ::System::Boolean ParseCanonical(::System::String* name, ::System::Byte* numbers, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET))(name, numbers, start, end);
		}
	};
}
