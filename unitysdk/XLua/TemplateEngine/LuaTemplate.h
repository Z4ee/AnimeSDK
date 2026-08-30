#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaFunction; }
namespace XLua { class LuaTable; }
namespace XLua::LuaDLL { class lua_CSFunction; }
namespace XLua::TemplateEngine { class Chunk; }

#define XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x1516A330)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_OFFSET UNITYSDK_OFFSET(0x1516A9C0)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPOSECODE_OFFSET UNITYSDK_OFFSET(0x1516A790)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1516B740)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1516A4D0)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1516B660)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_OPENLIB_OFFSET UNITYSDK_OFFSET(0x1516B810)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1516BB90)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1516BB80)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int LuaTemplate_TypeDefinitionIndex = 50621;

	class LuaTemplate : public ::System::Object
	{
	public:
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet_templateCompileFunction()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaTemplate_TypeDefinitionIndex)->GetStaticField(0x6CC70);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet_templateExecuteFunction()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaTemplate_TypeDefinitionIndex)->GetStaticField(0x6CC78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE__CCTOR_OFFSET))();
		}

		static ::System::String* ComposeCode(::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPOSECODE_OFFSET))(a1);
		}

		static ::XLua::LuaFunction* Compile(::XLua::LuaEnv* a1, ::System::String* a2)
		{
			return ((::XLua::LuaFunction*(*)(::XLua::LuaEnv*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_OFFSET))(a1, a2);
		}

		static ::System::String* Execute(::XLua::LuaFunction* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::String*(*)(::XLua::LuaFunction*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_OFFSET))(a1, a2);
		}

		static ::System::String* Execute_1(::XLua::LuaFunction* a1)
		{
			return ((::System::String*(*)(::XLua::LuaFunction*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_1_OFFSET))(a1);
		}

		static ::System::Int32 Compile_1(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_1_OFFSET))(a1);
		}

		static ::System::Int32 Execute_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_2_OFFSET))(a1);
		}

		static ::System::Void OpenLib(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_OPENLIB_OFFSET))(a1);
		}
	};
}
