#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_1_OFFSET UNITYSDK_OFFSET(0x185FADA0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x185FACF0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET UNITYSDK_OFFSET(0x185FADB0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x185FAE50)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x185FAE00)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET UNITYSDK_OFFSET(0x185FADD0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET UNITYSDK_OFFSET(0x185FADF0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185FAF90)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x185FADC0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x185FAC10)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_EncodingCharBuffer_TypeDefinitionIndex = 489;

	class Encoding_EncodingCharBuffer : public ::System::Object
	{
	public:
		::System::Text::Encoding* enc; // 0x10
		::System::Text::DecoderFallbackBuffer* fallbackBuffer; // 0x18
		::System::Text::DecoderNLS* decoder; // 0x20
		::System::Char* charEnd; // 0x28
		::System::Char* charStart; // 0x30
		::System::Byte* byteStart; // 0x38
		::System::Byte* bytes; // 0x40
		::System::Byte* byteEnd; // 0x48
		::System::Int32 charCountResult; // 0x50
		::System::Char* chars; // 0x58

		::System::Void _ctor(::System::Text::Encoding* a1, ::System::Text::DecoderNLS* a2, ::System::Char* a3, ::System::Int32 a4, ::System::Byte* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*, ::System::Text::DecoderNLS*, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean AddChar(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddChar_1(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_1_OFFSET))(this, a1);
		}

		::System::Void AdjustBytes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET))(this, a1);
		}

		::System::Boolean get_MoreData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET))(this);
		}

		::System::Byte GetNextByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET))(this);
		}

		::System::Int32 get_BytesUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET))(this);
		}

		::System::Boolean Fallback(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean Fallback_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_COUNT_OFFSET))(this);
		}
	};
}
