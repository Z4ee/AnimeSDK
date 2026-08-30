#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC176B0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC17900)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC17A50)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC178F0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0E030)

namespace System::Text
{
	inline static constexpr unsigned int InternalDecoderBestFitFallback_TypeDefinitionIndex = 468;

	class InternalDecoderBestFitFallback : public ::System::Text::DecoderFallback
	{
	public:
		::Il2CppArray<::System::Char>* arrayBestFit; // 0x18
		::System::Text::Encoding* encoding; // 0x20
		::System::Char cReplacement; // 0x28

		::System::Void _ctor(::System::Text::Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK__CTOR_OFFSET))(this, a1);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
