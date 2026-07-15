#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallback.h"

namespace System::Text { class EncoderFallbackBuffer; }
namespace System::Xml { class CharEntityEncoderFallbackBuffer; }

#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_CANREPLACEAT_OFFSET UNITYSDK_OFFSET(0x19F7E610)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x19F7E550)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x19F7E5E0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_RESET_OFFSET UNITYSDK_OFFSET(0x19F7E600)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK_SET_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0x19F7E5F0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7E540)

namespace System::Xml
{
	inline static constexpr unsigned int CharEntityEncoderFallback_TypeDefinitionIndex = 1789;

	class CharEntityEncoderFallback : public ::System::Text::EncoderFallback
	{
	public:
		::System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer; // 0x18
		::Il2CppArray<::System::Int32>* textContentMarks; // 0x20
		::System::Int32 endMarkPos; // 0x28
		::System::Int32 startOffset; // 0x2C
		::System::Int32 curMarkPos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Void set_StartOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_SET_STARTOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_RESET_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanReplaceAt(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACK_CANREPLACEAT_OFFSET))(this, a1);
		}
	};
}
