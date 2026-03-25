#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODERFALLBACK_GET_EXCEPTIONFALLBACK_OFFSET UNITYSDK_OFFSET(0x1620A340)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1620A2E0)
#define SYSTEM_TEXT_DECODERFALLBACK_GET_REPLACEMENTFALLBACK_OFFSET UNITYSDK_OFFSET(0x16206780)
#define SYSTEM_TEXT_DECODERFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x162098D0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallback_TypeDefinitionIndex = 471;

	class DecoderFallback : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DecoderFallback_TypeDefinitionIndex)->GetStaticField(0x5BC0);
		}
		static ::System::Text::DecoderFallback** StaticGet_exceptionFallback()
		{
			return (::System::Text::DecoderFallback**)Il2CppClass::FromTypeDefinitionIndex(DecoderFallback_TypeDefinitionIndex)->GetStaticField(0x5BC8);
		}
		static ::System::Text::DecoderFallback** StaticGet_replacementFallback()
		{
			return (::System::Text::DecoderFallback**)Il2CppClass::FromTypeDefinitionIndex(DecoderFallback_TypeDefinitionIndex)->GetStaticField(0x5BD0);
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
