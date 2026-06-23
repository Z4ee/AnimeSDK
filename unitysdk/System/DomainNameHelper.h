#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1C6CFFE0)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_2_OFFSET UNITYSDK_OFFSET(0x1C6D02E0)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1C6CFFA0)
#define SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x1C6CFD60)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET UNITYSDK_OFFSET(0x1C6D04F0)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET UNITYSDK_OFFSET(0x1C6D0520)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET UNITYSDK_OFFSET(0x1C6CFDD0)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET UNITYSDK_OFFSET(0x1C6CFD90)
#define SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C6CFBF0)
#define SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1C6CF9E0)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1C6D0790)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1C6D0650)
#define SYSTEM_DOMAINNAMEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CF9D0)

namespace System
{
	inline static constexpr unsigned int DomainNameHelper_TypeDefinitionIndex = 2690;

	class DomainNameHelper : public ::System::Object
	{
	public:
		// static const ::System::Char c_DummyChar; // 0x0
		// static const ::System::String* Localhost; // 0x0
		// static const ::System::String* Loopback; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER__CTOR_OFFSET))(this);
		}

		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& loopback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET))(str, start, end, loopback);
		}

		static ::System::Boolean IsValid(::System::Char* name, ::System::UInt16 pos, ::System::Int32& returnedEnd, ::System::Boolean& notCanonical, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET))(name, pos, returnedEnd, notCanonical, notImplicitFile);
		}

		static ::System::Boolean IsValidByIri(::System::Char* name, ::System::UInt16 pos, ::System::Int32& returnedEnd, ::System::Boolean& notCanonical, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET))(name, pos, returnedEnd, notCanonical, notImplicitFile);
		}

		static ::System::String* IdnEquivalent(::System::String* hostname)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET))(hostname);
		}

		static ::System::String* IdnEquivalent_1(::System::Char* hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::Boolean& atLeastOneValidIdn)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET))(hostname, start, end, allAscii, atLeastOneValidIdn);
		}

		static ::System::String* IdnEquivalent_2(::System::Char* hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::String*& bidiStrippedHost)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_2_OFFSET))(hostname, start, end, allAscii, bidiStrippedHost);
		}

		static ::System::Boolean IsIdnAce(::System::String* input, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET))(input, index);
		}

		static ::System::Boolean IsIdnAce_1(::System::Char* input, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET))(input, index);
		}

		static ::System::String* UnicodeEquivalent(::System::String* idnHost, ::System::Char* hostname, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET))(idnHost, hostname, start, end);
		}

		static ::System::String* UnicodeEquivalent_1(::System::Char* hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::Boolean& atLeastOneValidIdn)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET))(hostname, start, end, allAscii, atLeastOneValidIdn);
		}

		static ::System::Boolean IsASCIILetterOrDigit(::System::Char character, ::System::Boolean& notCanonical)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET))(character, notCanonical);
		}

		static ::System::Boolean IsValidDomainLabelCharacter(::System::Char character, ::System::Boolean& notCanonical)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET))(character, notCanonical);
		}
	};
}
