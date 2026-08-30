#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1E94C220)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1E94BF10)
#define SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x1E94BCD0)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET UNITYSDK_OFFSET(0x1E94C440)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET UNITYSDK_OFFSET(0x1E94C470)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET UNITYSDK_OFFSET(0x1E94BD40)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET UNITYSDK_OFFSET(0x1E94BD00)
#define SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E94BB60)
#define SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1E94B9E0)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1E94C6B0)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1E94C570)

namespace System
{
	inline static constexpr unsigned int DomainNameHelper_TypeDefinitionIndex = 2480;

	class DomainNameHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsValid(::System::Char* a1, ::System::UInt16 a2, ::System::Int32& a3, ::System::Boolean& a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsValidByIri(::System::Char* a1, ::System::UInt16 a2, ::System::Int32& a3, ::System::Boolean& a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* IdnEquivalent(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4, ::System::Boolean& a5)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* IdnEquivalent_1(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4, ::System::String*& a5)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsIdnAce(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsIdnAce_1(::System::Char* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET))(a1, a2);
		}

		static ::System::String* UnicodeEquivalent(::System::String* a1, ::System::Char* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* UnicodeEquivalent_1(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4, ::System::Boolean& a5)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsASCIILetterOrDigit(::System::Char a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsValidDomainLabelCharacter(::System::Char a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET))(a1, a2);
		}
	};
}
