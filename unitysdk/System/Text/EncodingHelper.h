#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODINGHELPER_GETDEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x1BC132A0)
#define SYSTEM_TEXT_ENCODINGHELPER_GET_UTF8UNMARKED_OFFSET UNITYSDK_OFFSET(0x1BC15970)
#define SYSTEM_TEXT_ENCODINGHELPER_INTERNALCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BC15CA0)
#define SYSTEM_TEXT_ENCODINGHELPER_INVOKEI18N_OFFSET UNITYSDK_OFFSET(0x1BC103D0)
#define SYSTEM_TEXT_ENCODINGHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC15CB0)

namespace System::Text
{
	inline static constexpr unsigned int EncodingHelper_TypeDefinitionIndex = 514;

	class EncodingHelper : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_utf8EncodingWithoutMarkers()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x11250);
		}
		static ::System::Reflection::Assembly** StaticGet_i18nAssembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x11258);
		}
		static ::System::Object** StaticGet_lockobj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x11260);
		}
		static ::System::Boolean* StaticGet_i18nDisabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EncodingHelper_TypeDefinitionIndex)->GetStaticField(0x7800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER__CCTOR_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF8Unmarked()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_GET_UTF8UNMARKED_OFFSET))();
		}

		static ::System::String* InternalCodePage(::System::Int32& a1)
		{
			return ((::System::String*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_INTERNALCODEPAGE_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetDefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_GETDEFAULTENCODING_OFFSET))();
		}

		static ::System::Object* InvokeI18N(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_INVOKEI18N_OFFSET))(a1, a2);
		}
	};
}
