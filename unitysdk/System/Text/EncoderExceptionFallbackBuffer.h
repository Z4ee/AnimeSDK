#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1620CC20)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1620CAA0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1620D170)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1620D190)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1620D180)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1620CA40)

namespace System::Text
{
	inline static constexpr unsigned int EncoderExceptionFallbackBuffer_TypeDefinitionIndex = 480;

	class EncoderExceptionFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Boolean Fallback(::System::Char charUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(this, charUnknown, index);
		}

		::System::Boolean Fallback_1(::System::Char charUnknownHigh, ::System::Char charUnknownLow, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, charUnknownHigh, charUnknownLow, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Boolean MovePrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}
	};
}
