#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/EncodingNLS.h"
#include "unitysdk/System/Text/NormalizationForm.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_LATIN1ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET UNITYSDK_OFFSET(0x185FDE40)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x185FD340)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x185FD5D0)
#define SYSTEM_TEXT_LATIN1ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185FDAF0)
#define SYSTEM_TEXT_LATIN1ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x185FDB00)
#define SYSTEM_TEXT_LATIN1ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x185FDC20)
#define SYSTEM_TEXT_LATIN1ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185FDD20)
#define SYSTEM_TEXT_LATIN1ENCODING_GET_ISSINGLEBYTE_OFFSET UNITYSDK_OFFSET(0x185FDE20)
#define SYSTEM_TEXT_LATIN1ENCODING_ISALWAYSNORMALIZED_OFFSET UNITYSDK_OFFSET(0x185FDE30)
#define SYSTEM_TEXT_LATIN1ENCODING_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x185FD200)
#define SYSTEM_TEXT_LATIN1ENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x185FDEA0)
#define SYSTEM_TEXT_LATIN1ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185FD1C0)
#define SYSTEM_TEXT_LATIN1ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x185F8680)

namespace System::Text
{
	inline static constexpr unsigned int Latin1Encoding_TypeDefinitionIndex = 494;

	class Latin1Encoding : public ::System::Text::EncodingNLS
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_arrayCharBestFit()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Latin1Encoding_TypeDefinitionIndex)->GetStaticField(0x10FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING__CCTOR_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetByteCount(::System::Char* a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetCharCount(::System::Byte* a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleByte()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GET_ISSINGLEBYTE_OFFSET))(this);
		}

		::System::Boolean IsAlwaysNormalized(::System::Text::NormalizationForm a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_ISALWAYSNORMALIZED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Char>* GetBestFitUnicodeToBytesData()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET))(this);
		}
	};
}
