#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B3B5CD0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3B5B50)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1B3B6220)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1B3B6240)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1B3B6230)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B5AF0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderExceptionFallbackBuffer_TypeDefinitionIndex = 482;

	class EncoderExceptionFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Boolean Fallback(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean Fallback_1(::System::Char a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, a1, a2, a3);
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
