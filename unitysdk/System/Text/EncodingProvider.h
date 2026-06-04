#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODINGPROVIDER_ADDPROVIDER_OFFSET UNITYSDK_OFFSET(0x185F5EC0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x185F7DF0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_2_OFFSET UNITYSDK_OFFSET(0x185F7B30)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_3_OFFSET UNITYSDK_OFFSET(0x185F7F80)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET UNITYSDK_OFFSET(0x185F6D00)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_1_OFFSET UNITYSDK_OFFSET(0x185FC4C0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x185FC400)
#define SYSTEM_TEXT_ENCODINGPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185FC580)

namespace System::Text
{
	inline static constexpr unsigned int EncodingProvider_TypeDefinitionIndex = 493;

	class EncodingProvider : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EncodingProvider_TypeDefinitionIndex)->GetStaticField(0x10EF0);
		}
		static ::Il2CppArray<::System::Text::EncodingProvider*>** StaticGet_s_providers()
		{
			return (::Il2CppArray<::System::Text::EncodingProvider*>**)Il2CppClass::FromTypeDefinitionIndex(EncodingProvider_TypeDefinitionIndex)->GetStaticField(0x10EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER__CCTOR_OFFSET))();
		}

		::System::Text::Encoding* GetEncoding(::System::String* a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::Encoding* GetEncoding_1(::System::Int32 a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void AddProvider(::System::Text::EncodingProvider* a1)
		{
			return ((::System::Void(*)(::System::Text::EncodingProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_ADDPROVIDER_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider(::System::Int32 a1)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_1(::System::String* a1)
		{
			return ((::System::Text::Encoding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_1_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_2(::System::Int32 a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_3(::System::String* a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_3_OFFSET))(a1, a2, a3);
		}
	};
}
