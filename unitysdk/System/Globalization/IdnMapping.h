#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class Punycode; }

#define SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1953D340)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1953D070)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_1_OFFSET UNITYSDK_OFFSET(0x1953D2C0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_2_OFFSET UNITYSDK_OFFSET(0x1953D1C0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET UNITYSDK_OFFSET(0x1953D0E0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1953D0D0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_1_OFFSET UNITYSDK_OFFSET(0x1953E550)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_2_OFFSET UNITYSDK_OFFSET(0x1953E450)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET UNITYSDK_OFFSET(0x1953E370)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GET_ALLOWUNASSIGNED_OFFSET UNITYSDK_OFFSET(0x1953D030)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GET_USESTD3ASCIIRULES_OFFSET UNITYSDK_OFFSET(0x1953D050)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET UNITYSDK_OFFSET(0x1953DBC0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_SET_ALLOWUNASSIGNED_OFFSET UNITYSDK_OFFSET(0x1953D040)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_SET_USESTD3ASCIIRULES_OFFSET UNITYSDK_OFFSET(0x1953D060)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET UNITYSDK_OFFSET(0x1953D6C0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET UNITYSDK_OFFSET(0x1953D9B0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET UNITYSDK_OFFSET(0x1953DF80)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1953E070)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET UNITYSDK_OFFSET(0x1953DD40)
#define SYSTEM_GLOBALIZATION_IDNMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1953CFD0)

namespace System::Globalization
{
	inline static constexpr unsigned int IdnMapping_TypeDefinitionIndex = 778;

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

		::System::Boolean get_AllowUnassigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GET_ALLOWUNASSIGNED_OFFSET))(this);
		}

		::System::Void set_AllowUnassigned(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_SET_ALLOWUNASSIGNED_OFFSET))(this, value);
		}

		::System::Boolean get_UseStd3AsciiRules()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GET_USESTD3ASCIIRULES_OFFSET))(this);
		}

		::System::Void set_UseStd3AsciiRules(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_SET_USESTD3ASCIIRULES_OFFSET))(this, value);
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

		::System::String* GetAscii_1(::System::String* unicode, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_1_OFFSET))(this, unicode, index);
		}

		::System::String* GetAscii_2(::System::String* unicode, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_2_OFFSET))(this, unicode, index, count);
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

		::System::String* GetUnicode_1(::System::String* ascii, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_1_OFFSET))(this, ascii, index);
		}

		::System::String* GetUnicode_2(::System::String* ascii, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_2_OFFSET))(this, ascii, index, count);
		}

		::System::String* ToUnicode(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET))(this, s, offset);
		}
	};
}
