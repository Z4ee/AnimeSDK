#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IPV6ADDRESSHELPER_CREATECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x186B1680)
#define SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET UNITYSDK_OFFSET(0x186B2B90)
#define SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET UNITYSDK_OFFSET(0x186B2D70)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET UNITYSDK_OFFSET(0x186B3170)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x186B3160)
#define SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x186B09D0)
#define SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x186B0AC0)
#define SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET UNITYSDK_OFFSET(0x186B2D00)

namespace System
{
	inline static constexpr unsigned int IPv6AddressHelper_TypeDefinitionIndex = 2470;

	class IPv6AddressHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Boolean& isLoopback, ::System::String*& scopeId)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(str, start, isLoopback, scopeId);
		}

		static ::System::String* CreateCanonicalName(::System::UInt16* numbers)
		{
			return ((::System::String*(*)(::System::UInt16*))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_CREATECANONICALNAME_OFFSET))(numbers);
		}

		static ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> FindCompressionRange(::System::UInt16* numbers)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::System::UInt16*))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET))(numbers);
		}

		static ::System::Boolean ShouldHaveIpv4Embedded(::System::UInt16* numbers)
		{
			return ((::System::Boolean(*)(::System::UInt16*))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET))(numbers);
		}

		static ::System::Boolean InternalIsValid(::System::Char* name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean validateStrictAddress)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET))(name, start, end, validateStrictAddress);
		}

		static ::System::Boolean IsValid(::System::Char* name, ::System::Int32 start, ::System::Int32& end)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET))(name, start, end);
		}

		static ::System::Boolean IsValidStrict(::System::Char* name, ::System::Int32 start, ::System::Int32& end)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET))(name, start, end);
		}

		static ::System::Boolean Parse(::System::String* address, ::System::UInt16* numbers, ::System::Int32 start, ::System::String*& scopeId)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt16*, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET))(address, numbers, start, scopeId);
		}
	};
}
