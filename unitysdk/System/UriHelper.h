#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UnescapeMode.h"

namespace System { class String; }
namespace System { class UriParser; }

#define SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET UNITYSDK_OFFSET(0x1EA27B20)
#define SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET UNITYSDK_OFFSET(0x1EA27C20)
#define SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET UNITYSDK_OFFSET(0x1EA231C0)
#define SYSTEM_URIHELPER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1EA1BB70)
#define SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET UNITYSDK_OFFSET(0x1EA252A0)
#define SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET UNITYSDK_OFFSET(0x1EA27E90)
#define SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET UNITYSDK_OFFSET(0x1EA27DC0)
#define SYSTEM_URIHELPER_ISUNRESERVED_OFFSET UNITYSDK_OFFSET(0x1EA27D00)
#define SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1EA27EF0)
#define SYSTEM_URIHELPER_UNESCAPESTRING_1_OFFSET UNITYSDK_OFFSET(0x1EA23580)
#define SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1EA19490)
#define SYSTEM_URIHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA288B0)

namespace System
{
	inline static constexpr unsigned int UriHelper_TypeDefinitionIndex = 2475;

	class UriHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_HexUpperChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(UriHelper_TypeDefinitionIndex)->GetStaticField(0x28250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Char>* EscapeString(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32& a5, ::System::Boolean a6, ::System::Char a7, ::System::Char a8, ::System::Char a9)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPESTRING_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::Il2CppArray<::System::Char>* EnsureDestinationSize(::System::Char* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int16 a4, ::System::Int16 a5, ::System::Int32& a6, ::System::Int32 a7)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::Char*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int16, ::System::Int16, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::Il2CppArray<::System::Char>* UnescapeString(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32& a5, ::System::Char a6, ::System::Char a7, ::System::Char a8, ::System::UnescapeMode a9, ::System::UriParser* a10, ::System::Boolean a11)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Char, ::System::Char, ::System::Char, ::System::UnescapeMode, ::System::UriParser*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::Il2CppArray<::System::Char>* UnescapeString_1(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32& a5, ::System::Char a6, ::System::Char a7, ::System::Char a8, ::System::UnescapeMode a9, ::System::UriParser* a10, ::System::Boolean a11)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Char, ::System::Char, ::System::Char, ::System::UnescapeMode, ::System::UriParser*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_UNESCAPESTRING_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::Void MatchUTF8Sequence(::System::Char* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32& a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5, ::Il2CppArray<::System::Byte>* a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::System::Char*, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::Il2CppArray<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void EscapeAsciiChar(::System::Char a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Char, ::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Char EscapedAscii(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Char(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNotSafeForUnescape(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET))(a1);
		}

		static ::System::Boolean IsReservedUnreservedOrHash(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET))(a1);
		}

		static ::System::Boolean IsUnreserved(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISUNRESERVED_OFFSET))(a1);
		}

		static ::System::Boolean Is3986Unreserved(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET))(a1);
		}
	};
}
