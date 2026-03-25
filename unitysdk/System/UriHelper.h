#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UnescapeMode.h"

namespace System { class String; }
namespace System { class UriParser; }

#define SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET UNITYSDK_OFFSET(0x18777C30)
#define SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET UNITYSDK_OFFSET(0x18777D30)
#define SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET UNITYSDK_OFFSET(0x18773750)
#define SYSTEM_URIHELPER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1876C470)
#define SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET UNITYSDK_OFFSET(0x18775590)
#define SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET UNITYSDK_OFFSET(0x18777FF0)
#define SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET UNITYSDK_OFFSET(0x18777F20)
#define SYSTEM_URIHELPER_ISUNRESERVED_OFFSET UNITYSDK_OFFSET(0x18777E60)
#define SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET UNITYSDK_OFFSET(0x18778050)
#define SYSTEM_URIHELPER_UNESCAPESTRING_1_OFFSET UNITYSDK_OFFSET(0x18773B10)
#define SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x187699A0)
#define SYSTEM_URIHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18778760)

namespace System
{
	inline static constexpr unsigned int UriHelper_TypeDefinitionIndex = 2463;

	class UriHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_HexUpperChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(UriHelper_TypeDefinitionIndex)->GetStaticField(0xD660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Char>* EscapeString(::System::String* input, ::System::Int32 start, ::System::Int32 end, ::Il2CppArray<::System::Char>* dest, ::System::Int32& destPos, ::System::Boolean isUriString, ::System::Char force1, ::System::Char force2, ::System::Char rsvd)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPESTRING_OFFSET))(input, start, end, dest, destPos, isUriString, force1, force2, rsvd);
		}

		static ::Il2CppArray<::System::Char>* EnsureDestinationSize(::System::Char* pStr, ::Il2CppArray<::System::Char>* dest, ::System::Int32 currentInputPos, ::System::Int16 charsToAdd, ::System::Int16 minReallocateChars, ::System::Int32& destPos, ::System::Int32 prevInputPos)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::Char*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int16, ::System::Int16, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET))(pStr, dest, currentInputPos, charsToAdd, minReallocateChars, destPos, prevInputPos);
		}

		static ::Il2CppArray<::System::Char>* UnescapeString(::System::String* input, ::System::Int32 start, ::System::Int32 end, ::Il2CppArray<::System::Char>* dest, ::System::Int32& destPosition, ::System::Char rsvd1, ::System::Char rsvd2, ::System::Char rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, ::System::Boolean isQuery)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Char, ::System::Char, ::System::Char, ::System::UnescapeMode, ::System::UriParser*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET))(input, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery);
		}

		static ::Il2CppArray<::System::Char>* UnescapeString_1(::System::Char* pStr, ::System::Int32 start, ::System::Int32 end, ::Il2CppArray<::System::Char>* dest, ::System::Int32& destPosition, ::System::Char rsvd1, ::System::Char rsvd2, ::System::Char rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, ::System::Boolean isQuery)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Char, ::System::Char, ::System::Char, ::System::UnescapeMode, ::System::UriParser*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_UNESCAPESTRING_1_OFFSET))(pStr, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery);
		}

		static ::System::Void MatchUTF8Sequence(::System::Char* pDest, ::Il2CppArray<::System::Char>* dest, ::System::Int32& destOffset, ::Il2CppArray<::System::Char>* unescapedChars, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteCount, ::System::Boolean isQuery, ::System::Boolean iriParsing)
		{
			return ((::System::Void(*)(::System::Char*, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::Il2CppArray<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET))(pDest, dest, destOffset, unescapedChars, charCount, bytes, byteCount, isQuery, iriParsing);
		}

		static ::System::Void EscapeAsciiChar(::System::Char ch, ::Il2CppArray<::System::Char>* to, ::System::Int32& pos)
		{
			return ((::System::Void(*)(::System::Char, ::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET))(ch, to, pos);
		}

		static ::System::Char EscapedAscii(::System::Char digit, ::System::Char next)
		{
			return ((::System::Char(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET))(digit, next);
		}

		static ::System::Boolean IsNotSafeForUnescape(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET))(ch);
		}

		static ::System::Boolean IsReservedUnreservedOrHash(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET))(c);
		}

		static ::System::Boolean IsUnreserved(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISUNRESERVED_OFFSET))(c);
		}

		static ::System::Boolean Is3986Unreserved(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET))(c);
		}
	};
}
