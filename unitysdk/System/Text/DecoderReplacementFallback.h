#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x185F2380)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x185F23E0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185F2420)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_DEFAULTSTRING_OFFSET UNITYSDK_OFFSET(0x185F2370)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185EF160)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185F21D0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x185F0910)

namespace System::Text
{
	inline static constexpr unsigned int DecoderReplacementFallback_TypeDefinitionIndex = 473;

	class DecoderReplacementFallback : public ::System::Text::DecoderFallback
	{
	public:
		::System::String* strDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_DefaultString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_DEFAULTSTRING_OFFSET))(this);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
