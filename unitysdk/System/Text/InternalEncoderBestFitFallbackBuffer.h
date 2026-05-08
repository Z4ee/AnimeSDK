#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

namespace System { class Object; }
namespace System::Text { class InternalEncoderBestFitFallback; }

#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1A3B8830)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3B86E0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1A3B8A40)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1A3B8660)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1A3B8A80)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1A3B8A60)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1A3B8A90)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET UNITYSDK_OFFSET(0x1A3B8720)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B8400)

namespace System::Text
{
	inline static constexpr unsigned int InternalEncoderBestFitFallbackBuffer_TypeDefinitionIndex = 464;

	class InternalEncoderBestFitFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InternalEncoderBestFitFallbackBuffer_TypeDefinitionIndex)->GetStaticField(0x3B0);
		}
		::System::Text::InternalEncoderBestFitFallback* oFallback; // 0x30
		::System::Int32 iSize; // 0x38
		::System::Int32 iCount; // 0x3C
		::System::Char cBestFit; // 0x40

		::System::Void _ctor(::System::Text::InternalEncoderBestFitFallback* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::InternalEncoderBestFitFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER__CTOR_OFFSET))(this, fallback);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		::System::Boolean Fallback(::System::Char charUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(this, charUnknown, index);
		}

		::System::Boolean Fallback_1(::System::Char charUnknownHigh, ::System::Char charUnknownLow, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, charUnknownHigh, charUnknownLow, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Boolean MovePrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Char TryBestFit(::System::Char cUnknown)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET))(this, cUnknown);
		}
	};
}
