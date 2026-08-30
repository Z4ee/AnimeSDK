#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/TemplateEngine/TokenType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text::RegularExpressions { class Capture; }
namespace XLua::TemplateEngine { class Chunk; }
template <typename T1, typename T2, typename T3> class __f__AnonymousType11_3;

#define XLUA_TEMPLATEENGINE_PARSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1516C120)
#define XLUA_TEMPLATEENGINE_PARSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1516C160)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1516C170)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1516C1F0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1516C290)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1516C310)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1516C330)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Parser___c_TypeDefinitionIndex = 50620;

	class Parser___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x6CC90);
		}
		static ::XLua::TemplateEngine::Parser___c** StaticGet___9()
		{
			return (::XLua::TemplateEngine::Parser___c**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x6CC98);
		}
		static ::System::Func_2<::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::XLua::TemplateEngine::Chunk*>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::XLua::TemplateEngine::Chunk*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x6CCA0);
		}
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x6CCA8);
		}
		static ::System::Func_2<::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::System::Int32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x6CCB0);
		}
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x6CCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__CTOR_OFFSET))(this);
		}

		::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* _Parse_b__7_0(::System::Text::RegularExpressions::Capture* a1)
		{
			return ((::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET))(this, a1);
		}

		::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* _Parse_b__7_1(::System::Text::RegularExpressions::Capture* a1)
		{
			return ((::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET))(this, a1);
		}

		::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* _Parse_b__7_2(::System::Text::RegularExpressions::Capture* a1)
		{
			return ((::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET))(this, a1);
		}

		::System::Int32 _Parse_b__7_3(::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET))(this, a1);
		}

		::XLua::TemplateEngine::Chunk* _Parse_b__7_4(::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* a1)
		{
			return ((::XLua::TemplateEngine::Chunk*(*)(::PVOID, ::__f__AnonymousType11_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET))(this, a1);
		}
	};
}
