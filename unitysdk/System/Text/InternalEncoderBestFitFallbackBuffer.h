#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

namespace System { class Object; }
namespace System::Text { class InternalEncoderBestFitFallback; }

#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1BC18370)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC18250)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1BC18580)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC181D0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1BC185C0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1BC185A0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1BC185D0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET UNITYSDK_OFFSET(0x1BC18290)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC17DD0)

namespace System::Text
{
	inline static constexpr unsigned int InternalEncoderBestFitFallbackBuffer_TypeDefinitionIndex = 480;

	class InternalEncoderBestFitFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InternalEncoderBestFitFallbackBuffer_TypeDefinitionIndex)->GetStaticField(0x11590);
		}
		::System::Text::InternalEncoderBestFitFallback* oFallback; // 0x30
		::System::Int32 iSize; // 0x38
		::System::Char cBestFit; // 0x3C
		::System::Int32 iCount; // 0x40

		::System::Void _ctor(::System::Text::InternalEncoderBestFitFallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::InternalEncoderBestFitFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		::System::Boolean Fallback(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean Fallback_1(::System::Char a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, a1, a2, a3);
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

		::System::Char TryBestFit(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET))(this, a1);
		}
	};
}
