#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_WWWTRANSCODER_BYTE2HEX_OFFSET UNITYSDK_OFFSET(0x1E418C30)
#define UNITYENGINE_WWWTRANSCODER_BYTEARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x1E4190C0)
#define UNITYENGINE_WWWTRANSCODER_BYTESUBARRAYEQUALS_OFFSET UNITYSDK_OFFSET(0x1E419510)
#define UNITYENGINE_WWWTRANSCODER_DATAENCODE_1_OFFSET UNITYSDK_OFFSET(0x1E418AD0)
#define UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET UNITYSDK_OFFSET(0x1E4158B0)
#define UNITYENGINE_WWWTRANSCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x1E419120)
#define UNITYENGINE_WWWTRANSCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1E418D00)
#define UNITYENGINE_WWWTRANSCODER_HEX2BYTE_OFFSET UNITYSDK_OFFSET(0x1E418B50)
#define UNITYENGINE_WWWTRANSCODER_QPENCODE_OFFSET UNITYSDK_OFFSET(0x1E418920)
#define UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_1_OFFSET UNITYSDK_OFFSET(0x1E4195B0)
#define UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET UNITYSDK_OFFSET(0x1E418850)
#define UNITYENGINE_WWWTRANSCODER_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1E4181E0)
#define UNITYENGINE_WWWTRANSCODER_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1E417F40)
#define UNITYENGINE_WWWTRANSCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E419630)
#define UNITYENGINE_WWWTRANSCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E419620)

namespace UnityEngine
{
	inline static constexpr unsigned int WWWTranscoder_TypeDefinitionIndex = 6704;

	class WWWTranscoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_dataSpace()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B30);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_lcHexChars()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B38);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_qpSpace()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B40);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_ucHexChars()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B48);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_urlForbidden()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B50);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_urlSpace()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B58);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_qpForbidden()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x5B60);
		}
		static ::System::Byte* StaticGet_urlEscapeChar()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x3190);
		}
		static ::System::Byte* StaticGet_qpEscapeChar()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x3191);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER__CCTOR_OFFSET))();
		}

		static ::System::Byte Hex2Byte(::Il2CppArray<::System::Byte>* b, ::System::Int32 offset)
		{
			return ((::System::Byte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_HEX2BYTE_OFFSET))(b, offset);
		}

		static ::Il2CppArray<::System::Byte>* Byte2Hex(::System::Byte b, ::Il2CppArray<::System::Byte>* hexChars)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTE2HEX_OFFSET))(b, hexChars);
		}

		static ::Il2CppArray<::System::Byte>* URLEncode(::Il2CppArray<::System::Byte>* toEncode)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_URLENCODE_OFFSET))(toEncode);
		}

		static ::System::String* DataEncode(::System::String* toEncode, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET))(toEncode, e);
		}

		static ::Il2CppArray<::System::Byte>* DataEncode_1(::Il2CppArray<::System::Byte>* toEncode)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DATAENCODE_1_OFFSET))(toEncode);
		}

		static ::System::String* QPEncode(::System::String* toEncode, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_QPENCODE_OFFSET))(toEncode, e);
		}

		static ::Il2CppArray<::System::Byte>* Encode(::Il2CppArray<::System::Byte>* input, ::System::Byte escapeChar, ::Il2CppArray<::System::Byte>* space, ::Il2CppArray<::System::Byte>* forbidden, ::System::Boolean uppercase)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Byte, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_ENCODE_OFFSET))(input, escapeChar, space, forbidden, uppercase);
		}

		static ::System::Boolean ByteArrayContains(::Il2CppArray<::System::Byte>* array, ::System::Byte b)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTEARRAYCONTAINS_OFFSET))(array, b);
		}

		static ::Il2CppArray<::System::Byte>* URLDecode(::Il2CppArray<::System::Byte>* toEncode)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_URLDECODE_OFFSET))(toEncode);
		}

		static ::System::Boolean ByteSubArrayEquals(::Il2CppArray<::System::Byte>* array, ::System::Int32 index, ::Il2CppArray<::System::Byte>* comperand)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTESUBARRAYEQUALS_OFFSET))(array, index, comperand);
		}

		static ::Il2CppArray<::System::Byte>* Decode(::Il2CppArray<::System::Byte>* input, ::System::Byte escapeChar, ::Il2CppArray<::System::Byte>* space)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DECODE_OFFSET))(input, escapeChar, space);
		}

		static ::System::Boolean SevenBitClean(::System::String* s, ::System::Text::Encoding* e)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET))(s, e);
		}

		static ::System::Boolean SevenBitClean_1(::Il2CppArray<::System::Byte>* input)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_1_OFFSET))(input);
		}
	};
}
