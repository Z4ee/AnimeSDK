#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UnescapeMode.h"

namespace System { class String; }
namespace System { class UriParser; }

#define SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET UNITYSDK_OFFSET(0x1D2592E0)
#define SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET UNITYSDK_OFFSET(0x1D2352E0)
#define SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET UNITYSDK_OFFSET(0x1D234AD0)
#define SYSTEM_URIHELPER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1D258990)
#define SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET UNITYSDK_OFFSET(0x1D25A470)
#define SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET UNITYSDK_OFFSET(0x1D234B40)
#define SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET UNITYSDK_OFFSET(0x1D2595D0)
#define SYSTEM_URIHELPER_ISUNRESERVED_OFFSET UNITYSDK_OFFSET(0x1D259420)
#define SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D234BB0)
#define SYSTEM_URIHELPER_TESTFORSUBPATH_OFFSET UNITYSDK_OFFSET(0x1D258790)
#define SYSTEM_URIHELPER_UNESCAPESTRING_1_OFFSET UNITYSDK_OFFSET(0x1D2597B0)
#define SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1D259730)
#define SYSTEM_URIHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25A570)

namespace System
{
	inline static constexpr unsigned int UriHelper_TypeDefinitionIndex = 2677;

	class UriHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_HexUpperChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(UriHelper_TypeDefinitionIndex)->GetStaticField(0x36E0);
		}
		// static const ::System::Int16 c_MaxAsciiCharsReallocate = 0x28; // 0x0
		// static const ::System::Int16 c_MaxUnicodeCharsReallocate = 0x28; // 0x0
		// static const ::System::Int16 c_MaxUTF_8BytesPerUnicodeChar = 0x4; // 0x0
		// static const ::System::Int16 c_EncodedCharsPerByte = 0x3; // 0x0
		// static const ::System::String* RFC2396ReservedMarks; // 0x0
		// static const ::System::String* RFC3986ReservedMarks; // 0x0
		// static const ::System::String* RFC2396UnreservedMarks; // 0x0
		// static const ::System::String* RFC3986UnreservedMarks; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TestForSubPath(::System::Char* pMe, ::System::UInt16 meLength, ::System::Char* pShe, ::System::UInt16 sheLength, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Char*, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_TESTFORSUBPATH_OFFSET))(pMe, meLength, pShe, sheLength, ignoreCase);
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
