#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/TemplateEngine/TokenType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text::RegularExpressions { class Capture; }
namespace XLua::TemplateEngine { class Chunk; }
template <typename T1, typename T2, typename T3> class __f__AnonymousType5_3;

#define XLUA_TEMPLATEENGINE_PARSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11745F80)
#define XLUA_TEMPLATEENGINE_PARSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11745FC0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET UNITYSDK_OFFSET(0x11745FD0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET UNITYSDK_OFFSET(0x11746050)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET UNITYSDK_OFFSET(0x117460F0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET UNITYSDK_OFFSET(0x11746170)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET UNITYSDK_OFFSET(0x11746190)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Parser___c_TypeDefinitionIndex = 46473;

	class Parser___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x20B10);
		}
		static ::System::Func_2<::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::XLua::TemplateEngine::Chunk*>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::XLua::TemplateEngine::Chunk*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x20B18);
		}
		static ::XLua::TemplateEngine::Parser___c** StaticGet___9()
		{
			return (::XLua::TemplateEngine::Parser___c**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x20B20);
		}
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x20B28);
		}
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x20B30);
		}
		static ::System::Func_2<::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::System::Int32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Parser___c_TypeDefinitionIndex)->GetStaticField(0x20B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__CTOR_OFFSET))(this);
		}

		::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* _Parse_b__7_0(::System::Text::RegularExpressions::Capture* p)
		{
			return ((::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET))(this, p);
		}

		::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* _Parse_b__7_1(::System::Text::RegularExpressions::Capture* p)
		{
			return ((::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET))(this, p);
		}

		::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* _Parse_b__7_2(::System::Text::RegularExpressions::Capture* p)
		{
			return ((::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET))(this, p);
		}

		::System::Int32 _Parse_b__7_3(::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* p)
		{
			return ((::System::Int32(*)(::PVOID, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET))(this, p);
		}

		::XLua::TemplateEngine::Chunk* _Parse_b__7_4(::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>* m)
		{
			return ((::XLua::TemplateEngine::Chunk*(*)(::PVOID, ::__f__AnonymousType5_3<::XLua::TemplateEngine::TokenType, ::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET))(this, m);
		}
	};
}
