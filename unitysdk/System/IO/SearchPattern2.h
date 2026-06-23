#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class SearchPattern2_Op; }

#define SYSTEM_IO_SEARCHPATTERN2_COMPILE_OFFSET UNITYSDK_OFFSET(0x1C1C69D0)
#define SYSTEM_IO_SEARCHPATTERN2_GET_HASWILDCARD_OFFSET UNITYSDK_OFFSET(0x1C1C6FD0)
#define SYSTEM_IO_SEARCHPATTERN2_ISMATCH_1_OFFSET UNITYSDK_OFFSET(0x1C1C6F50)
#define SYSTEM_IO_SEARCHPATTERN2_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C1C6D10)
#define SYSTEM_IO_SEARCHPATTERN2_MATCH_OFFSET UNITYSDK_OFFSET(0x1C1C6D80)
#define SYSTEM_IO_SEARCHPATTERN2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1C6FE0)
#define SYSTEM_IO_SEARCHPATTERN2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1C69C0)
#define SYSTEM_IO_SEARCHPATTERN2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C50F0)

namespace System::IO
{
	inline static constexpr unsigned int SearchPattern2_TypeDefinitionIndex = 3234;

	class SearchPattern2 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SearchPattern2_TypeDefinitionIndex)->GetStaticField(0x3590);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_WildcardChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SearchPattern2_TypeDefinitionIndex)->GetStaticField(0x3598);
		}
		::System::String* pattern; // 0x10
		::System::IO::SearchPattern2_Op* ops; // 0x18
		::System::Boolean hasWildcard; // 0x20
		::System::Boolean ignore; // 0x21

		::System::Void _ctor(::System::String* pattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2__CTOR_OFFSET))(this, pattern);
		}

		::System::Void _ctor_1(::System::String* pattern, ::System::Boolean ignore)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2__CTOR_1_OFFSET))(this, pattern, ignore);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2__CCTOR_OFFSET))();
		}

		::System::Boolean IsMatch(::System::String* text, ::System::Boolean ignorecase)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2_ISMATCH_OFFSET))(this, text, ignorecase);
		}

		::System::Boolean IsMatch_1(::System::String* text)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2_ISMATCH_1_OFFSET))(this, text);
		}

		::System::Boolean get_HasWildcard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2_GET_HASWILDCARD_OFFSET))(this);
		}

		::System::Void Compile(::System::String* pattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2_COMPILE_OFFSET))(this, pattern);
		}

		::System::Boolean Match(::System::IO::SearchPattern2_Op* op, ::System::String* text, ::System::Int32 ptr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::SearchPattern2_Op*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2_MATCH_OFFSET))(this, op, text, ptr);
		}
	};
}
