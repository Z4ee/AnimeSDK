#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class Punycode; }

#define SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1793BF80)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1793BD20)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_1_OFFSET UNITYSDK_OFFSET(0x1793BE80)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET UNITYSDK_OFFSET(0x1793BDA0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1793BD90)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_1_OFFSET UNITYSDK_OFFSET(0x1793CDF0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET UNITYSDK_OFFSET(0x1793CD10)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET UNITYSDK_OFFSET(0x1793C660)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET UNITYSDK_OFFSET(0x1793C270)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET UNITYSDK_OFFSET(0x1793C470)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET UNITYSDK_OFFSET(0x1793C9A0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1793CA90)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET UNITYSDK_OFFSET(0x1793C7E0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1793BC90)

namespace System::Globalization
{
	inline static constexpr unsigned int IdnMapping_TypeDefinitionIndex = 790;

	class IdnMapping : public ::System::Object
	{
	public:
		::System::Globalization::Punycode* puny; // 0x10
		::System::Boolean allow_unassigned; // 0x18
		::System::Boolean use_std3; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetAscii(::System::String* unicode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET))(this, unicode);
		}

		::System::String* GetAscii_1(::System::String* unicode, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_1_OFFSET))(this, unicode, index, count);
		}

		::System::String* Convert(::System::String* input, ::System::Int32 index, ::System::Int32 count, ::System::Boolean toAscii)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET))(this, input, index, count, toAscii);
		}

		::System::String* ToAscii(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET))(this, s, offset);
		}

		::System::Void VerifyLength(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET))(this, s, offset);
		}

		::System::String* NamePrep(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET))(this, s, offset);
		}

		::System::Void VerifyProhibitedCharacters(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET))(this, s, offset);
		}

		::System::Void VerifyStd3AsciiRules(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET))(this, s, offset);
		}

		::System::String* GetUnicode(::System::String* ascii)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET))(this, ascii);
		}

		::System::String* GetUnicode_1(::System::String* ascii, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_1_OFFSET))(this, ascii, index, count);
		}

		::System::String* ToUnicode(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET))(this, s, offset);
		}
	};
}
