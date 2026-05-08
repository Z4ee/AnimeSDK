#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Utf8Json/JsonToken.h"

namespace System { class String; }
namespace Utf8Json { class JsonParsingException; }

#define UTF8JSON_JSONREADER_ADVANCEOFFSET_OFFSET UNITYSDK_OFFSET(0x9B4070)
#define UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BDE70)
#define UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BDE60)
#define UTF8JSON_JSONREADER_GETBUFFERUNSAFE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UTF8JSON_JSONREADER_GETCODEPOINT_OFFSET UNITYSDK_OFFSET(0x1C000430)
#define UTF8JSON_JSONREADER_GETCURRENTJSONTOKEN_OFFSET UNITYSDK_OFFSET(0x9BDEB0)
#define UTF8JSON_JSONREADER_GETCURRENTOFFSETUNSAFE_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UTF8JSON_JSONREADER_GET_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x9BDE80)
#define UTF8JSON_JSONREADER_ISWORDBREAK_OFFSET UNITYSDK_OFFSET(0x1C0009C0)
#define UTF8JSON_JSONREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9BE5C0)
#define UTF8JSON_JSONREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x9BE730)
#define UTF8JSON_JSONREADER_READCOMMENT_OFFSET UNITYSDK_OFFSET(0x1BFFF330)
#define UTF8JSON_JSONREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x9BE7F0)
#define UTF8JSON_JSONREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x9BE690)
#define UTF8JSON_JSONREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x9BE6A0)
#define UTF8JSON_JSONREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x9BE6B0)
#define UTF8JSON_JSONREADER_READISBEGINARRAYWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9BDF40)
#define UTF8JSON_JSONREADER_READISBEGINARRAY_OFFSET UNITYSDK_OFFSET(0x9BDEE0)
#define UTF8JSON_JSONREADER_READISBEGINOBJECTWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9BE0B0)
#define UTF8JSON_JSONREADER_READISBEGINOBJECT_OFFSET UNITYSDK_OFFSET(0x9BE050)
#define UTF8JSON_JSONREADER_READISENDARRAYWITHSKIPVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x9BDFC0)
#define UTF8JSON_JSONREADER_READISENDARRAYWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9BDFB0)
#define UTF8JSON_JSONREADER_READISENDARRAY_OFFSET UNITYSDK_OFFSET(0x9BDF50)
#define UTF8JSON_JSONREADER_READISENDOBJECTWITHSKIPVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x9BE130)
#define UTF8JSON_JSONREADER_READISENDOBJECTWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9BE120)
#define UTF8JSON_JSONREADER_READISENDOBJECT_OFFSET UNITYSDK_OFFSET(0x9BE0C0)
#define UTF8JSON_JSONREADER_READISINARRAY_OFFSET UNITYSDK_OFFSET(0x9BE040)
#define UTF8JSON_JSONREADER_READISINOBJECT_OFFSET UNITYSDK_OFFSET(0x9BE1B0)
#define UTF8JSON_JSONREADER_READISNAMESEPARATORWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9BE290)
#define UTF8JSON_JSONREADER_READISNAMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x9BE230)
#define UTF8JSON_JSONREADER_READISNULL_OFFSET UNITYSDK_OFFSET(0x9BDED0)
#define UTF8JSON_JSONREADER_READISVALUESEPARATORWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9BE220)
#define UTF8JSON_JSONREADER_READISVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x9BE1C0)
#define UTF8JSON_JSONREADER_READNEXTBLOCKCORE_OFFSET UNITYSDK_OFFSET(0x9BE620)
#define UTF8JSON_JSONREADER_READNEXTBLOCKSEGMENT_OFFSET UNITYSDK_OFFSET(0x9BE630)
#define UTF8JSON_JSONREADER_READNEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x9BE610)
#define UTF8JSON_JSONREADER_READNEXTCORE_OFFSET UNITYSDK_OFFSET(0x9BE600)
#define UTF8JSON_JSONREADER_READNEXT_OFFSET UNITYSDK_OFFSET(0x9BE5D0)
#define UTF8JSON_JSONREADER_READNUMBERSEGMENT_OFFSET UNITYSDK_OFFSET(0x9BE800)
#define UTF8JSON_JSONREADER_READPROPERTYNAMESEGMENTRAW_OFFSET UNITYSDK_OFFSET(0x9BE580)
#define UTF8JSON_JSONREADER_READPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9BE410)
#define UTF8JSON_JSONREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x9BE680)
#define UTF8JSON_JSONREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x9BE7E0)
#define UTF8JSON_JSONREADER_READSTRINGSEGMENTCORE_OFFSET UNITYSDK_OFFSET(0x9BE2A0)
#define UTF8JSON_JSONREADER_READSTRINGSEGMENTRAW_OFFSET UNITYSDK_OFFSET(0x9BE560)
#define UTF8JSON_JSONREADER_READSTRINGSEGMENTUNSAFE_OFFSET UNITYSDK_OFFSET(0x9BE2B0)
#define UTF8JSON_JSONREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x9BE2D0)
#define UTF8JSON_JSONREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x9BE740)
#define UTF8JSON_JSONREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x9BE750)
#define UTF8JSON_JSONREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x9BE760)
#define UTF8JSON_JSONREADER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9BDEC0)
#define UTF8JSON_JSONREADER_TONUMBER_OFFSET UNITYSDK_OFFSET(0x1C0004C0)
#define UTF8JSON_JSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C001420)
#define UTF8JSON_JSONREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9BDE50)
#define UTF8JSON_JSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDE40)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonReader_TypeDefinitionIndex = 85504;

	struct alignas(8) JsonReader
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_bom()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(JsonReader_TypeDefinitionIndex)->GetStaticField(0x49FD0);
		}
		static ::System::ArraySegment_1<::System::Byte>* StaticGet_nullTokenSegment()
		{
			return (::System::ArraySegment_1<::System::Byte>*)Il2CppClass::FromTypeDefinitionIndex(JsonReader_TypeDefinitionIndex)->GetStaticField(0x49FD8);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 offset; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER__CTOR_OFFSET))(this, bytes);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER__CTOR_1_OFFSET))(this, bytes, offset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER__CCTOR_OFFSET))();
		}

		::Utf8Json::JsonParsingException* CreateParsingException(::System::String* expected)
		{
			return ((::Utf8Json::JsonParsingException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTION_OFFSET))(this, expected);
		}

		::Utf8Json::JsonParsingException* CreateParsingExceptionMessage(::System::String* message)
		{
			return ((::Utf8Json::JsonParsingException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTIONMESSAGE_OFFSET))(this, message);
		}

		::System::Boolean get_IsInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GET_ISINRANGE_OFFSET))(this);
		}

		::System::Void AdvanceOffset(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_ADVANCEOFFSET_OFFSET))(this, offset);
		}

		::Il2CppArray<::System::Byte>* GetBufferUnsafe()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETBUFFERUNSAFE_OFFSET))(this);
		}

		::System::Int32 GetCurrentOffsetUnsafe()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETCURRENTOFFSETUNSAFE_OFFSET))(this);
		}

		::Utf8Json::JsonToken GetCurrentJsonToken()
		{
			return ((::Utf8Json::JsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETCURRENTJSONTOKEN_OFFSET))(this);
		}

		::System::Void SkipWhiteSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::Boolean ReadIsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISNULL_OFFSET))(this);
		}

		::System::Boolean ReadIsBeginArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINARRAY_OFFSET))(this);
		}

		::System::Void ReadIsBeginArrayWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINARRAYWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDARRAY_OFFSET))(this);
		}

		::System::Void ReadIsEndArrayWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDARRAYWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndArrayWithSkipValueSeparator(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDARRAYWITHSKIPVALUESEPARATOR_OFFSET))(this, count);
		}

		::System::Boolean ReadIsInArray(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISINARRAY_OFFSET))(this, count);
		}

		::System::Boolean ReadIsBeginObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINOBJECT_OFFSET))(this);
		}

		::System::Void ReadIsBeginObjectWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINOBJECTWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDOBJECT_OFFSET))(this);
		}

		::System::Void ReadIsEndObjectWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDOBJECTWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndObjectWithSkipValueSeparator(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDOBJECTWITHSKIPVALUESEPARATOR_OFFSET))(this, count);
		}

		::System::Boolean ReadIsInObject(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISINOBJECT_OFFSET))(this, count);
		}

		::System::Boolean ReadIsValueSeparator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISVALUESEPARATOR_OFFSET))(this);
		}

		::System::Void ReadIsValueSeparatorWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISVALUESEPARATORWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsNameSeparator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISNAMESEPARATOR_OFFSET))(this);
		}

		::System::Void ReadIsNameSeparatorWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISNAMESEPARATORWITHVERIFY_OFFSET))(this);
		}

		::System::Void ReadStringSegmentCore(::Il2CppArray<::System::Byte>*& resultBytes, ::System::Int32& resultOffset, ::System::Int32& resultLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRINGSEGMENTCORE_OFFSET))(this, resultBytes, resultOffset, resultLength);
		}

		static ::System::Int32 GetCodePoint(::System::Char a, ::System::Char b, ::System::Char c, ::System::Char d)
		{
			return ((::System::Int32(*)(::System::Char, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETCODEPOINT_OFFSET))(a, b, c, d);
		}

		static ::System::Int32 ToNumber(::System::Char x)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_TONUMBER_OFFSET))(x);
		}

		::System::ArraySegment_1<::System::Byte> ReadStringSegmentUnsafe()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRINGSEGMENTUNSAFE_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRING_OFFSET))(this);
		}

		::System::String* ReadPropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READPROPERTYNAME_OFFSET))(this);
		}

		::System::ArraySegment_1<::System::Byte> ReadStringSegmentRaw()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRINGSEGMENTRAW_OFFSET))(this);
		}

		::System::ArraySegment_1<::System::Byte> ReadPropertyNameSegmentRaw()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READPROPERTYNAMESEGMENTRAW_OFFSET))(this);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READBOOLEAN_OFFSET))(this);
		}

		static ::System::Boolean IsWordBreak(::System::Byte c)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_ISWORDBREAK_OFFSET))(c);
		}

		::System::Void ReadNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXT_OFFSET))(this);
		}

		::System::Void ReadNextCore(::Utf8Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonToken))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTCORE_OFFSET))(this, token);
		}

		::System::Void ReadNextBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTBLOCK_OFFSET))(this);
		}

		::System::Void ReadNextBlockCore(::System::Int32 stack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTBLOCKCORE_OFFSET))(this, stack);
		}

		::System::ArraySegment_1<::System::Byte> ReadNextBlockSegment()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTBLOCKSEGMENT_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSBYTE_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READINT64_OFFSET))(this);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READBYTE_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READUINT16_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READUINT32_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READUINT64_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READDOUBLE_OFFSET))(this);
		}

		::System::ArraySegment_1<::System::Byte> ReadNumberSegment()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNUMBERSEGMENT_OFFSET))(this);
		}

		static ::System::Int32 ReadComment(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READCOMMENT_OFFSET))(bytes, offset);
		}
	};
}
