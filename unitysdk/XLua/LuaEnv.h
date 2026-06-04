#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaEnv_GCAction.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace XLua { class LuaEnv_CustomLoader; }
namespace XLua { class LuaEnv_DtorFunction; }
namespace XLua { class LuaFunction; }
namespace XLua { class LuaTable; }
namespace XLua { class ObjectTranslator; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_LUAENV_ADDBUILDIN_OFFSET UNITYSDK_OFFSET(0x12E95230)
#define XLUA_LUAENV_ADDINITER_OFFSET UNITYSDK_OFFSET(0x12E953E0)
#define XLUA_LUAENV_ADDLOADER_OFFSET UNITYSDK_OFFSET(0x12E96700)
#define XLUA_LUAENV_ADDSEARCHER_OFFSET UNITYSDK_OFFSET(0x12E94CE0)
#define XLUA_LUAENV_ALIAS_OFFSET UNITYSDK_OFFSET(0x12E95C90)
#define XLUA_LUAENV_CREATEUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12E952F0)
#define XLUA_LUAENV_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x12E96500)
#define XLUA_LUAENV_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E962B0)
#define XLUA_LUAENV_DOSTRING_1_OFFSET UNITYSDK_OFFSET(0x12E95140)
#define XLUA_LUAENV_DOSTRING_OFFSET UNITYSDK_OFFSET(0x12E955B0)
#define XLUA_LUAENV_DTORFUNCTIONMETAFUNCTION_OFFSET UNITYSDK_OFFSET(0x12E92CF0)
#define XLUA_LUAENV_EQUEUEGCACTION_OFFSET UNITYSDK_OFFSET(0x12E8C010)
#define XLUA_LUAENV_FULLGC_OFFSET UNITYSDK_OFFSET(0x12E96440)
#define XLUA_LUAENV_GCSTEP_OFFSET UNITYSDK_OFFSET(0x12E96B40)
#define XLUA_LUAENV_GC_OFFSET UNITYSDK_OFFSET(0x12E96080)
#define XLUA_LUAENV_GET_GCSTEPMUL_OFFSET UNITYSDK_OFFSET(0x12E96780)
#define XLUA_LUAENV_GET_GLOBAL_OFFSET UNITYSDK_OFFSET(0x12E95540)
#define XLUA_LUAENV_GET_L_OFFSET UNITYSDK_OFFSET(0x12E8BFC0)
#define XLUA_LUAENV_GET_MEMROY_OFFSET UNITYSDK_OFFSET(0x12E96C10)
#define XLUA_LUAENV_GET_TRACEBACK_OFFSET UNITYSDK_OFFSET(0x12E96CD0)
#define XLUA_LUAENV_GET_TRANSLATOR_OFFSET UNITYSDK_OFFSET(0x12E92D30)
#define XLUA_LUAENV_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x12E95550)
#define XLUA_LUAENV_NEWTABLE_OFFSET UNITYSDK_OFFSET(0x12E96090)
#define XLUA_LUAENV_OBJECTVALIDCHECK_OFFSET UNITYSDK_OFFSET(0x12E95CB0)
#define XLUA_LUAENV_ONDISPOSEDEBUGGER_OFFSET UNITYSDK_OFFSET(0x12E953D0)
#define XLUA_LUAENV_RESTARTGC_OFFSET UNITYSDK_OFFSET(0x12E96A80)
#define XLUA_LUAENV_SET_GCSTEPMUL_OFFSET UNITYSDK_OFFSET(0x12E96900)
#define XLUA_LUAENV_STARTDEBUGGER_OFFSET UNITYSDK_OFFSET(0x12E953C0)
#define XLUA_LUAENV_STOPGC_OFFSET UNITYSDK_OFFSET(0x12E969C0)
#define XLUA_LUAENV_THROWEXCEPTIONFROMERROR_OFFSET UNITYSDK_OFFSET(0x12E95A80)
#define XLUA_LUAENV_TICK_OFFSET UNITYSDK_OFFSET(0x12E95CF0)
#define XLUA_LUAENV__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E96DB0)
#define XLUA_LUAENV__CTOR_OFFSET UNITYSDK_OFFSET(0x12E92D40)

namespace XLua
{
	inline static constexpr unsigned int LuaEnv_TypeDefinitionIndex = 46986;

	class LuaEnv : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action_2<::XLua::LuaEnv*, ::XLua::ObjectTranslator*>*>** StaticGet_initers()
		{
			return (::System::Collections::Generic::List_1<::System::Action_2<::XLua::LuaEnv*, ::XLua::ObjectTranslator*>*>**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv_TypeDefinitionIndex)->GetStaticField(0x15840);
		}
		static ::XLua::LuaEnv_DtorFunction** StaticGet_DtorFunctionMeta()
		{
			return (::XLua::LuaEnv_DtorFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv_TypeDefinitionIndex)->GetStaticField(0x15848);
		}
		// static const ::System::String* CSHARP_NAMESPACE; // 0x0
		// static const ::System::String* MAIN_SHREAD; // 0x0
		// static const ::System::Int32 LIB_VERSION_EXPECT = 0x69; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::XLua::LuaDLL::lua_CSFunction*>* buildin_initer; // 0x10
		::System::Func_2<::System::Object*, ::System::Boolean>* object_valid_checker; // 0x18
		::XLua::ObjectTranslator* translator; // 0x20
		::System::Collections::Generic::Queue_1<::XLua::LuaEnv_GCAction>* refQueue; // 0x28
		::System::Collections::Generic::List_1<::XLua::LuaEnv_CustomLoader*>* customLoaders; // 0x30
		::System::String* init_xlua; // 0x38
		::XLua::LuaTable* _G; // 0x40
		::System::Boolean disposed; // 0x48
		::System::Int32 max_check_per_tick; // 0x4C
		::System::IntPtr rawL; // 0x50
		::System::Int32 errorFuncRef; // 0x58
		::System::Int32 last_check_point; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_LUAENV__CCTOR_OFFSET))();
		}

		::System::IntPtr get_L()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GET_L_OFFSET))(this);
		}

		::XLua::ObjectTranslator* get_Translator()
		{
			return ((::XLua::ObjectTranslator*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GET_TRANSLATOR_OFFSET))(this);
		}

		::System::Void StartDebugger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_STARTDEBUGGER_OFFSET))(this);
		}

		::System::Void OnDisposeDebugger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_ONDISPOSEDEBUGGER_OFFSET))(this);
		}

		static ::System::Void CreateUserDataDtor(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CREATEUSERDATADTOR_OFFSET))(a1, a2);
		}

		static ::System::Void DtorFunctionMetaFunction(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTIONMETAFUNCTION_OFFSET))(a1, a2);
		}

		static ::System::Void AddIniter(::System::Action_2<::XLua::LuaEnv*, ::XLua::ObjectTranslator*>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::XLua::LuaEnv*, ::XLua::ObjectTranslator*>*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_ADDINITER_OFFSET))(a1);
		}

		::XLua::LuaTable* get_Global()
		{
			return ((::XLua::LuaTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GET_GLOBAL_OFFSET))(this);
		}

		::XLua::LuaFunction* LoadString(::System::String* a1, ::System::String* a2, ::XLua::LuaTable* a3)
		{
			return ((::XLua::LuaFunction*(*)(::PVOID, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_LOADSTRING_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* DoString(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::XLua::LuaTable* a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DOSTRING_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* DoString_1(::System::String* a1, ::System::String* a2, ::XLua::LuaTable* a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DOSTRING_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddSearcher(::XLua::LuaDLL::lua_CSFunction* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaDLL::lua_CSFunction*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAENV_ADDSEARCHER_OFFSET))(this, a1, a2);
		}

		::System::Void Alias(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_ALIAS_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean ObjectValidCheck(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_OBJECTVALIDCHECK_OFFSET))(a1);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_TICK_OFFSET))(this);
		}

		::System::Void GC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GC_OFFSET))(this);
		}

		::XLua::LuaTable* NewTable()
		{
			return ((::XLua::LuaTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_NEWTABLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void ThrowExceptionFromError(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAENV_THROWEXCEPTIONFROMERROR_OFFSET))(this, a1);
		}

		::System::Void equeueGCAction(::XLua::LuaEnv_GCAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaEnv_GCAction))((::PBYTE)hIl2Cpp + XLUA_LUAENV_EQUEUEGCACTION_OFFSET))(this, a1);
		}

		::System::Void AddLoader(::XLua::LuaEnv_CustomLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaEnv_CustomLoader*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_ADDLOADER_OFFSET))(this, a1);
		}

		::System::Void AddBuildin(::System::String* a1, ::XLua::LuaDLL::lua_CSFunction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_ADDBUILDIN_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_GcStepmul()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GET_GCSTEPMUL_OFFSET))(this);
		}

		::System::Void set_GcStepmul(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAENV_SET_GCSTEPMUL_OFFSET))(this, a1);
		}

		::System::Void FullGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_FULLGC_OFFSET))(this);
		}

		::System::Void StopGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_STOPGC_OFFSET))(this);
		}

		::System::Void RestartGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_RESTARTGC_OFFSET))(this);
		}

		::System::Boolean GcStep(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GCSTEP_OFFSET))(this, a1);
		}

		::System::Int32 get_Memroy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GET_MEMROY_OFFSET))(this);
		}

		::System::String* get_Traceback()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAENV_GET_TRACEBACK_OFFSET))(this);
		}
	};
}
