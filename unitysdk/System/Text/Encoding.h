#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/NormalizationForm.h"

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
namespace System::Text { class EncodingInfo; }
namespace System::Text { class EncodingProvider; }

#define SYSTEM_TEXT_ENCODING_CLONE_OFFSET UNITYSDK_OFFSET(0x16211DC0)
#define SYSTEM_TEXT_ENCODING_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1620F6C0)
#define SYSTEM_TEXT_ENCODING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1620F590)
#define SYSTEM_TEXT_ENCODING_CREATEDEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x16212D70)
#define SYSTEM_TEXT_ENCODING_DESERIALIZEENCODING_OFFSET UNITYSDK_OFFSET(0x1620EF60)
#define SYSTEM_TEXT_ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x162131C0)
#define SYSTEM_TEXT_ENCODING_GETBESTFITBYTESTOUNICODEDATA_OFFSET UNITYSDK_OFFSET(0x16213310)
#define SYSTEM_TEXT_ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET UNITYSDK_OFFSET(0x162132E0)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x16211F60)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x16212040)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x16212180)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x16211ED0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x16212220)
#define SYSTEM_TEXT_ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x162122A0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x16212340)
#define SYSTEM_TEXT_ENCODING_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x16212450)
#define SYSTEM_TEXT_ENCODING_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x16212480)
#define SYSTEM_TEXT_ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x16212190)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x16212700)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x16212840)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x16212670)
#define SYSTEM_TEXT_ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x162128E0)
#define SYSTEM_TEXT_ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x16212960)
#define SYSTEM_TEXT_ENCODING_GETCHARS_3_OFFSET UNITYSDK_OFFSET(0x16212B60)
#define SYSTEM_TEXT_ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x16212850)
#define SYSTEM_TEXT_ENCODING_GETDATAITEM_OFFSET UNITYSDK_OFFSET(0x16211AB0)
#define SYSTEM_TEXT_ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x16212D20)
#define SYSTEM_TEXT_ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x16212FA0)
#define SYSTEM_TEXT_ENCODING_GETENCODINGS_OFFSET UNITYSDK_OFFSET(0x16211A50)
#define SYSTEM_TEXT_ENCODING_GETENCODING_1_OFFSET UNITYSDK_OFFSET(0x16211410)
#define SYSTEM_TEXT_ENCODING_GETENCODING_2_OFFSET UNITYSDK_OFFSET(0x16211730)
#define SYSTEM_TEXT_ENCODING_GETENCODING_3_OFFSET UNITYSDK_OFFSET(0x162118B0)
#define SYSTEM_TEXT_ENCODING_GETENCODING_OFFSET UNITYSDK_OFFSET(0x1620FC20)
#define SYSTEM_TEXT_ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16213270)
#define SYSTEM_TEXT_ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x16211A80)
#define SYSTEM_TEXT_ENCODING_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x16212FF0)
#define SYSTEM_TEXT_ENCODING_GETSTRING_2_OFFSET UNITYSDK_OFFSET(0x16213060)
#define SYSTEM_TEXT_ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x16212B90)
#define SYSTEM_TEXT_ENCODING_GET_ASCII_OFFSET UNITYSDK_OFFSET(0x16210BC0)
#define SYSTEM_TEXT_ENCODING_GET_BIGENDIANUNICODE_OFFSET UNITYSDK_OFFSET(0x16210900)
#define SYSTEM_TEXT_ENCODING_GET_BODYNAME_OFFSET UNITYSDK_OFFSET(0x16211B80)
#define SYSTEM_TEXT_ENCODING_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x16212CE0)
#define SYSTEM_TEXT_ENCODING_GET_DECODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x16211DB0)
#define SYSTEM_TEXT_ENCODING_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x16210800)
#define SYSTEM_TEXT_ENCODING_GET_ENCODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x16211DA0)
#define SYSTEM_TEXT_ENCODING_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x16211BC0)
#define SYSTEM_TEXT_ENCODING_GET_HEADERNAME_OFFSET UNITYSDK_OFFSET(0x16211BD0)
#define SYSTEM_TEXT_ENCODING_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1620F7D0)
#define SYSTEM_TEXT_ENCODING_GET_ISBROWSERDISPLAY_OFFSET UNITYSDK_OFFSET(0x16211C90)
#define SYSTEM_TEXT_ENCODING_GET_ISBROWSERSAVE_OFFSET UNITYSDK_OFFSET(0x16211CD0)
#define SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSDISPLAY_OFFSET UNITYSDK_OFFSET(0x16211D10)
#define SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSSAVE_OFFSET UNITYSDK_OFFSET(0x16211D50)
#define SYSTEM_TEXT_ENCODING_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x16211EA0)
#define SYSTEM_TEXT_ENCODING_GET_ISSINGLEBYTE_OFFSET UNITYSDK_OFFSET(0x16211D90)
#define SYSTEM_TEXT_ENCODING_GET_LATIN1_OFFSET UNITYSDK_OFFSET(0x16210C30)
#define SYSTEM_TEXT_ENCODING_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0x16210880)
#define SYSTEM_TEXT_ENCODING_GET_UTF32_OFFSET UNITYSDK_OFFSET(0x16210A30)
#define SYSTEM_TEXT_ENCODING_GET_UTF7_OFFSET UNITYSDK_OFFSET(0x16210980)
#define SYSTEM_TEXT_ENCODING_GET_UTF8_OFFSET UNITYSDK_OFFSET(0x16210B10)
#define SYSTEM_TEXT_ENCODING_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x16211C10)
#define SYSTEM_TEXT_ENCODING_GET_WINDOWSCODEPAGE_OFFSET UNITYSDK_OFFSET(0x16211C50)
#define SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x16212D10)
#define SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_OFFSET UNITYSDK_OFFSET(0x16212CF0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x1620EF10)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1620EEB0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZING_1_OFFSET UNITYSDK_OFFSET(0x1620EEF0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1620EE90)
#define SYSTEM_TEXT_ENCODING_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1620EF50)
#define SYSTEM_TEXT_ENCODING_REGISTERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1620F820)
#define SYSTEM_TEXT_ENCODING_SERIALIZEENCODING_OFFSET UNITYSDK_OFFSET(0x1620F2D0)
#define SYSTEM_TEXT_ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1620EE30)
#define SYSTEM_TEXT_ENCODING_SETREADONLY_OFFSET UNITYSDK_OFFSET(0x16212F90)
#define SYSTEM_TEXT_ENCODING_SET_DECODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x16211690)
#define SYSTEM_TEXT_ENCODING_SET_ENCODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x162115F0)
#define SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_1_OFFSET UNITYSDK_OFFSET(0x16213430)
#define SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_OFFSET UNITYSDK_OFFSET(0x16213340)
#define SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_1_OFFSET UNITYSDK_OFFSET(0x16213590)
#define SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_OFFSET UNITYSDK_OFFSET(0x162134A0)
#define SYSTEM_TEXT_ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1620ECE0)
#define SYSTEM_TEXT_ENCODING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1620ED40)
#define SYSTEM_TEXT_ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1620ECC0)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_TypeDefinitionIndex = 487;

	class Encoding : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_bigEndianUnicode()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6230);
		}
		static ::System::Text::Encoding** StaticGet_latin1Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6238);
		}
		static ::System::Text::Encoding** StaticGet_utf7Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6240);
		}
		static ::System::Text::Encoding** StaticGet_unicodeEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6248);
		}
		static ::System::Collections::Hashtable** StaticGet_encodings()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6250);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6258);
		}
		static ::System::Text::Encoding** StaticGet_asciiEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6260);
		}
		static ::System::Text::Encoding** StaticGet_utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6268);
		}
		static ::System::Text::Encoding** StaticGet_defaultEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6270);
		}
		static ::System::Text::Encoding** StaticGet_utf32Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(Encoding_TypeDefinitionIndex)->GetStaticField(0x6278);
		}
		// static const ::System::Int32 MIMECONTF_MAILNEWS = 0x1; // 0x0
		// static const ::System::Int32 MIMECONTF_BROWSER = 0x2; // 0x0
		// static const ::System::Int32 MIMECONTF_SAVABLE_MAILNEWS = 0x100; // 0x0
		// static const ::System::Int32 MIMECONTF_SAVABLE_BROWSER = 0x200; // 0x0
		// static const ::System::Int32 CodePageDefault = 0x0; // 0x0
		// static const ::System::Int32 CodePageNoOEM = 0x1; // 0x0
		// static const ::System::Int32 CodePageNoMac = 0x2; // 0x0
		// static const ::System::Int32 CodePageNoThread = 0x3; // 0x0
		// static const ::System::Int32 CodePageNoSymbol = 0x2A; // 0x0
		// static const ::System::Int32 CodePageUnicode = 0x4B0; // 0x0
		// static const ::System::Int32 CodePageBigEndian = 0x4B1; // 0x0
		// static const ::System::Int32 CodePageWindows1252 = 0x4E4; // 0x0
		// static const ::System::Int32 CodePageMacGB2312 = 0x2718; // 0x0
		// static const ::System::Int32 CodePageGB2312 = 0x51C8; // 0x0
		// static const ::System::Int32 CodePageMacKorean = 0x2713; // 0x0
		// static const ::System::Int32 CodePageDLLKorean = 0x51D5; // 0x0
		// static const ::System::Int32 ISO2022JP = 0xC42C; // 0x0
		// static const ::System::Int32 ISO2022JPESC = 0xC42D; // 0x0
		// static const ::System::Int32 ISO2022JPSISO = 0xC42E; // 0x0
		// static const ::System::Int32 ISOKorean = 0xC431; // 0x0
		// static const ::System::Int32 ISOSimplifiedCN = 0xC433; // 0x0
		// static const ::System::Int32 EUCJP = 0xCADC; // 0x0
		// static const ::System::Int32 ChineseHZ = 0xCEC8; // 0x0
		// static const ::System::Int32 DuplicateEUCCN = 0xCAE0; // 0x0
		// static const ::System::Int32 EUCCN = 0x3A8; // 0x0
		// static const ::System::Int32 EUCKR = 0xCAED; // 0x0
		// static const ::System::Int32 CodePageASCII = 0x4E9F; // 0x0
		// static const ::System::Int32 ISO_8859_1 = 0x6FAF; // 0x0
		// static const ::System::Int32 ISCIIAssemese = 0xDEAE; // 0x0
		// static const ::System::Int32 ISCIIBengali = 0xDEAB; // 0x0
		// static const ::System::Int32 ISCIIDevanagari = 0xDEAA; // 0x0
		// static const ::System::Int32 ISCIIGujarathi = 0xDEB2; // 0x0
		// static const ::System::Int32 ISCIIKannada = 0xDEB0; // 0x0
		// static const ::System::Int32 ISCIIMalayalam = 0xDEB1; // 0x0
		// static const ::System::Int32 ISCIIOriya = 0xDEAF; // 0x0
		// static const ::System::Int32 ISCIIPanjabi = 0xDEB3; // 0x0
		// static const ::System::Int32 ISCIITamil = 0xDEAC; // 0x0
		// static const ::System::Int32 ISCIITelugu = 0xDEAD; // 0x0
		// static const ::System::Int32 GB18030 = 0xD698; // 0x0
		// static const ::System::Int32 ISO_8859_8I = 0x96C6; // 0x0
		// static const ::System::Int32 ISO_8859_8_Visual = 0x6FB6; // 0x0
		// static const ::System::Int32 ENC50229 = 0xC435; // 0x0
		// static const ::System::Int32 CodePageUTF7 = 0xFDE8; // 0x0
		// static const ::System::Int32 CodePageUTF8 = 0xFDE9; // 0x0
		// static const ::System::Int32 CodePageUTF32 = 0x2EE0; // 0x0
		// static const ::System::Int32 CodePageUTF32BE = 0x2EE1; // 0x0
		::System::Text::DecoderFallback* decoderFallback; // 0x10
		::System::Globalization::CodePageDataItem* dataItem; // 0x18
		::System::Text::EncoderFallback* encoderFallback; // 0x20
		::System::Int32 m_codePage; // 0x28
		::System::Boolean m_deserializedFromEverett; // 0x2C
		::System::Boolean m_isReadOnly; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 codePage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING__CTOR_1_OFFSET))(this, codePage);
		}

		::System::Void _ctor_2(::System::Int32 codePage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING__CTOR_2_OFFSET))(this, codePage, encoderFallback, decoderFallback);
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

		static ::Il2CppArray<::System::Byte>* Convert(::System::Text::Encoding* srcEncoding, ::System::Text::Encoding* dstEncoding, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Text::Encoding*, ::System::Text::Encoding*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CONVERT_OFFSET))(srcEncoding, dstEncoding, bytes);
		}

		static ::Il2CppArray<::System::Byte>* Convert_1(::System::Text::Encoding* srcEncoding, ::System::Text::Encoding* dstEncoding, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Text::Encoding*, ::System::Text::Encoding*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CONVERT_1_OFFSET))(srcEncoding, dstEncoding, bytes, index, count);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Void RegisterProvider(::System::Text::EncodingProvider* provider)
		{
			return ((::System::Void(*)(::System::Text::EncodingProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_REGISTERPROVIDER_OFFSET))(provider);
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

		static ::Il2CppArray<::System::Text::EncodingInfo*>* GetEncodings()
		{
			return ((::Il2CppArray<::System::Text::EncodingInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODINGS_OFFSET))();
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

		::System::Int32 get_WindowsCodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_WINDOWSCODEPAGE_OFFSET))(this);
		}

		::System::Boolean get_IsBrowserDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISBROWSERDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsBrowserSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISBROWSERSAVE_OFFSET))(this);
		}

		::System::Boolean get_IsMailNewsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsMailNewsSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSSAVE_OFFSET))(this);
		}

		::System::Boolean get_IsSingleByte()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISSINGLEBYTE_OFFSET))(this);
		}

		::System::Text::EncoderFallback* get_EncoderFallback()
		{
			return ((::System::Text::EncoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ENCODERFALLBACK_OFFSET))(this);
		}

		::System::Void set_EncoderFallback(::System::Text::EncoderFallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SET_ENCODERFALLBACK_OFFSET))(this, value);
		}

		::System::Text::DecoderFallback* get_DecoderFallback()
		{
			return ((::System::Text::DecoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_DECODERFALLBACK_OFFSET))(this);
		}

		::System::Void set_DecoderFallback(::System::Text::DecoderFallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SET_DECODERFALLBACK_OFFSET))(this, value);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_ASCII()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ASCII_OFFSET))();
		}

		static ::System::Text::Encoding* get_Latin1()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_LATIN1_OFFSET))();
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_OFFSET))(this, chars);
		}

		::System::Int32 GetByteCount_1(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_1_OFFSET))(this, s);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetByteCount_3(::System::Char* chars, ::System::Int32 count, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_3_OFFSET))(this, chars, count, encoder);
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

		::Il2CppArray<::System::Char>* GetChars(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_OFFSET))(this, bytes);
		}

		::Il2CppArray<::System::Char>* GetChars_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_1_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::Int32 GetChars_3(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_3_OFFSET))(this, bytes, byteCount, chars, charCount, decoder);
		}

		::System::String* GetString(::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_OFFSET))(this, bytes, byteCount);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Boolean IsAlwaysNormalized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_OFFSET))(this);
		}

		::System::Boolean IsAlwaysNormalized_1(::System::Text::NormalizationForm form)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_1_OFFSET))(this, form);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETDECODER_OFFSET))(this);
		}

		static ::System::Text::Encoding* CreateDefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CREATEDEFAULTENCODING_OFFSET))();
		}

		::System::Void setReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SETREADONLY_OFFSET))(this, value);
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

		::Il2CppArray<::System::Char>* GetBestFitBytesToUnicodeData()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBESTFITBYTESTOUNICODEDATA_OFFSET))(this);
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
