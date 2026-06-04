#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x185F3A70)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x185F3930)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x185F2700)
#define SYSTEM_TEXT_ENCODERFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x185F3180)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallback_TypeDefinitionIndex = 481;

	class EncoderFallback : public ::System::Object
	{
	public:
		static ::System::Text::EncoderFallback** StaticGet_exceptionFallback()
		{
			return (::System::Text::EncoderFallback**)Il2CppClass::FromTypeDefinitionIndex(EncoderFallback_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EncoderFallback_TypeDefinitionIndex)->GetStaticField(0x10C18);
		}
		static ::System::Text::EncoderFallback** StaticGet_replacementFallback()
		{
			return (::System::Text::EncoderFallback**)Il2CppClass::FromTypeDefinitionIndex(EncoderFallback_TypeDefinitionIndex)->GetStaticField(0x10C20);
		}
		::System::Boolean bIsMicrosoftBestFitFallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Text::EncoderFallback* get_ReplacementFallback()
		{
			return ((::System::Text::EncoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET))();
		}

		static ::System::Text::EncoderFallback* get_ExceptionFallback()
		{
			return ((::System::Text::EncoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET))();
		}
	};
}
