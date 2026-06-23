#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA55520)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDPADDING_OFFSET UNITYSDK_OFFSET(0xA781B0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSTRINGSLOW_OFFSET UNITYSDK_OFFSET(0xA78230)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSTRING_OFFSET UNITYSDK_OFFSET(0xA78180)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSUBSTRING_1_OFFSET UNITYSDK_OFFSET(0xA781A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSUBSTRING_OFFSET UNITYSDK_OFFSET(0xA78190)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int StringBuilder_TypeDefinitionIndex = 91260;

	struct alignas(8) StringBuilder
	{
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Int32 offset; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER__CTOR_OFFSET))(this, buffer, position);
		}

		::System::Void AddCharacter(::System::Byte str)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDCHARACTER_OFFSET))(this, str);
		}

		::System::Void AddString(::Il2CppArray<::System::Byte>* str)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSTRING_OFFSET))(this, str);
		}

		::System::Void AddSubstring(::Il2CppArray<::System::Byte>* str, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSUBSTRING_OFFSET))(this, str, length);
		}

		::System::Void AddSubstring_1(::Il2CppArray<::System::Byte>* str, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSUBSTRING_1_OFFSET))(this, str, start, length);
		}

		::System::Void AddPadding(::System::Byte c, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDPADDING_OFFSET))(this, c, count);
		}

		::System::Void AddStringSlow(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGBUILDER_ADDSTRINGSLOW_OFFSET))(this, str);
		}
	};
}
