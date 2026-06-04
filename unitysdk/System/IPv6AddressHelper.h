#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IPV6ADDRESSHELPER_CREATECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1AF52C80)
#define SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET UNITYSDK_OFFSET(0x1AF54020)
#define SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET UNITYSDK_OFFSET(0x1AF54200)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET UNITYSDK_OFFSET(0x1AF54600)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AF545F0)
#define SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1AF52080)
#define SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x1AF52170)
#define SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET UNITYSDK_OFFSET(0x1AF54190)

namespace System
{
	inline static constexpr unsigned int IPv6AddressHelper_TypeDefinitionIndex = 2471;

	class IPv6AddressHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* a1, ::System::Int32 a2, ::System::Boolean& a3, ::System::String*& a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* CreateCanonicalName(::System::UInt16* a1)
		{
			return ((::System::String*(*)(::System::UInt16*))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_CREATECANONICALNAME_OFFSET))(a1);
		}

		static ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> FindCompressionRange(::System::UInt16* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::System::UInt16*))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET))(a1);
		}

		static ::System::Boolean ShouldHaveIpv4Embedded(::System::UInt16* a1)
		{
			return ((::System::Boolean(*)(::System::UInt16*))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET))(a1);
		}

		static ::System::Boolean InternalIsValid(::System::Char* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsValid(::System::Char* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsValidStrict(::System::Char* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Parse(::System::String* a1, ::System::UInt16* a2, ::System::Int32 a3, ::System::String*& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt16*, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
