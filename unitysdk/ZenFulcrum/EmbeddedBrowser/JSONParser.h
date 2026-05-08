#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_CONVERTFROMUTF32_OFFSET UNITYSDK_OFFSET(0x1C10EF10)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C10EE70)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_ESCAPETOJAVASCRIPTSTRING_OFFSET UNITYSDK_OFFSET(0x1C10D2E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x1C10F150)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1C10DEC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C10DAF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1C10E940)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1C10EC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C10D7A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1C10DF30)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1C10CF50)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1C10CCD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1C110060)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZENUMBER_OFFSET UNITYSDK_OFFSET(0x1C110420)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C10FAF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1C10F640)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1C10F310)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C10F200)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_TRYDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C10CE50)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C10CB80)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSONParser_TypeDefinitionIndex = 31140;

	class JSONParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_EscapeTable()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JSONParser_TypeDefinitionIndex)->GetStaticField(0x256E0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_EscapeCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JSONParser_TypeDefinitionIndex)->GetStaticField(0x256E8);
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

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* Parse(::System::String* json)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSE_OFFSET))(json);
		}

		static ::System::Boolean TryDeserializeObject(::System::String* json, ::ZenFulcrum::EmbeddedBrowser::JSONNode*& obj)
		{
			return ((::System::Boolean(*)(::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_TRYDESERIALIZEOBJECT_OFFSET))(json, obj);
		}

		static ::System::String* EscapeToJavascriptString(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_ESCAPETOJAVASCRIPTSTRING_OFFSET))(jsonString);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseObject(::Il2CppArray<::System::Char>* json, ::System::Int32& index, ::System::Boolean& success)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEOBJECT_OFFSET))(json, index, success);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseArray(::Il2CppArray<::System::Char>* json, ::System::Int32& index, ::System::Boolean& success)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEARRAY_OFFSET))(json, index, success);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseValue(::Il2CppArray<::System::Char>* json, ::System::Int32& index, ::System::Boolean& success)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSEVALUE_OFFSET))(json, index, success);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseString(::Il2CppArray<::System::Char>* json, ::System::Int32& index, ::System::Boolean& success)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSESTRING_OFFSET))(json, index, success);
		}

		static ::System::String* ConvertFromUtf32(::System::Int32 utf32)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_CONVERTFROMUTF32_OFFSET))(utf32);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* ParseNumber(::Il2CppArray<::System::Char>* json, ::System::Int32& index, ::System::Boolean& success)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_PARSENUMBER_OFFSET))(json, index, success);
		}

		static ::System::Int32 GetLastIndexOfNumber(::Il2CppArray<::System::Char>* json, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_GETLASTINDEXOFNUMBER_OFFSET))(json, index);
		}

		static ::System::Void EatWhitespace(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_EATWHITESPACE_OFFSET))(json, index);
		}

		static ::System::Int32 LookAhead(::Il2CppArray<::System::Char>* json, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_LOOKAHEAD_OFFSET))(json, index);
		}

		static ::System::Int32 NextToken(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_NEXTTOKEN_OFFSET))(json, index);
		}

		static ::System::String* Serialize(::ZenFulcrum::EmbeddedBrowser::JSONNode* node)
		{
			return ((::System::String*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZE_OFFSET))(node);
		}

		static ::System::Boolean SerializeValue(::ZenFulcrum::EmbeddedBrowser::JSONNode* value, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEVALUE_OFFSET))(value, builder);
		}

		static ::System::Boolean SerializeObject(::System::Collections::Generic::IEnumerable_1<::System::String*>* keys, ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* values, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEOBJECT_OFFSET))(keys, values, builder);
		}

		static ::System::Boolean SerializeArray(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* anArray, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZEARRAY_OFFSET))(anArray, builder);
		}

		static ::System::Boolean SerializeString(::System::String* aString, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZESTRING_OFFSET))(aString, builder);
		}

		static ::System::Boolean SerializeNumber(::System::Double number, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONPARSER_SERIALIZENUMBER_OFFSET))(number, builder);
		}
	};
}
