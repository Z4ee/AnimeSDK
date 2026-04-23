#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x17836BE0)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x17836B80)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x178330E0)
#define SYSTEM_TEXT_DECODERFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17836170)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallback_TypeDefinitionIndex = 471;

	class DecoderFallback : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DecoderFallback_TypeDefinitionIndex)->GetStaticField(0xB730);
		}
		static ::System::Text::DecoderFallback** StaticGet_exceptionFallback()
		{
			return (::System::Text::DecoderFallback**)Il2CppClass::FromTypeDefinitionIndex(DecoderFallback_TypeDefinitionIndex)->GetStaticField(0xB738);
		}
		static ::System::Text::DecoderFallback** StaticGet_replacementFallback()
		{
			return (::System::Text::DecoderFallback**)Il2CppClass::FromTypeDefinitionIndex(DecoderFallback_TypeDefinitionIndex)->GetStaticField(0xB740);
		}
		::System::Boolean bIsMicrosoftBestFitFallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Text::DecoderFallback* get_ReplacementFallback()
		{
			return ((::System::Text::DecoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET))();
		}

		static ::System::Text::DecoderFallback* get_ExceptionFallback()
		{
			return ((::System::Text::DecoderFallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET))();
		}
	};
}
