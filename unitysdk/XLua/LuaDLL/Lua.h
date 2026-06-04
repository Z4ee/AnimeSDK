#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaGCOptions.h"
#include "unitysdk/XLua/LuaTypes.h"

namespace System { class String; }
namespace XLua::LuaDLL { class ObjectRelationshipReport; }
namespace XLua::LuaDLL { class TableSizeReport; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_LUADLL_LUA_GEN_CLS_INDEXER_OFFSET UNITYSDK_OFFSET(0x12E908D0)
#define XLUA_LUADLL_LUA_GEN_CLS_NEWINDEXER_OFFSET UNITYSDK_OFFSET(0x12E90950)
#define XLUA_LUADLL_LUA_GEN_OBJ_INDEXER_OFFSET UNITYSDK_OFFSET(0x12E907D0)
#define XLUA_LUADLL_LUA_GEN_OBJ_NEWINDEXER_OFFSET UNITYSDK_OFFSET(0x12E90850)
#define XLUA_LUADLL_LUA_GET_ERROR_FUNC_REF_OFFSET UNITYSDK_OFFSET(0x12E909D0)
#define XLUA_LUADLL_LUA_LOAD_ERROR_FUNC_OFFSET UNITYSDK_OFFSET(0x12E90A50)
#define XLUA_LUADLL_LUA_LUAL_ERROR_OFFSET UNITYSDK_OFFSET(0x12E8D240)
#define XLUA_LUADLL_LUA_LUAL_GETMETATABLE_OFFSET UNITYSDK_OFFSET(0x12E8FA80)
#define XLUA_LUADLL_LUA_LUAL_LOADBUFFER_OFFSET UNITYSDK_OFFSET(0x12E8FBF0)
#define XLUA_LUADLL_LUA_LUAL_NEWMETATABLE_OFFSET UNITYSDK_OFFSET(0x12E8F8C0)
#define XLUA_LUADLL_LUA_LUAL_NEWSTATE_OFFSET UNITYSDK_OFFSET(0x12E8D410)
#define XLUA_LUADLL_LUA_LUAL_OPENLIBS_OFFSET UNITYSDK_OFFSET(0x12E8D590)
#define XLUA_LUADLL_LUA_LUAL_REF_1_OFFSET UNITYSDK_OFFSET(0x12E8DF50)
#define XLUA_LUADLL_LUA_LUAL_REF_OFFSET UNITYSDK_OFFSET(0x12E8DEC0)
#define XLUA_LUADLL_LUA_LUAL_TRACEBACK_OFFSET UNITYSDK_OFFSET(0x12E8CB70)
#define XLUA_LUADLL_LUA_LUAL_UNREF_OFFSET UNITYSDK_OFFSET(0x12E8E1E0)
#define XLUA_LUADLL_LUA_LUAL_WHERE_OFFSET UNITYSDK_OFFSET(0x12E90620)
#define XLUA_LUADLL_LUA_LUAOPEN_I64LIB_OFFSET UNITYSDK_OFFSET(0x12E90AE0)
#define XLUA_LUADLL_LUA_LUAOPEN_PROTOLUA_OFFSET UNITYSDK_OFFSET(0x12E8CC20)
#define XLUA_LUADLL_LUA_LUAOPEN_SOCKET_CORE_OFFSET UNITYSDK_OFFSET(0x12E90B60)
#define XLUA_LUADLL_LUA_LUAOPEN_XLUA_OFFSET UNITYSDK_OFFSET(0x12E8D510)
#define XLUA_LUADLL_LUA_LUA_ATPANIC_OFFSET UNITYSDK_OFFSET(0x12E8EB70)
#define XLUA_LUADLL_LUA_LUA_BEYONDINT_OFFSET UNITYSDK_OFFSET(0x12E90510)
#define XLUA_LUADLL_LUA_LUA_CHECKSTACK_OFFSET UNITYSDK_OFFSET(0x12E8FF90)
#define XLUA_LUADLL_LUA_LUA_CLOSE_OFFSET UNITYSDK_OFFSET(0x12E8D490)
#define XLUA_LUADLL_LUA_LUA_CREATETABLE_OFFSET UNITYSDK_OFFSET(0x12E8D6A0)
#define XLUA_LUADLL_LUA_LUA_ERROR_OFFSET UNITYSDK_OFFSET(0x12E8FE90)
#define XLUA_LUADLL_LUA_LUA_GC_OFFSET UNITYSDK_OFFSET(0x12E8CD40)
#define XLUA_LUADLL_LUA_LUA_GETREF_OFFSET UNITYSDK_OFFSET(0x12E8C510)
#define XLUA_LUADLL_LUA_LUA_GETTOP_OFFSET UNITYSDK_OFFSET(0x12E8C490)
#define XLUA_LUADLL_LUA_LUA_GETUPVALUE_OFFSET UNITYSDK_OFFSET(0x12E8CDD0)
#define XLUA_LUADLL_LUA_LUA_GETUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12E90300)
#define XLUA_LUADLL_LUA_LUA_INSERT_OFFSET UNITYSDK_OFFSET(0x12E8D970)
#define XLUA_LUADLL_LUA_LUA_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x12E8DE30)
#define XLUA_LUADLL_LUA_LUA_ISFUNCTION_OFFSET UNITYSDK_OFFSET(0x12E8CF70)
#define XLUA_LUADLL_LUA_LUA_ISINT64_OFFSET UNITYSDK_OFFSET(0x12E90FB0)
#define XLUA_LUADLL_LUA_LUA_ISINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12E90BF0)
#define XLUA_LUADLL_LUA_LUA_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x12E8E3B0)
#define XLUA_LUADLL_LUA_LUA_ISLIGHTUSERDATA_OFFSET UNITYSDK_OFFSET(0x12E8D090)
#define XLUA_LUADLL_LUA_LUA_ISNIL_OFFSET UNITYSDK_OFFSET(0x12E8DD10)
#define XLUA_LUADLL_LUA_LUA_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x12E8DDA0)
#define XLUA_LUADLL_LUA_LUA_ISSTRING_OFFSET UNITYSDK_OFFSET(0x12E8E320)
#define XLUA_LUADLL_LUA_LUA_ISTABLE_OFFSET UNITYSDK_OFFSET(0x12E8D120)
#define XLUA_LUADLL_LUA_LUA_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x12E8D1B0)
#define XLUA_LUADLL_LUA_LUA_ISUINT64_OFFSET UNITYSDK_OFFSET(0x12E91040)
#define XLUA_LUADLL_LUA_LUA_ISUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12E90D90)
#define XLUA_LUADLL_LUA_LUA_NEWTABLE_OFFSET UNITYSDK_OFFSET(0x12E8D730)
#define XLUA_LUADLL_LUA_LUA_NEWUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12E90130)
#define XLUA_LUADLL_LUA_LUA_NEXT_OFFSET UNITYSDK_OFFSET(0x12E90020)
#define XLUA_LUADLL_LUA_LUA_PCALL_OFFSET UNITYSDK_OFFSET(0x12E8E670)
#define XLUA_LUADLL_LUA_LUA_POP_OFFSET UNITYSDK_OFFSET(0x12E8C9E0)
#define XLUA_LUADLL_LUA_LUA_PUSHBOOLEAN_OFFSET UNITYSDK_OFFSET(0x12E8EC90)
#define XLUA_LUADLL_LUA_LUA_PUSHFIXSTRING_OFFSET UNITYSDK_OFFSET(0x12E8F670)
#define XLUA_LUADLL_LUA_LUA_PUSHINT64_OFFSET UNITYSDK_OFFSET(0x12E90EB0)
#define XLUA_LUADLL_LUA_LUA_PUSHINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12E90B70)
#define XLUA_LUADLL_LUA_LUA_PUSHLIGHTUSERDATA_OFFSET UNITYSDK_OFFSET(0x12E900B0)
#define XLUA_LUADLL_LUA_LUA_PUSHNIL_OFFSET UNITYSDK_OFFSET(0x12E8E440)
#define XLUA_LUADLL_LUA_LUA_PUSHNUMBER_OFFSET UNITYSDK_OFFSET(0x12E8EC00)
#define XLUA_LUADLL_LUA_LUA_PUSHSTDCALLCFUNCTION_OFFSET UNITYSDK_OFFSET(0x12E8E4C0)
#define XLUA_LUADLL_LUA_LUA_PUSHSTRING_1_OFFSET UNITYSDK_OFFSET(0x12E8F570)
#define XLUA_LUADLL_LUA_LUA_PUSHSTRING_OFFSET UNITYSDK_OFFSET(0x12E8EE10)
#define XLUA_LUADLL_LUA_LUA_PUSHTHREAD_OFFSET UNITYSDK_OFFSET(0x12E8CEF0)
#define XLUA_LUADLL_LUA_LUA_PUSHUINT64_OFFSET UNITYSDK_OFFSET(0x12E90F30)
#define XLUA_LUADLL_LUA_LUA_PUSHUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12E90D10)
#define XLUA_LUADLL_LUA_LUA_PUSHVALUE_OFFSET UNITYSDK_OFFSET(0x12E8DC10)
#define XLUA_LUADLL_LUA_LUA_RAWEQUAL_OFFSET UNITYSDK_OFFSET(0x12E8C5C0)
#define XLUA_LUADLL_LUA_LUA_RAWGET_OFFSET UNITYSDK_OFFSET(0x12E8DA70)
#define XLUA_LUADLL_LUA_LUA_RAWSET_OFFSET UNITYSDK_OFFSET(0x12E8DB00)
#define XLUA_LUADLL_LUA_LUA_REMOVE_OFFSET UNITYSDK_OFFSET(0x12E8D9F0)
#define XLUA_LUADLL_LUA_LUA_REPLACE_OFFSET UNITYSDK_OFFSET(0x12E8DC90)
#define XLUA_LUADLL_LUA_LUA_SETFENV_OFFSET UNITYSDK_OFFSET(0x12E8D380)
#define XLUA_LUADLL_LUA_LUA_SETMETATABLE_OFFSET UNITYSDK_OFFSET(0x12E8DB80)
#define XLUA_LUADLL_LUA_LUA_SETTOP_OFFSET UNITYSDK_OFFSET(0x12E8C650)
#define XLUA_LUADLL_LUA_LUA_SETUPVALUE_OFFSET UNITYSDK_OFFSET(0x12E8CE60)
#define XLUA_LUADLL_LUA_LUA_SETUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12E90270)
#define XLUA_LUADLL_LUA_LUA_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x12E8E8B0)
#define XLUA_LUADLL_LUA_LUA_TOBYTES_OFFSET UNITYSDK_OFFSET(0x12E8F770)
#define XLUA_LUADLL_LUA_LUA_TOINT64_OFFSET UNITYSDK_OFFSET(0x12E910D0)
#define XLUA_LUADLL_LUA_LUA_TOINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12E90C80)
#define XLUA_LUADLL_LUA_LUA_TOLSTRING_OFFSET UNITYSDK_OFFSET(0x12E8E940)
#define XLUA_LUADLL_LUA_LUA_TONUMBER_OFFSET UNITYSDK_OFFSET(0x12E8E710)
#define XLUA_LUADLL_LUA_LUA_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x12E8C950)
#define XLUA_LUADLL_LUA_LUA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E8E9D0)
#define XLUA_LUADLL_LUA_LUA_TOTHREAD_OFFSET UNITYSDK_OFFSET(0x12E8CC30)
#define XLUA_LUADLL_LUA_LUA_TOUINT64_OFFSET UNITYSDK_OFFSET(0x12E91160)
#define XLUA_LUADLL_LUA_LUA_TOUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12E90E20)
#define XLUA_LUADLL_LUA_LUA_TOUSERDATA_OFFSET UNITYSDK_OFFSET(0x12E919F0)
#define XLUA_LUADLL_LUA_LUA_TYPE_OFFSET UNITYSDK_OFFSET(0x12E8D000)
#define XLUA_LUADLL_LUA_LUA_UNREF_OFFSET UNITYSDK_OFFSET(0x12E8E270)
#define XLUA_LUADLL_LUA_PCALL_PREPARE_OFFSET UNITYSDK_OFFSET(0x12E8E150)
#define XLUA_LUADLL_LUA_XLUAL_LOADBUFFER_OFFSET UNITYSDK_OFFSET(0x12E8FB30)
#define XLUA_LUADLL_LUA_XLUAL_SET_CODEGEN_OFFSET UNITYSDK_OFFSET(0x12E90390)
#define XLUA_LUADLL_LUA_XLUAL_SET_DEBUG_LEVEL_OFFSET UNITYSDK_OFFSET(0x12E90410)
#define XLUA_LUADLL_LUA_XLUAL_SET_OPTIMIZATION_LEVEL_OFFSET UNITYSDK_OFFSET(0x12E90490)
#define XLUA_LUADLL_LUA_XLUA_CSHARP_ERROR_OFFSET UNITYSDK_OFFSET(0x12E8FF10)
#define XLUA_LUADLL_LUA_XLUA_CSHARP_STR_ERROR_OFFSET UNITYSDK_OFFSET(0x12E8D2E0)
#define XLUA_LUADLL_LUA_XLUA_GETGLOBAL_OFFSET UNITYSDK_OFFSET(0x12E8D7B0)
#define XLUA_LUADLL_LUA_XLUA_GETLOADERS_OFFSET UNITYSDK_OFFSET(0x12E8D8F0)
#define XLUA_LUADLL_LUA_XLUA_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x12E91A80)
#define XLUA_LUADLL_LUA_XLUA_GET_LIB_VERSION_OFFSET UNITYSDK_OFFSET(0x12E8CCC0)
#define XLUA_LUADLL_LUA_XLUA_GET_REGISTRY_INDEX_OFFSET UNITYSDK_OFFSET(0x12E91B10)
#define XLUA_LUADLL_LUA_XLUA_GLOBAL_POINTER_OFFSET UNITYSDK_OFFSET(0x12E8CB60)
#define XLUA_LUADLL_LUA_XLUA_GL_OFFSET UNITYSDK_OFFSET(0x12E92850)
#define XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_1_OFFSET UNITYSDK_OFFSET(0x12E927A0)
#define XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_OFFSET UNITYSDK_OFFSET(0x12E926E0)
#define XLUA_LUADLL_LUA_XLUA_OBJLEN_OFFSET UNITYSDK_OFFSET(0x12E8D610)
#define XLUA_LUADLL_LUA_XLUA_PACK_DECIMAL_OFFSET UNITYSDK_OFFSET(0x12E92590)
#define XLUA_LUADLL_LUA_XLUA_PACK_DOUBLE_OFFSET UNITYSDK_OFFSET(0x12E917A0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT2_OFFSET UNITYSDK_OFFSET(0x12E91CF0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT3_OFFSET UNITYSDK_OFFSET(0x12E91E40)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT4_OFFSET UNITYSDK_OFFSET(0x12E91FC0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT5_OFFSET UNITYSDK_OFFSET(0x12E92180)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT6_OFFSET UNITYSDK_OFFSET(0x12E92370)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT_OFFSET UNITYSDK_OFFSET(0x12E91670)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT16_T_OFFSET UNITYSDK_OFFSET(0x12E91310)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT32_T_OFFSET UNITYSDK_OFFSET(0x12E91430)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT64_T_OFFSET UNITYSDK_OFFSET(0x12E91550)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT8_T_OFFSET UNITYSDK_OFFSET(0x12E911F0)
#define XLUA_LUADLL_LUA_XLUA_PGETTABLE_BYPATH_OFFSET UNITYSDK_OFFSET(0x12E91B90)
#define XLUA_LUADLL_LUA_XLUA_PGETTABLE_OFFSET UNITYSDK_OFFSET(0x12E8F960)
#define XLUA_LUADLL_LUA_XLUA_PSETTABLE_BYPATH_OFFSET UNITYSDK_OFFSET(0x12E91C40)
#define XLUA_LUADLL_LUA_XLUA_PSETTABLE_OFFSET UNITYSDK_OFFSET(0x12E8F9F0)
#define XLUA_LUADLL_LUA_XLUA_PUSHASCIISTRING_OFFSET UNITYSDK_OFFSET(0x12E8F290)
#define XLUA_LUADLL_LUA_XLUA_PUSHCSOBJ_OFFSET UNITYSDK_OFFSET(0x12E90730)
#define XLUA_LUADLL_LUA_XLUA_PUSHCSTABLE_OFFSET UNITYSDK_OFFSET(0x12E91960)
#define XLUA_LUADLL_LUA_XLUA_PUSHINTEGER_OFFSET UNITYSDK_OFFSET(0x12E8ED10)
#define XLUA_LUADLL_LUA_XLUA_PUSHLSTRING_OFFSET UNITYSDK_OFFSET(0x12E8F200)
#define XLUA_LUADLL_LUA_XLUA_PUSHSTRUCT_OFFSET UNITYSDK_OFFSET(0x12E918D0)
#define XLUA_LUADLL_LUA_XLUA_PUSHUINT_OFFSET UNITYSDK_OFFSET(0x12E8ED90)
#define XLUA_LUADLL_LUA_XLUA_PUSH_CSHARP_FUNCTION_OFFSET UNITYSDK_OFFSET(0x12E8E560)
#define XLUA_LUADLL_LUA_XLUA_PUSH_TAG_CSOBJ_OFFSET UNITYSDK_OFFSET(0x12E901C0)
#define XLUA_LUADLL_LUA_XLUA_RAWGETI_OFFSET UNITYSDK_OFFSET(0x12E8E030)
#define XLUA_LUADLL_LUA_XLUA_RAWSETI_OFFSET UNITYSDK_OFFSET(0x12E8E0C0)
#define XLUA_LUADLL_LUA_XLUA_REGISTRY_POINTER_OFFSET UNITYSDK_OFFSET(0x12E8CB50)
#define XLUA_LUADLL_LUA_XLUA_REPORT_OBJECT_RELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x12E8CB40)
#define XLUA_LUADLL_LUA_XLUA_REPORT_TABLE_SIZE_OFFSET UNITYSDK_OFFSET(0x12E8CB30)
#define XLUA_LUADLL_LUA_XLUA_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x12E8D850)
#define XLUA_LUADLL_LUA_XLUA_TAG_OFFSET UNITYSDK_OFFSET(0x12E905A0)
#define XLUA_LUADLL_LUA_XLUA_TOCSOBJ_FAST_OFFSET UNITYSDK_OFFSET(0x12E8FE00)
#define XLUA_LUADLL_LUA_XLUA_TOCSOBJ_SAFE_OFFSET UNITYSDK_OFFSET(0x12E8FD70)
#define XLUA_LUADLL_LUA_XLUA_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x12E8E790)
#define XLUA_LUADLL_LUA_XLUA_TOUINT_OFFSET UNITYSDK_OFFSET(0x12E8E820)
#define XLUA_LUADLL_LUA_XLUA_TRYGET_CACHEDUD_OFFSET UNITYSDK_OFFSET(0x12E906A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_DECIMAL_OFFSET UNITYSDK_OFFSET(0x12E92620)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_DOUBLE_OFFSET UNITYSDK_OFFSET(0x12E91840)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT2_OFFSET UNITYSDK_OFFSET(0x12E91DA0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT3_OFFSET UNITYSDK_OFFSET(0x12E91F10)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT4_OFFSET UNITYSDK_OFFSET(0x12E920C0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT5_OFFSET UNITYSDK_OFFSET(0x12E922A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT6_OFFSET UNITYSDK_OFFSET(0x12E924B0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT_OFFSET UNITYSDK_OFFSET(0x12E91710)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT16_T_OFFSET UNITYSDK_OFFSET(0x12E913A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT32_T_OFFSET UNITYSDK_OFFSET(0x12E914C0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT64_T_OFFSET UNITYSDK_OFFSET(0x12E915E0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT8_T_OFFSET UNITYSDK_OFFSET(0x12E91280)
#define XLUA_LUADLL_LUA_XLUA_UPVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x12E8E5F0)
#define XLUA_LUADLL_LUA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E928E0)
#define XLUA_LUADLL_LUA__CTOR_OFFSET UNITYSDK_OFFSET(0x12E928D0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int Lua_TypeDefinitionIndex = 48385;

	class Lua : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Lua_TypeDefinitionIndex)->GetStaticField(0x15520);
		}
		// static const ::System::String* LUADLL; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA__CCTOR_OFFSET))();
		}

		static ::System::Void xlua_report_table_size(::System::IntPtr a1, ::XLua::LuaDLL::TableSizeReport* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::TableSizeReport*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REPORT_TABLE_SIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_report_object_relationship(::System::IntPtr a1, ::XLua::LuaDLL::ObjectRelationshipReport* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::ObjectRelationshipReport*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REPORT_OBJECT_RELATIONSHIP_OFFSET))(a1, a2);
		}

		static ::System::IntPtr xlua_registry_pointer(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REGISTRY_POINTER_OFFSET))(a1);
		}

		static ::System::IntPtr xlua_global_pointer(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GLOBAL_POINTER_OFFSET))(a1);
		}

		static ::System::Void luaL_traceback(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_TRACEBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 luaopen_protolua(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_PROTOLUA_OFFSET))(a1);
		}

		static ::System::IntPtr lua_tothread(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOTHREAD_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_get_lib_version()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GET_LIB_VERSION_OFFSET))();
		}

		static ::System::Int32 lua_gc(::System::IntPtr a1, ::XLua::LuaGCOptions a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::XLua::LuaGCOptions, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GC_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_getupvalue(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETUPVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_setupvalue(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETUPVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 lua_pushthread(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHTHREAD_OFFSET))(a1);
		}

		static ::System::Boolean lua_isfunction(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISFUNCTION_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_islightuserdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISLIGHTUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_istable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISTABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isthread(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISTHREAD_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_error(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_setfenv(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETFENV_OFFSET))(a1, a2);
		}

		static ::System::IntPtr luaL_newstate()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_NEWSTATE_OFFSET))();
		}

		static ::System::Void lua_close(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CLOSE_OFFSET))(a1);
		}

		static ::System::Void luaopen_xlua(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_XLUA_OFFSET))(a1);
		}

		static ::System::Void luaL_openlibs(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_OPENLIBS_OFFSET))(a1);
		}

		static ::System::UInt32 xlua_objlen(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_OBJLEN_OFFSET))(a1, a2);
		}

		static ::System::Void lua_createtable(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CREATETABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_newtable(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEWTABLE_OFFSET))(a1);
		}

		static ::System::Int32 xlua_getglobal(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETGLOBAL_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_setglobal(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_SETGLOBAL_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_getloaders(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETLOADERS_OFFSET))(a1);
		}

		static ::System::Void lua_settop(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETTOP_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pop(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_POP_OFFSET))(a1, a2);
		}

		static ::System::Void lua_insert(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_INSERT_OFFSET))(a1, a2);
		}

		static ::System::Void lua_remove(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_REMOVE_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_rawget(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWGET_OFFSET))(a1, a2);
		}

		static ::System::Void lua_rawset(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWSET_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_setmetatable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETMETATABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_rawequal(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWEQUAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_pushvalue(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void lua_replace(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_REPLACE_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_gettop(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETTOP_OFFSET))(a1);
		}

		static ::XLua::LuaTypes lua_type(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::XLua::LuaTypes(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isnil(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISNIL_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isnumber(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isboolean(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_ref(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_REF_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_ref_1(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_REF_1_OFFSET))(a1);
		}

		static ::System::Void xlua_rawgeti(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_RAWGETI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_rawseti(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_RAWSETI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_getref(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETREF_OFFSET))(a1, a2);
		}

		static ::System::Int32 pcall_prepare(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_PCALL_PREPARE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void luaL_unref(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_UNREF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_unref(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_UNREF_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isstring(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isinteger(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushnil(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHNIL_OFFSET))(a1);
		}

		static ::System::Void lua_pushstdcallcfunction(::System::IntPtr a1, ::XLua::LuaDLL::lua_CSFunction* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTDCALLCFUNCTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_upvalueindex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UPVALUEINDEX_OFFSET))(a1);
		}

		static ::System::Int32 lua_pcall(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PCALL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Double lua_tonumber(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TONUMBER_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_tointeger(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOINTEGER_OFFSET))(a1, a2);
		}

		static ::System::UInt32 xlua_touint(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOUINT_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_toboolean(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_topointer(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOPOINTER_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_tolstring(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr& a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOLSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* lua_tostring(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOSTRING_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_atpanic(::System::IntPtr a1, ::XLua::LuaDLL::lua_CSFunction* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ATPANIC_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushnumber(::System::IntPtr a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushboolean(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_pushinteger(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_pushuint(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHUINT_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushstring(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTRING_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_pushlstring(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHLSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_pushasciistring(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHASCIISTRING_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushstring_1(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTRING_1_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushfixstring(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHFIXSTRING_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* lua_tobytes(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOBYTES_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_newmetatable(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_NEWMETATABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_pgettable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PGETTABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_psettable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PSETTABLE_OFFSET))(a1, a2);
		}

		static ::System::Void luaL_getmetatable(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_GETMETATABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xluaL_loadbuffer(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_LOADBUFFER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 luaL_loadbuffer(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_LOADBUFFER_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_tocsobj_safe(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOCSOBJ_SAFE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_tocsobj_fast(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOCSOBJ_FAST_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_error(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ERROR_OFFSET))(a1);
		}

		static ::System::Boolean lua_checkstack(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CHECKSTACK_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_next(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEXT_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushlightuserdata(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHLIGHTUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_newuserdatadtor(::System::IntPtr a1, ::System::UInt64 a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEWUSERDATADTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_push_tag_csobj(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSH_TAG_CSOBJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 lua_setuserdatadtor(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETUSERDATADTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_getuserdatadtor(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETUSERDATADTOR_OFFSET))(a1, a2);
		}

		static ::System::Void xluaL_set_codegen(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_CODEGEN_OFFSET))(a1);
		}

		static ::System::Void xluaL_set_debug_level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_DEBUG_LEVEL_OFFSET))(a1);
		}

		static ::System::Void xluaL_set_optimization_level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_OPTIMIZATION_LEVEL_OFFSET))(a1);
		}

		static ::System::Int32 lua_beyondint(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_BEYONDINT_OFFSET))(a1, a2);
		}

		static ::System::IntPtr xlua_tag()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TAG_OFFSET))();
		}

		static ::System::Void luaL_where(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_WHERE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_tryget_cachedud(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TRYGET_CACHEDUD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_pushcsobj(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHCSOBJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 gen_obj_indexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_OBJ_INDEXER_OFFSET))(a1);
		}

		static ::System::Int32 gen_obj_newindexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_OBJ_NEWINDEXER_OFFSET))(a1);
		}

		static ::System::Int32 gen_cls_indexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_CLS_INDEXER_OFFSET))(a1);
		}

		static ::System::Int32 gen_cls_newindexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_CLS_NEWINDEXER_OFFSET))(a1);
		}

		static ::System::Int32 get_error_func_ref(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GET_ERROR_FUNC_REF_OFFSET))(a1);
		}

		static ::System::Int32 load_error_func(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LOAD_ERROR_FUNC_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaopen_i64lib(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_I64LIB_OFFSET))(a1);
		}

		static ::System::Int32 luaopen_socket_core(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_SOCKET_CORE_OFFSET))(a1);
		}

		static ::System::Void lua_pushint64_userdata(::System::IntPtr a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Int64 lua_toint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushuint64_userdata(::System::IntPtr a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHUINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isuint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISUINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Int64 lua_touint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushint64(::System::IntPtr a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHINT64_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushuint64(::System::IntPtr a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHUINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isuint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISUINT64_OFFSET))(a1, a2);
		}

		static ::System::Int64 lua_toint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOINT64_OFFSET))(a1, a2);
		}

		static ::System::UInt64 lua_touint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUINT64_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_push_csharp_function(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSH_CSHARP_FUNCTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_csharp_str_error(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_CSHARP_STR_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_csharp_error(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_CSHARP_ERROR_OFFSET))(a1);
		}

		static ::System::Boolean xlua_pack_int8_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT8_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int8_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT8_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_int16_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT16_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int16_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT16_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_int32_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT32_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int32_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT32_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_int64_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT64_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int64_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT64_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_float(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_float(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_double(::System::IntPtr a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_DOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_double(::System::IntPtr a1, ::System::Int32 a2, ::System::Double& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_DOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr xlua_pushstruct(::System::IntPtr a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHSTRUCT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_pushcstable(::System::IntPtr a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHCSTABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_touserdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_gettypeid(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETTYPEID_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_get_registry_index()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GET_REGISTRY_INDEX_OFFSET))();
		}

		static ::System::Int32 xlua_pgettable_bypath(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PGETTABLE_BYPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_psettable_bypath(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PSETTABLE_BYPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_float2(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean xlua_unpack_float2(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean xlua_pack_float3(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean xlua_unpack_float3(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean xlua_pack_float4(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean xlua_unpack_float4(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean xlua_pack_float5(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean xlua_unpack_float5(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Single& a7)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean xlua_pack_float6(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean xlua_unpack_float6(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Single& a7, ::System::Single& a8)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean xlua_pack_decimal(::System::IntPtr a1, ::System::Int32 a2, ::System::Decimal& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_DECIMAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_decimal(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte& a3, ::System::Byte& a4, ::System::Int32& a5, ::System::UInt64& a6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&, ::System::Byte&, ::System::Int32&, ::System::UInt64&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_DECIMAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean xlua_is_eq_str(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_is_eq_str_1(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr xlua_gl(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GL_OFFSET))(a1);
		}
	};
}
