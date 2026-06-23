#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"

namespace System { class String; }
namespace System::Text { class DecoderReplacementFallback; }

#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADD4A30)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1ADD4A70)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1ADD4B00)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADD4B30)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1ADD4B10)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD4A00)

namespace System::Text
{
	inline static constexpr unsigned int DecoderReplacementFallbackBuffer_TypeDefinitionIndex = 461;

	class DecoderReplacementFallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		::System::String* strDefault; // 0x20
		::System::Int32 fallbackIndex; // 0x28
		::System::Int32 fallbackCount; // 0x2C

		::System::Void _ctor(::System::Text::DecoderReplacementFallback* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::DecoderReplacementFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER__CTOR_OFFSET))(this, fallback);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* bytesUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET))(this, bytesUnknown, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Byte>* bytes, ::System::Byte* pBytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, bytes, pBytes);
		}
	};
}
