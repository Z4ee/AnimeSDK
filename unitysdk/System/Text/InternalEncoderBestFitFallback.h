#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallback.h"

namespace System { class Object; }
namespace System::Text { class EncoderFallbackBuffer; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3B83B0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3B8590)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3B8630)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3B8580)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B83A0)

namespace System::Text
{
	inline static constexpr unsigned int InternalEncoderBestFitFallback_TypeDefinitionIndex = 463;

	class InternalEncoderBestFitFallback : public ::System::Text::EncoderFallback
	{
	public:
		::Il2CppArray<::System::Char>* arrayBestFit; // 0x18
		::System::Text::Encoding* encoding; // 0x20

		::System::Void _ctor(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK__CTOR_OFFSET))(this, encoding);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
