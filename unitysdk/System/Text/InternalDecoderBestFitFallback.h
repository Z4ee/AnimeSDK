#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x17842740)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x17842920)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178429B0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x17842910)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1783B7B0)

namespace System::Text
{
	inline static constexpr unsigned int InternalDecoderBestFitFallback_TypeDefinitionIndex = 466;

	class InternalDecoderBestFitFallback : public ::System::Text::DecoderFallback
	{
	public:
		::System::Text::Encoding* encoding; // 0x18
		::Il2CppArray<::System::Char>* arrayBestFit; // 0x20
		::System::Char cReplacement; // 0x28

		::System::Void _ctor(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK__CTOR_OFFSET))(this, encoding);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
