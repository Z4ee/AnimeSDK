#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderNLS.h"

namespace System::Text { class UTF32Encoding; }

#define SYSTEM_TEXT_UTF32ENCODING_UTF32DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x1B3D0F70)
#define SYSTEM_TEXT_UTF32ENCODING_UTF32DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x1B3D0ED0)
#define SYSTEM_TEXT_UTF32ENCODING_UTF32DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3D0680)

namespace System::Text
{
	inline static constexpr unsigned int UTF32Encoding_UTF32Decoder_TypeDefinitionIndex = 503;

	class UTF32Encoding_UTF32Decoder : public ::System::Text::DecoderNLS
	{
	public:
		::System::Int32 iChar; // 0x30
		::System::Int32 readByteCount; // 0x34

		::System::Void _ctor(::System::Text::UTF32Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF32Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_UTF32DECODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_UTF32DECODER_RESET_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_UTF32DECODER_GET_HASSTATE_OFFSET))(this);
		}
	};
}
