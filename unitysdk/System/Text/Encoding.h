#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Globalization { class CodePageDataItem; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_ENCODING_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6CC1E0)
#define SYSTEM_TEXT_ENCODING_CREATEDEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x1A6CD110)
#define SYSTEM_TEXT_ENCODING_DESERIALIZEENCODING_OFFSET UNITYSDK_OFFSET(0x1A6CB280)
#define SYSTEM_TEXT_ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6CD310)
#define SYSTEM_TEXT_ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET UNITYSDK_OFFSET(0x1A6CD460)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A6CC3F0)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1A6CC530)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CC2E0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1A6CC5D0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1A6CC670)
#define SYSTEM_TEXT_ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1A6CC740)
#define SYSTEM_TEXT_ENCODING_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1A6CC870)
#define SYSTEM_TEXT_ENCODING_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1A6CC8A0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A6CC540)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A6CCB20)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1A6CCC60)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CCA90)
#define SYSTEM_TEXT_ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1A6CCD10)
#define SYSTEM_TEXT_ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1A6CCF10)
#define SYSTEM_TEXT_ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1A6CCC70)
#define SYSTEM_TEXT_ENCODING_GETDATAITEM_OFFSET UNITYSDK_OFFSET(0x1A6CC020)
#define SYSTEM_TEXT_ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1A6CD0D0)
#define SYSTEM_TEXT_ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1A6CD180)
#define SYSTEM_TEXT_ENCODING_GETENCODING_1_OFFSET UNITYSDK_OFFSET(0x1A6CBC40)
#define SYSTEM_TEXT_ENCODING_GETENCODING_2_OFFSET UNITYSDK_OFFSET(0x1A6CBE80)
#define SYSTEM_TEXT_ENCODING_GETENCODING_3_OFFSET UNITYSDK_OFFSET(0x1A6CBF20)
#define SYSTEM_TEXT_ENCODING_GETENCODING_OFFSET UNITYSDK_OFFSET(0x1A6AD9A0)
#define SYSTEM_TEXT_ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6CD3F0)
#define SYSTEM_TEXT_ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1A6CBFC0)
#define SYSTEM_TEXT_ENCODING_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A6CD1C0)
#define SYSTEM_TEXT_ENCODING_GETSTRING_2_OFFSET UNITYSDK_OFFSET(0x1A6CD250)
#define SYSTEM_TEXT_ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1A6CCF40)
#define SYSTEM_TEXT_ENCODING_GET_ASCII_OFFSET UNITYSDK_OFFSET(0x1A6B2690)
#define SYSTEM_TEXT_ENCODING_GET_BIGENDIANUNICODE_OFFSET UNITYSDK_OFFSET(0x1A6AD8D0)
#define SYSTEM_TEXT_ENCODING_GET_BODYNAME_OFFSET UNITYSDK_OFFSET(0x1A6CC110)
#define SYSTEM_TEXT_ENCODING_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x1A6CD0C0)
#define SYSTEM_TEXT_ENCODING_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1A6CBA00)
#define SYSTEM_TEXT_ENCODING_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1A6CC150)
#define SYSTEM_TEXT_ENCODING_GET_HEADERNAME_OFFSET UNITYSDK_OFFSET(0x1A6CC160)
#define SYSTEM_TEXT_ENCODING_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6CB980)
#define SYSTEM_TEXT_ENCODING_GET_LATIN1_OFFSET UNITYSDK_OFFSET(0x1A6CBB80)
#define SYSTEM_TEXT_ENCODING_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0x1A6AD730)
#define SYSTEM_TEXT_ENCODING_GET_UTF32_OFFSET UNITYSDK_OFFSET(0x1A6CBAB0)
#define SYSTEM_TEXT_ENCODING_GET_UTF7_OFFSET UNITYSDK_OFFSET(0x1A6AD800)
#define SYSTEM_TEXT_ENCODING_GET_UTF8_OFFSET UNITYSDK_OFFSET(0x1A6AD670)
#define SYSTEM_TEXT_ENCODING_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x1A6CC1A0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x1A6CB230)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A6CB1E0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZING_1_OFFSET UNITYSDK_OFFSET(0x1A6CB220)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A6CB1D0)
#define SYSTEM_TEXT_ENCODING_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A6CB270)
#define SYSTEM_TEXT_ENCODING_SERIALIZEENCODING_OFFSET UNITYSDK_OFFSET(0x1A6CB660)
#define SYSTEM_TEXT_ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A6CB170)
#define SYSTEM_TEXT_ENCODING_SET_DECODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6CBDE0)
#define SYSTEM_TEXT_ENCODING_SET_ENCODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6CBD40)
#define SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_1_OFFSET UNITYSDK_OFFSET(0x1A6CD5B0)
#define SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A6CD4C0)
#define SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_1_OFFSET UNITYSDK_OFFSET(0x1A6CD710)
#define SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A6CD620)
#define SYSTEM_TEXT_ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6CB0F0)
#define SYSTEM_TEXT_ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CB0A0)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_TypeDefinitionIndex = 473;

	class Encoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_latin1Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA60);
		}
		static ::System::Text::Encoding** StaticGet_utf7Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA68);
		}
		static ::System::Text::Encoding** StaticGet_utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA70);
		}
		static ::System::Text::Encoding** StaticGet_asciiEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA78);
		}
		static ::System::Text::Encoding** StaticGet_defaultEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA80);
		}
		static ::System::Text::Encoding** StaticGet_unicodeEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA88);
		}
		static ::System::Text::Encoding** StaticGet_bigEndianUnicode()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::System::Collections::Hashtable** StaticGet_encodings()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xA98);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xAA0);
		}
		static ::System::Text::Encoding** StaticGet_utf32Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0xAA8);
		}
		::System::Text::EncoderFallback* encoderFallback; // 0x10
		::System::Text::DecoderFallback* decoderFallback; // 0x18
		::System::Globalization::CodePageDataItem* dataItem; // 0x20
		::System::Boolean m_deserializedFromEverett; // 0x28
		::System::Boolean m_isReadOnly; // 0x29
		::System::Int32 m_codePage; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 codePage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING__CTOR_1_OFFSET))(this, codePage);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Void OnDeserializing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZING_OFFSET))(this);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserializing_1(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZING_1_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZED_1_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONSERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void DeserializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DESERIALIZEENCODING_OFFSET))(this, info, context);
		}

		::System::Void SerializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SERIALIZEENCODING_OFFSET))(this, info, context);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Text::Encoding* GetEncoding(::System::Int32 codepage)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_OFFSET))(codepage);
		}

		static ::System::Text::Encoding* GetEncoding_1(::System::Int32 codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_1_OFFSET))(codepage, encoderFallback, decoderFallback);
		}

		static ::System::Text::Encoding* GetEncoding_2(::System::String* name)
		{
			return ((::System::Text::Encoding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_2_OFFSET))(name);
		}

		static ::System::Text::Encoding* GetEncoding_3(::System::String* name, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback)
		{
			return ((::System::Text::Encoding*(*)(::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_3_OFFSET))(name, encoderFallback, decoderFallback);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Void GetDataItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETDATAITEM_OFFSET))(this);
		}

		::System::String* get_BodyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_BODYNAME_OFFSET))(this);
		}

		::System::String* get_EncodingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ENCODINGNAME_OFFSET))(this);
		}

		::System::String* get_HeaderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_HEADERNAME_OFFSET))(this);
		}

		::System::String* get_WebName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_WEBNAME_OFFSET))(this);
		}

		::System::Void set_EncoderFallback(::System::Text::EncoderFallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SET_ENCODERFALLBACK_OFFSET))(this, value);
		}

		::System::Void set_DecoderFallback(::System::Text::DecoderFallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SET_DECODERFALLBACK_OFFSET))(this, value);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CLONE_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_ASCII()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ASCII_OFFSET))();
		}

		static ::System::Text::Encoding* get_Latin1()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_LATIN1_OFFSET))();
		}

		::System::Int32 GetByteCount(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_OFFSET))(this, s);
		}

		::System::Int32 GetByteCount_1(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_1_OFFSET))(this, chars, count);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count, encoder);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::Il2CppArray<::System::Char>* chars)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_OFFSET))(this, chars);
		}

		::Il2CppArray<::System::Byte>* GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_1_OFFSET))(this, chars, index, count);
		}

		::Il2CppArray<::System::Byte>* GetBytes_2(::System::String* s)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_2_OFFSET))(this, s);
		}

		::System::Int32 GetBytes_3(::System::String* s, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_3_OFFSET))(this, s, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_4(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_4_OFFSET))(this, chars, charCount, bytes, byteCount, encoder);
		}

		::System::Int32 GetBytes_5(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_5_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARCOUNT_OFFSET))(this, bytes);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARCOUNT_2_OFFSET))(this, bytes, count, decoder);
		}

		::Il2CppArray<::System::Char>* GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, decoder);
		}

		::System::String* GetString(::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_OFFSET))(this, bytes, byteCount);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETDECODER_OFFSET))(this);
		}

		static ::System::Text::Encoding* CreateDefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CREATEDEFAULTENCODING_OFFSET))();
		}

		static ::System::Text::Encoding* get_Default()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_DEFAULT_OFFSET))();
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::String* GetString_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_1_OFFSET))(this, bytes);
		}

		::System::String* GetString_2(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_2_OFFSET))(this, bytes, index, count);
		}

		static ::System::Text::Encoding* get_Unicode()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UNICODE_OFFSET))();
		}

		static ::System::Text::Encoding* get_BigEndianUnicode()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_BIGENDIANUNICODE_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF7()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UTF7_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF8()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UTF8_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF32()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UTF32_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* GetBestFitUnicodeToBytesData()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET))(this);
		}

		::System::Void ThrowBytesOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_OFFSET))(this);
		}

		::System::Void ThrowBytesOverflow_1(::System::Text::EncoderNLS* encoder, ::System::Boolean nothingEncoded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderNLS*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_1_OFFSET))(this, encoder, nothingEncoded);
		}

		::System::Void ThrowCharsOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_OFFSET))(this);
		}

		::System::Void ThrowCharsOverflow_1(::System::Text::DecoderNLS* decoder, ::System::Boolean nothingDecoded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::DecoderNLS*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_1_OFFSET))(this, decoder, nothingDecoded);
		}
	};
}
