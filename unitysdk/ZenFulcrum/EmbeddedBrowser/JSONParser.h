#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_CONVERTFROMUTF32_OFFSET UNITYSDK_OFFSET(0x1BBDEA00)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1BBDE960)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_ESCAPETOJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x1BBDCAD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x1BBDEC00)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1BBDD820)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1BBDD4A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1BBDE450)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1BBDE750)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BBDD150)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1BBDD890)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1BBDC740)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1BBDC500)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1BBDFF70)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZENUMBER_OFFSET UNITYSDK_OFFSET(0x1BBE04B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BBDF810)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1BBDF120)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1BBDECA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBDC240)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_TRYDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BBDC660)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBDC400)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSONParser_TypeDefinitionIndex = 37355;

	class JSONParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_EscapeTable()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JSONParser_TypeDefinitionIndex)->GetStaticField(0x65620);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_EscapeCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JSONParser_TypeDefinitionIndex)->GetStaticField(0x65628);
		}
		// static const ::System::Int32 TOKEN_NONE = 0x0; // 0x0
		// static const ::System::Int32 TOKEN_CURLY_OPEN = 0x1; // 0x0
		// static const ::System::Int32 TOKEN_CURLY_CLOSE = 0x2; // 0x0
		// static const ::System::Int32 TOKEN_SQUARED_OPEN = 0x3; // 0x0
		// static const ::System::Int32 TOKEN_SQUARED_CLOSE = 0x4; // 0x0
		// static const ::System::Int32 TOKEN_COLON = 0x5; // 0x0
		// static const ::System::Int32 TOKEN_COMMA = 0x6; // 0x0
		// static const ::System::Int32 TOKEN_STRING = 0x7; // 0x0
		// static const ::System::Int32 TOKEN_NUMBER = 0x8; // 0x0
		// static const ::System::Int32 TOKEN_TRUE = 0x9; // 0x0
		// static const ::System::Int32 TOKEN_FALSE = 0xA; // 0x0
		// static const ::System::Int32 TOKEN_NULL = 0xB; // 0x0
		// static const ::System::Int32 BUILDER_CAPACITY = 0x7D0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER__CCTOR_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* Parse(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSE_OFFSET))(a1);
		}

		static ::System::Boolean TryDeserializeObject(::System::String* a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_TRYDESERIALIZEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::String* EscapeToJavascriptString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_ESCAPETOJAVASCRIPTSTRING_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseObject(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2, ::System::Boolean& a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseArray(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2, ::System::Boolean& a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEARRAY_OFFSET))(a1, a2, a3);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseValue(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2, ::System::Boolean& a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEVALUE_OFFSET))(a1, a2, a3);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseString(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2, ::System::Boolean& a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSESTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ConvertFromUtf32(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_CONVERTFROMUTF32_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseNumber(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2, ::System::Boolean& a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSENUMBER_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetLastIndexOfNumber(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_GETLASTINDEXOFNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Void EatWhitespace(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_EATWHITESPACE_OFFSET))(a1, a2);
		}

		static ::System::Int32 LookAhead(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_LOOKAHEAD_OFFSET))(a1, a2);
		}

		static ::System::Int32 NextToken(::Il2CppArray<::System::Char>* a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_NEXTTOKEN_OFFSET))(a1, a2);
		}

		static ::System::String* Serialize(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::String*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZE_OFFSET))(a1);
		}

		static ::System::Boolean SerializeValue(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEVALUE_OFFSET))(a1, a2);
		}

		static ::System::Boolean SerializeObject(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1, ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SerializeArray(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Boolean SerializeString(::System::String* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZESTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean SerializeNumber(::System::Double a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZENUMBER_OFFSET))(a1, a2);
		}
	};
}
