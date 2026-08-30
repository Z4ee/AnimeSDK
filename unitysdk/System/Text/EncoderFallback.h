#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC0BF60)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC0BE20)
#define SYSTEM_TEXT_ENCODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC0A780)
#define SYSTEM_TEXT_ENCODERFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0B670)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallback_TypeDefinitionIndex = 484;

	class EncoderFallback : public ::System::Object
	{
	public:
		static ::System::Text::EncoderFallback** StaticGet_exceptionFallback()
		{
			return (::System::Text::EncoderFallback**)Il2CppClass::FromTypeDefinitionIndex(EncoderFallback_TypeDefinitionIndex)->GetStaticField(0x10C90);
		}
		static ::System::Text::EncoderFallback** StaticGet_replacementFallback()
		{
			return (::System::Text::EncoderFallback**)Il2CppClass::FromTypeDefinitionIndex(EncoderFallback_TypeDefinitionIndex)->GetStaticField(0x10C98);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EncoderFallback_TypeDefinitionIndex)->GetStaticField(0x10CA0);
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
