#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/EncodingNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_LATIN1ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET UNITYSDK_OFFSET(0x1DC10A60)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1DC0FEF0)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1DC101D0)
#define SYSTEM_TEXT_LATIN1ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC10750)
#define SYSTEM_TEXT_LATIN1ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1DC10760)
#define SYSTEM_TEXT_LATIN1ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1DC10860)
#define SYSTEM_TEXT_LATIN1ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC10960)
#define SYSTEM_TEXT_LATIN1ENCODING_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DC0FD60)
#define SYSTEM_TEXT_LATIN1ENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC10AC0)
#define SYSTEM_TEXT_LATIN1ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC0FCF0)
#define SYSTEM_TEXT_LATIN1ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0FCA0)

namespace System::Text
{
	inline static constexpr unsigned int Latin1Encoding_TypeDefinitionIndex = 481;

	class Latin1Encoding : public ::System::Text::EncodingNLS
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_arrayCharBestFit()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Latin1Encoding_TypeDefinitionIndex)->GetStaticField(0x3C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING__CTOR_1_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING__CCTOR_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Int32 GetByteCount(::System::Char* chars, ::System::Int32 charCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBYTECOUNT_OFFSET))(this, chars, charCount, encoder);
		}

		::System::Int32 GetBytes(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBYTES_OFFSET))(this, chars, charCount, bytes, byteCount, encoder);
		}

		::System::Int32 GetCharCount(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETCHARCOUNT_OFFSET))(this, bytes, count, decoder);
		}

		::System::Int32 GetChars(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETCHARS_OFFSET))(this, bytes, byteCount, chars, charCount, decoder);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}

		::Il2CppArray<::System::Char>* GetBestFitUnicodeToBytesData()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET))(this);
		}
	};
}
