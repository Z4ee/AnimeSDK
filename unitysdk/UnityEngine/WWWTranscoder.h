#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_WWWTRANSCODER_BYTE2HEX_OFFSET UNITYSDK_OFFSET(0x1D27C110)
#define UNITYENGINE_WWWTRANSCODER_BYTEARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x1D27C770)
#define UNITYENGINE_WWWTRANSCODER_BYTESUBARRAYEQUALS_OFFSET UNITYSDK_OFFSET(0x1D27CDB0)
#define UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET UNITYSDK_OFFSET(0x1D27BFF0)
#define UNITYENGINE_WWWTRANSCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x1D27C7D0)
#define UNITYENGINE_WWWTRANSCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1D27C180)
#define UNITYENGINE_WWWTRANSCODER_HEX2BYTE_OFFSET UNITYSDK_OFFSET(0x1D27C040)
#define UNITYENGINE_WWWTRANSCODER_QPENCODE_OFFSET UNITYSDK_OFFSET(0x1D27BE10)
#define UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_1_OFFSET UNITYSDK_OFFSET(0x1D27CE40)
#define UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET UNITYSDK_OFFSET(0x1D27BD00)
#define UNITYENGINE_WWWTRANSCODER_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1D27B370)
#define UNITYENGINE_WWWTRANSCODER_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1D27B150)
#define UNITYENGINE_WWWTRANSCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D27CEB0)

namespace UnityEngine
{
	inline static constexpr unsigned int WWWTranscoder_TypeDefinitionIndex = 5356;

	class WWWTranscoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_ucHexChars()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x360);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_qpSpace()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x368);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_urlSpace()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x370);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_urlForbidden()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x378);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_dataSpace()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x380);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_qpForbidden()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x388);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_lcHexChars()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x390);
		}
		static ::System::Byte* StaticGet_qpEscapeChar()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x340);
		}
		static ::System::Byte* StaticGet_urlEscapeChar()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WWWTranscoder_TypeDefinitionIndex)->GetStaticField(0x341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER__CCTOR_OFFSET))();
		}

		static ::System::Byte Hex2Byte(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Byte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_HEX2BYTE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* Byte2Hex(::System::Byte a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTE2HEX_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* URLEncode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_URLENCODE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* DataEncode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET))(a1);
		}

		static ::System::String* QPEncode(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_QPENCODE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* Encode(::Il2CppArray<::System::Byte>* a1, ::System::Byte a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4, ::System::Boolean a5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Byte, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_ENCODE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ByteArrayContains(::Il2CppArray<::System::Byte>* a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTEARRAYCONTAINS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* URLDecode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_URLDECODE_OFFSET))(a1);
		}

		static ::System::Boolean ByteSubArrayEquals(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTESUBARRAYEQUALS_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* Decode(::Il2CppArray<::System::Byte>* a1, ::System::Byte a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DECODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SevenBitClean(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean SevenBitClean_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_1_OFFSET))(a1);
		}
	};
}
