#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x1CCC3570)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALGETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1CCC3540)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CCC3510)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALRESET_OFFSET UNITYSDK_OFFSET(0x1CCC34E0)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1CCC34B0)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER_THROWLASTCHARRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1CCC3670)
#define SYSTEM_TEXT_ENCODERFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC3730)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackBuffer_TypeDefinitionIndex = 469;

	class EncoderFallbackBuffer : public ::System::Object
	{
	public:
		::System::Text::EncoderNLS* encoder; // 0x10
		::System::Char* charStart; // 0x18
		::System::Boolean setEncoder; // 0x20
		::System::Boolean bUsedEncoder; // 0x21
		::System::Boolean bFallingBack; // 0x22
		::System::Int32 iRecursionCount; // 0x24
		::System::Char* charEnd; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Void InternalReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALRESET_OFFSET))(this);
		}

		::System::Void InternalInitialize(::System::Char* charStart, ::System::Char* charEnd, ::System::Text::EncoderNLS* encoder, ::System::Boolean setEncoder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*, ::System::Text::EncoderNLS*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET))(this, charStart, charEnd, encoder, setEncoder);
		}

		::System::Char InternalGetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALGETNEXTCHAR_OFFSET))(this);
		}

		::System::Boolean InternalFallback(::System::Char ch, ::System::Char*& chars)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, ch, chars);
		}

		::System::Void ThrowLastCharRecursive(::System::Int32 charRecursive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKBUFFER_THROWLASTCHARRECURSIVE_OFFSET))(this, charRecursive);
		}
	};
}
