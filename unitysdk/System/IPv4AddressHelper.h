#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET UNITYSDK_OFFSET(0x1D5D1110)
#define SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D5D10E0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1D5D04F0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET UNITYSDK_OFFSET(0x1D5D0CA0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET UNITYSDK_OFFSET(0x1D5D0B90)
#define SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET UNITYSDK_OFFSET(0x1D5D13E0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x1D5D0B40)

namespace System
{
	inline static constexpr unsigned int IPv4AddressHelper_TypeDefinitionIndex = 2691;

	class IPv4AddressHelper : public ::System::Object
	{
	public:
		// static const ::System::Int64 Invalid = 0xFFFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int64 MaxIPv4Value = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 Octal = 0x8; // 0x0
		// static const ::System::Int32 Decimal = 0xA; // 0x0
		// static const ::System::Int32 Hex = 0x10; // 0x0
		// static const ::System::Int32 NumberOfLabels = 0x4; // 0x0

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
