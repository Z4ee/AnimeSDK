#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class Punycode; }

#define SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1BD28950)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BD28700)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_1_OFFSET UNITYSDK_OFFSET(0x1BD28850)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET UNITYSDK_OFFSET(0x1BD28770)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BD28760)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_1_OFFSET UNITYSDK_OFFSET(0x1BD296E0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET UNITYSDK_OFFSET(0x1BD29600)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET UNITYSDK_OFFSET(0x1BD28F50)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET UNITYSDK_OFFSET(0x1BD28BC0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET UNITYSDK_OFFSET(0x1BD28DC0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET UNITYSDK_OFFSET(0x1BD29290)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1BD29380)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET UNITYSDK_OFFSET(0x1BD290D0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD28670)

namespace System::Globalization
{
	inline static constexpr unsigned int IdnMapping_TypeDefinitionIndex = 792;

	class IdnMapping : public ::System::Object
	{
	public:
		::System::Globalization::Punycode* puny; // 0x10
		::System::Boolean use_std3; // 0x18
		::System::Boolean allow_unassigned; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetAscii(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET))(this, a1);
		}

		::System::String* GetAscii_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Convert(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ToAscii(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyLength(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET))(this, a1, a2);
		}

		::System::String* NamePrep(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyProhibitedCharacters(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyStd3AsciiRules(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET))(this, a1, a2);
		}

		::System::String* GetUnicode(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET))(this, a1);
		}

		::System::String* GetUnicode_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToUnicode(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET))(this, a1, a2);
		}
	};
}
