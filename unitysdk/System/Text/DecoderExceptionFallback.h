#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8CE930)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8CE990)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8CE9E0)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1C8CE980)
#define SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8CE920)

namespace System::Text
{
	inline static constexpr unsigned int DecoderExceptionFallback_TypeDefinitionIndex = 454;

	class DecoderExceptionFallback : public ::System::Text::DecoderFallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
