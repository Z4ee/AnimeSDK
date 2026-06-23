#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"

#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1C8CE9F0)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1C8CEC10)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1C8CEC20)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_THROW_OFFSET UNITYSDK_OFFSET(0x1C8CEA00)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8CE970)

namespace System::Text
{
	inline static constexpr unsigned int DecoderExceptionFallbackBuffer_TypeDefinitionIndex = 455;

	class DecoderExceptionFallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* bytesUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(this, bytesUnknown, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Throw(::Il2CppArray<::System::Byte>* bytesUnknown, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_THROW_OFFSET))(this, bytesUnknown, index);
		}
	};
}
