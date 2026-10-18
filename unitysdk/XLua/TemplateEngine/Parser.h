#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua::TemplateEngine { class Chunk; }

#define XLUA_TEMPLATEENGINE_PARSER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x153BEDF0)
#define XLUA_TEMPLATEENGINE_PARSER_GETREGEXSTRING_OFFSET UNITYSDK_OFFSET(0x153BEC60)
#define XLUA_TEMPLATEENGINE_PARSER_GET_REGEXSTRING_OFFSET UNITYSDK_OFFSET(0x153BEB30)
#define XLUA_TEMPLATEENGINE_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x153BD9B0)
#define XLUA_TEMPLATEENGINE_PARSER_SET_REGEXSTRING_OFFSET UNITYSDK_OFFSET(0x153BEB90)
#define XLUA_TEMPLATEENGINE_PARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x153BEBF0)
#define XLUA_TEMPLATEENGINE_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x153BF010)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 50288;

	class Parser : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__RegexString_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Parser_TypeDefinitionIndex)->GetStaticField(0x6EA70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER__CTOR_OFFSET))(this);
		}

		static ::System::String* get_RegexString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_GET_REGEXSTRING_OFFSET))();
		}

		static ::System::Void set_RegexString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_SET_REGEXSTRING_OFFSET))(a1);
		}

		static ::System::String* EscapeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_ESCAPESTRING_OFFSET))(a1);
		}

		static ::System::String* GetRegexString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_GETREGEXSTRING_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>* Parse(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER_PARSE_OFFSET))(a1);
		}
	};
}
