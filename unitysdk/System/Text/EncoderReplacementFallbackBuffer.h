#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

namespace System { class String; }
namespace System::Text { class EncoderReplacementFallback; }

#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B3B7F40)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3B7E90)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1B3B8170)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1B3B8200)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1B3B81E0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1B3B8210)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B7D60)

namespace System::Text
{
	inline static constexpr unsigned int EncoderReplacementFallbackBuffer_TypeDefinitionIndex = 488;

	class EncoderReplacementFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		::System::String* strDefault; // 0x30
		::System::Int32 fallbackCount; // 0x38
		::System::Int32 fallbackIndex; // 0x3C

		::System::Void _ctor(::System::Text::EncoderReplacementFallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderReplacementFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Fallback(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean Fallback_1(::System::Char a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Boolean MovePrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_RESET_OFFSET))(this);
		}
	};
}
