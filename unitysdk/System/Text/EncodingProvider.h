#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x18C83600)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_2_OFFSET UNITYSDK_OFFSET(0x18C83740)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_3_OFFSET UNITYSDK_OFFSET(0x18C83890)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET UNITYSDK_OFFSET(0x18C834C0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_1_OFFSET UNITYSDK_OFFSET(0x18C833E0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x18C83300)
#define SYSTEM_TEXT_ENCODINGPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C839E0)
#define SYSTEM_TEXT_ENCODINGPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C832F0)

namespace System::Text
{
	inline static constexpr unsigned int EncodingProvider_TypeDefinitionIndex = 480;

	class EncodingProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Text::EncodingProvider*>** StaticGet_s_providers()
		{
			return (::Il2CppArray<::System::Text::EncodingProvider*>**)Il2CppClass::FromTypeDefinitionIndex(EncodingProvider_TypeDefinitionIndex)->GetStaticField(0x10F0);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EncodingProvider_TypeDefinitionIndex)->GetStaticField(0x10F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER__CCTOR_OFFSET))();
		}

		::System::Text::Encoding* GetEncoding(::System::String* name, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET))(this, name, encoderFallback, decoderFallback);
		}

		::System::Text::Encoding* GetEncoding_1(::System::Int32 codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_1_OFFSET))(this, codepage, encoderFallback, decoderFallback);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider(::System::Int32 codepage)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET))(codepage);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_1(::System::String* encodingName)
		{
			return ((::System::Text::Encoding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_1_OFFSET))(encodingName);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_2(::System::Int32 codepage, ::System::Text::EncoderFallback* enc, ::System::Text::DecoderFallback* dec)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_2_OFFSET))(codepage, enc, dec);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_3(::System::String* encodingName, ::System::Text::EncoderFallback* enc, ::System::Text::DecoderFallback* dec)
		{
			return ((::System::Text::Encoding*(*)(::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_3_OFFSET))(encodingName, enc, dec);
		}
	};
}
