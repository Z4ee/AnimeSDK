#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"

#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x185F0000)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x185F0810)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x185F0820)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_THROW_OFFSET UNITYSDK_OFFSET(0x185F0010)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x185EFFB0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderExceptionFallbackBuffer_TypeDefinitionIndex = 468;

	class DecoderExceptionFallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Throw(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_THROW_OFFSET))(this, a1, a2);
		}
	};
}
