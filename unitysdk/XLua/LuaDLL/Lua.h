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

#define XLUA_LUADLL_LUA_GEN_CLS_INDEXER_OFFSET UNITYSDK_OFFSET(0x1122F240)
#define XLUA_LUADLL_LUA_GEN_CLS_NEWINDEXER_OFFSET UNITYSDK_OFFSET(0x1122F2C0)
#define XLUA_LUADLL_LUA_GEN_OBJ_INDEXER_OFFSET UNITYSDK_OFFSET(0x1122F140)
#define XLUA_LUADLL_LUA_GEN_OBJ_NEWINDEXER_OFFSET UNITYSDK_OFFSET(0x1122F1C0)
#define XLUA_LUADLL_LUA_GET_ERROR_FUNC_REF_OFFSET UNITYSDK_OFFSET(0x1122F340)
#define XLUA_LUADLL_LUA_LOAD_ERROR_FUNC_OFFSET UNITYSDK_OFFSET(0x1120E0E0)
#define XLUA_LUADLL_LUA_LUAL_ERROR_OFFSET UNITYSDK_OFFSET(0x1122C0C0)
#define XLUA_LUADLL_LUA_LUAL_GETMETATABLE_OFFSET UNITYSDK_OFFSET(0x1122E420)
#define XLUA_LUADLL_LUA_LUAL_LOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1122E590)
#define XLUA_LUADLL_LUA_LUAL_NEWMETATABLE_OFFSET UNITYSDK_OFFSET(0x1122E260)
#define XLUA_LUADLL_LUA_LUAL_NEWSTATE_OFFSET UNITYSDK_OFFSET(0x1122C290)
#define XLUA_LUADLL_LUA_LUAL_OPENLIBS_OFFSET UNITYSDK_OFFSET(0x1122C410)
#define XLUA_LUADLL_LUA_LUAL_REF_1_OFFSET UNITYSDK_OFFSET(0x1122CDD0)
#define XLUA_LUADLL_LUA_LUAL_REF_OFFSET UNITYSDK_OFFSET(0x1122CD40)
#define XLUA_LUADLL_LUA_LUAL_TRACEBACK_OFFSET UNITYSDK_OFFSET(0x1122B9F0)
#define XLUA_LUADLL_LUA_LUAL_UNREF_OFFSET UNITYSDK_OFFSET(0x1122CFD0)
#define XLUA_LUADLL_LUA_LUAL_WHERE_OFFSET UNITYSDK_OFFSET(0x1122EF90)
#define XLUA_LUADLL_LUA_LUAOPEN_I64LIB_OFFSET UNITYSDK_OFFSET(0x1122F3C0)
#define XLUA_LUADLL_LUA_LUAOPEN_PROTOLUA_OFFSET UNITYSDK_OFFSET(0x1122BAA0)
#define XLUA_LUADLL_LUA_LUAOPEN_SOCKET_CORE_OFFSET UNITYSDK_OFFSET(0x1122F440)
#define XLUA_LUADLL_LUA_LUAOPEN_XLUA_OFFSET UNITYSDK_OFFSET(0x1122C390)
#define XLUA_LUADLL_LUA_LUA_ATPANIC_OFFSET UNITYSDK_OFFSET(0x1122D750)
#define XLUA_LUADLL_LUA_LUA_BEYONDINT_OFFSET UNITYSDK_OFFSET(0x1122EE80)
#define XLUA_LUADLL_LUA_LUA_CHECKSTACK_OFFSET UNITYSDK_OFFSET(0x1122E900)
#define XLUA_LUADLL_LUA_LUA_CLOSE_OFFSET UNITYSDK_OFFSET(0x1122C310)
#define XLUA_LUADLL_LUA_LUA_CREATETABLE_OFFSET UNITYSDK_OFFSET(0x1122C520)
#define XLUA_LUADLL_LUA_LUA_ERROR_OFFSET UNITYSDK_OFFSET(0x1122E800)
#define XLUA_LUADLL_LUA_LUA_GC_OFFSET UNITYSDK_OFFSET(0x1122BBC0)
#define XLUA_LUADLL_LUA_LUA_GETREF_OFFSET UNITYSDK_OFFSET(0x1120E170)
#define XLUA_LUADLL_LUA_LUA_GETTOP_OFFSET UNITYSDK_OFFSET(0x1120E060)
#define XLUA_LUADLL_LUA_LUA_GETUPVALUE_OFFSET UNITYSDK_OFFSET(0x1122BC50)
#define XLUA_LUADLL_LUA_LUA_GETUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x1122EC70)
#define XLUA_LUADLL_LUA_LUA_INSERT_OFFSET UNITYSDK_OFFSET(0x1122C7F0)
#define XLUA_LUADLL_LUA_LUA_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1122CCB0)
#define XLUA_LUADLL_LUA_LUA_ISFUNCTION_OFFSET UNITYSDK_OFFSET(0x1122BDF0)
#define XLUA_LUADLL_LUA_LUA_ISINT64_OFFSET UNITYSDK_OFFSET(0x1122F890)
#define XLUA_LUADLL_LUA_LUA_ISINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x1122F4D0)
#define XLUA_LUADLL_LUA_LUA_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x1122D1A0)
#define XLUA_LUADLL_LUA_LUA_ISLIGHTUSERDATA_OFFSET UNITYSDK_OFFSET(0x1122BF10)
#define XLUA_LUADLL_LUA_LUA_ISNIL_OFFSET UNITYSDK_OFFSET(0x1122CB90)
#define XLUA_LUADLL_LUA_LUA_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1122CC20)
#define XLUA_LUADLL_LUA_LUA_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1122D110)
#define XLUA_LUADLL_LUA_LUA_ISTABLE_OFFSET UNITYSDK_OFFSET(0x1122BFA0)
#define XLUA_LUADLL_LUA_LUA_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x1122C030)
#define XLUA_LUADLL_LUA_LUA_ISUINT64_OFFSET UNITYSDK_OFFSET(0x1122F920)
#define XLUA_LUADLL_LUA_LUA_ISUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x1122F670)
#define XLUA_LUADLL_LUA_LUA_NEWTABLE_OFFSET UNITYSDK_OFFSET(0x1122C5B0)
#define XLUA_LUADLL_LUA_LUA_NEWUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x1122EAA0)
#define XLUA_LUADLL_LUA_LUA_NEXT_OFFSET UNITYSDK_OFFSET(0x1122E990)
#define XLUA_LUADLL_LUA_LUA_PCALL_OFFSET UNITYSDK_OFFSET(0x1120DA80)
#define XLUA_LUADLL_LUA_LUA_POP_OFFSET UNITYSDK_OFFSET(0x1122B860)
#define XLUA_LUADLL_LUA_LUA_PUSHBOOLEAN_OFFSET UNITYSDK_OFFSET(0x111CBDF0)
#define XLUA_LUADLL_LUA_LUA_PUSHFIXSTRING_OFFSET UNITYSDK_OFFSET(0x1122E010)
#define XLUA_LUADLL_LUA_LUA_PUSHINT64_OFFSET UNITYSDK_OFFSET(0x1122F790)
#define XLUA_LUADLL_LUA_LUA_PUSHINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x1122F450)
#define XLUA_LUADLL_LUA_LUA_PUSHLIGHTUSERDATA_OFFSET UNITYSDK_OFFSET(0x1122EA20)
#define XLUA_LUADLL_LUA_LUA_PUSHNIL_OFFSET UNITYSDK_OFFSET(0x1122D230)
#define XLUA_LUADLL_LUA_LUA_PUSHNUMBER_OFFSET UNITYSDK_OFFSET(0x1122D7E0)
#define XLUA_LUADLL_LUA_LUA_PUSHSTDCALLCFUNCTION_OFFSET UNITYSDK_OFFSET(0x1122D2B0)
#define XLUA_LUADLL_LUA_LUA_PUSHSTRING_1_OFFSET UNITYSDK_OFFSET(0x1122DF10)
#define XLUA_LUADLL_LUA_LUA_PUSHSTRING_OFFSET UNITYSDK_OFFSET(0x1122D870)
#define XLUA_LUADLL_LUA_LUA_PUSHTHREAD_OFFSET UNITYSDK_OFFSET(0x1122BD70)
#define XLUA_LUADLL_LUA_LUA_PUSHUINT64_OFFSET UNITYSDK_OFFSET(0x1122F810)
#define XLUA_LUADLL_LUA_LUA_PUSHUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x1122F5F0)
#define XLUA_LUADLL_LUA_LUA_PUSHVALUE_OFFSET UNITYSDK_OFFSET(0x1122CA90)
#define XLUA_LUADLL_LUA_LUA_RAWEQUAL_OFFSET UNITYSDK_OFFSET(0x1122B4C0)
#define XLUA_LUADLL_LUA_LUA_RAWGET_OFFSET UNITYSDK_OFFSET(0x1122C8F0)
#define XLUA_LUADLL_LUA_LUA_RAWSET_OFFSET UNITYSDK_OFFSET(0x1122C980)
#define XLUA_LUADLL_LUA_LUA_REMOVE_OFFSET UNITYSDK_OFFSET(0x1122C870)
#define XLUA_LUADLL_LUA_LUA_REPLACE_OFFSET UNITYSDK_OFFSET(0x1122CB10)
#define XLUA_LUADLL_LUA_LUA_SETFENV_OFFSET UNITYSDK_OFFSET(0x1122C200)
#define XLUA_LUADLL_LUA_LUA_SETMETATABLE_OFFSET UNITYSDK_OFFSET(0x1122CA00)
#define XLUA_LUADLL_LUA_LUA_SETTOP_OFFSET UNITYSDK_OFFSET(0x111C01C0)
#define XLUA_LUADLL_LUA_LUA_SETUPVALUE_OFFSET UNITYSDK_OFFSET(0x1122BCE0)
#define XLUA_LUADLL_LUA_LUA_SETUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x1122EBE0)
#define XLUA_LUADLL_LUA_LUA_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x111C0130)
#define XLUA_LUADLL_LUA_LUA_TOBYTES_OFFSET UNITYSDK_OFFSET(0x1122E110)
#define XLUA_LUADLL_LUA_LUA_TOINT64_OFFSET UNITYSDK_OFFSET(0x1122F9B0)
#define XLUA_LUADLL_LUA_LUA_TOINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x1122F560)
#define XLUA_LUADLL_LUA_LUA_TOLSTRING_OFFSET UNITYSDK_OFFSET(0x1122D550)
#define XLUA_LUADLL_LUA_LUA_TONUMBER_OFFSET UNITYSDK_OFFSET(0x111C5350)
#define XLUA_LUADLL_LUA_LUA_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x1122B7D0)
#define XLUA_LUADLL_LUA_LUA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1122D5E0)
#define XLUA_LUADLL_LUA_LUA_TOTHREAD_OFFSET UNITYSDK_OFFSET(0x1122BAB0)
#define XLUA_LUADLL_LUA_LUA_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1122FA40)
#define XLUA_LUADLL_LUA_LUA_TOUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x1122F700)
#define XLUA_LUADLL_LUA_LUA_TOUSERDATA_OFFSET UNITYSDK_OFFSET(0x112302D0)
#define XLUA_LUADLL_LUA_LUA_TYPE_OFFSET UNITYSDK_OFFSET(0x1122BE80)
#define XLUA_LUADLL_LUA_LUA_UNREF_OFFSET UNITYSDK_OFFSET(0x1122D060)
#define XLUA_LUADLL_LUA_PCALL_PREPARE_OFFSET UNITYSDK_OFFSET(0x111BFFE0)
#define XLUA_LUADLL_LUA_XLUAL_LOADBUFFER_OFFSET UNITYSDK_OFFSET(0x1122E4D0)
#define XLUA_LUADLL_LUA_XLUAL_SET_CODEGEN_OFFSET UNITYSDK_OFFSET(0x1122ED00)
#define XLUA_LUADLL_LUA_XLUAL_SET_DEBUG_LEVEL_OFFSET UNITYSDK_OFFSET(0x1122ED80)
#define XLUA_LUADLL_LUA_XLUAL_SET_OPTIMIZATION_LEVEL_OFFSET UNITYSDK_OFFSET(0x1122EE00)
#define XLUA_LUADLL_LUA_XLUA_CSHARP_ERROR_OFFSET UNITYSDK_OFFSET(0x1122E880)
#define XLUA_LUADLL_LUA_XLUA_CSHARP_STR_ERROR_OFFSET UNITYSDK_OFFSET(0x1122C160)
#define XLUA_LUADLL_LUA_XLUA_GETGLOBAL_OFFSET UNITYSDK_OFFSET(0x1122C630)
#define XLUA_LUADLL_LUA_XLUA_GETLOADERS_OFFSET UNITYSDK_OFFSET(0x1122C770)
#define XLUA_LUADLL_LUA_XLUA_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x11230360)
#define XLUA_LUADLL_LUA_XLUA_GET_LIB_VERSION_OFFSET UNITYSDK_OFFSET(0x1122BB40)
#define XLUA_LUADLL_LUA_XLUA_GET_REGISTRY_INDEX_OFFSET UNITYSDK_OFFSET(0x112303F0)
#define XLUA_LUADLL_LUA_XLUA_GLOBAL_POINTER_OFFSET UNITYSDK_OFFSET(0x1122B9E0)
#define XLUA_LUADLL_LUA_XLUA_GL_OFFSET UNITYSDK_OFFSET(0x11231130)
#define XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_1_OFFSET UNITYSDK_OFFSET(0x11231080)
#define XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_OFFSET UNITYSDK_OFFSET(0x11230FC0)
#define XLUA_LUADLL_LUA_XLUA_OBJLEN_OFFSET UNITYSDK_OFFSET(0x1122C490)
#define XLUA_LUADLL_LUA_XLUA_PACK_DECIMAL_OFFSET UNITYSDK_OFFSET(0x11230E70)
#define XLUA_LUADLL_LUA_XLUA_PACK_DOUBLE_OFFSET UNITYSDK_OFFSET(0x11230080)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT2_OFFSET UNITYSDK_OFFSET(0x112305D0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT3_OFFSET UNITYSDK_OFFSET(0x11230720)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT4_OFFSET UNITYSDK_OFFSET(0x112308A0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT5_OFFSET UNITYSDK_OFFSET(0x11230A60)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT6_OFFSET UNITYSDK_OFFSET(0x11230C50)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT_OFFSET UNITYSDK_OFFSET(0x1122FF50)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT16_T_OFFSET UNITYSDK_OFFSET(0x1122FBF0)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT32_T_OFFSET UNITYSDK_OFFSET(0x1122FD10)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT64_T_OFFSET UNITYSDK_OFFSET(0x1122FE30)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT8_T_OFFSET UNITYSDK_OFFSET(0x1122FAD0)
#define XLUA_LUADLL_LUA_XLUA_PGETTABLE_BYPATH_OFFSET UNITYSDK_OFFSET(0x11230470)
#define XLUA_LUADLL_LUA_XLUA_PGETTABLE_OFFSET UNITYSDK_OFFSET(0x1122E300)
#define XLUA_LUADLL_LUA_XLUA_PSETTABLE_BYPATH_OFFSET UNITYSDK_OFFSET(0x11230520)
#define XLUA_LUADLL_LUA_XLUA_PSETTABLE_OFFSET UNITYSDK_OFFSET(0x1122E390)
#define XLUA_LUADLL_LUA_XLUA_PUSHASCIISTRING_OFFSET UNITYSDK_OFFSET(0x1122DC80)
#define XLUA_LUADLL_LUA_XLUA_PUSHCSOBJ_OFFSET UNITYSDK_OFFSET(0x1122F0A0)
#define XLUA_LUADLL_LUA_XLUA_PUSHCSTABLE_OFFSET UNITYSDK_OFFSET(0x11230240)
#define XLUA_LUADLL_LUA_XLUA_PUSHINTEGER_OFFSET UNITYSDK_OFFSET(0x111C9450)
#define XLUA_LUADLL_LUA_XLUA_PUSHLSTRING_OFFSET UNITYSDK_OFFSET(0x1122DBF0)
#define XLUA_LUADLL_LUA_XLUA_PUSHSTRUCT_OFFSET UNITYSDK_OFFSET(0x112301B0)
#define XLUA_LUADLL_LUA_XLUA_PUSHUINT_OFFSET UNITYSDK_OFFSET(0x111D8470)
#define XLUA_LUADLL_LUA_XLUA_PUSH_CSHARP_FUNCTION_OFFSET UNITYSDK_OFFSET(0x1122D3B0)
#define XLUA_LUADLL_LUA_XLUA_PUSH_TAG_CSOBJ_OFFSET UNITYSDK_OFFSET(0x1122EB30)
#define XLUA_LUADLL_LUA_XLUA_RAWGETI_OFFSET UNITYSDK_OFFSET(0x1122CEB0)
#define XLUA_LUADLL_LUA_XLUA_RAWSETI_OFFSET UNITYSDK_OFFSET(0x1122CF40)
#define XLUA_LUADLL_LUA_XLUA_REGISTRY_POINTER_OFFSET UNITYSDK_OFFSET(0x1122B9D0)
#define XLUA_LUADLL_LUA_XLUA_REPORT_OBJECT_RELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x1122B9C0)
#define XLUA_LUADLL_LUA_XLUA_REPORT_TABLE_SIZE_OFFSET UNITYSDK_OFFSET(0x1122B9B0)
#define XLUA_LUADLL_LUA_XLUA_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x1122C6D0)
#define XLUA_LUADLL_LUA_XLUA_TAG_OFFSET UNITYSDK_OFFSET(0x1122EF10)
#define XLUA_LUADLL_LUA_XLUA_TOCSOBJ_FAST_OFFSET UNITYSDK_OFFSET(0x1122E770)
#define XLUA_LUADLL_LUA_XLUA_TOCSOBJ_SAFE_OFFSET UNITYSDK_OFFSET(0x1122E6E0)
#define XLUA_LUADLL_LUA_XLUA_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x111C0790)
#define XLUA_LUADLL_LUA_XLUA_TOUINT_OFFSET UNITYSDK_OFFSET(0x1122D4C0)
#define XLUA_LUADLL_LUA_XLUA_TRYGET_CACHEDUD_OFFSET UNITYSDK_OFFSET(0x1122F010)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_DECIMAL_OFFSET UNITYSDK_OFFSET(0x11230F00)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_DOUBLE_OFFSET UNITYSDK_OFFSET(0x11230120)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT2_OFFSET UNITYSDK_OFFSET(0x11230680)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT3_OFFSET UNITYSDK_OFFSET(0x112307F0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT4_OFFSET UNITYSDK_OFFSET(0x112309A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT5_OFFSET UNITYSDK_OFFSET(0x11230B80)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT6_OFFSET UNITYSDK_OFFSET(0x11230D90)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT_OFFSET UNITYSDK_OFFSET(0x1122FFF0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT16_T_OFFSET UNITYSDK_OFFSET(0x1122FC80)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT32_T_OFFSET UNITYSDK_OFFSET(0x1122FDA0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT64_T_OFFSET UNITYSDK_OFFSET(0x1122FEC0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT8_T_OFFSET UNITYSDK_OFFSET(0x1122FB60)
#define XLUA_LUADLL_LUA_XLUA_UPVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x1122D440)
#define XLUA_LUADLL_LUA__CCTOR_OFFSET UNITYSDK_OFFSET(0x112311C0)
#define XLUA_LUADLL_LUA__CTOR_OFFSET UNITYSDK_OFFSET(0x112311B0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int Lua_TypeDefinitionIndex = 47770;

	class Lua : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Lua_TypeDefinitionIndex)->GetStaticField(0x6B650);
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

		static ::System::Void xlua_report_table_size(::System::IntPtr L, ::XLua::LuaDLL::TableSizeReport* cb, ::System::Int32 fast)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::TableSizeReport*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REPORT_TABLE_SIZE_OFFSET))(L, cb, fast);
		}

		static ::System::Void xlua_report_object_relationship(::System::IntPtr L, ::XLua::LuaDLL::ObjectRelationshipReport* cb)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::ObjectRelationshipReport*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REPORT_OBJECT_RELATIONSHIP_OFFSET))(L, cb);
		}

		static ::System::IntPtr xlua_registry_pointer(::System::IntPtr L)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REGISTRY_POINTER_OFFSET))(L);
		}

		static ::System::IntPtr xlua_global_pointer(::System::IntPtr L)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GLOBAL_POINTER_OFFSET))(L);
		}

		static ::System::Void luaL_traceback(::System::IntPtr L, ::System::IntPtr L1, ::System::String* msg, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_TRACEBACK_OFFSET))(L, L1, msg, level);
		}

		static ::System::Int32 luaopen_protolua(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_PROTOLUA_OFFSET))(L);
		}

		static ::System::IntPtr lua_tothread(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOTHREAD_OFFSET))(L, index);
		}

		static ::System::Int32 xlua_get_lib_version()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GET_LIB_VERSION_OFFSET))();
		}

		static ::System::Int32 lua_gc(::System::IntPtr L, ::XLua::LuaGCOptions what, ::System::Int32 data)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::XLua::LuaGCOptions, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GC_OFFSET))(L, what, data);
		}

		static ::System::IntPtr lua_getupvalue(::System::IntPtr L, ::System::Int32 funcindex, ::System::Int32 n)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETUPVALUE_OFFSET))(L, funcindex, n);
		}

		static ::System::IntPtr lua_setupvalue(::System::IntPtr L, ::System::Int32 funcindex, ::System::Int32 n)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETUPVALUE_OFFSET))(L, funcindex, n);
		}

		static ::System::Int32 lua_pushthread(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHTHREAD_OFFSET))(L);
		}

		static ::System::Boolean lua_isfunction(::System::IntPtr L, ::System::Int32 stackPos)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISFUNCTION_OFFSET))(L, stackPos);
		}

		static ::System::Boolean lua_islightuserdata(::System::IntPtr L, ::System::Int32 stackPos)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISLIGHTUSERDATA_OFFSET))(L, stackPos);
		}

		static ::System::Boolean lua_istable(::System::IntPtr L, ::System::Int32 stackPos)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISTABLE_OFFSET))(L, stackPos);
		}

		static ::System::Boolean lua_isthread(::System::IntPtr L, ::System::Int32 stackPos)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISTHREAD_OFFSET))(L, stackPos);
		}

		static ::System::Int32 luaL_error(::System::IntPtr L, ::System::String* message)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_ERROR_OFFSET))(L, message);
		}

		static ::System::Int32 lua_setfenv(::System::IntPtr L, ::System::Int32 stackPos)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETFENV_OFFSET))(L, stackPos);
		}

		static ::System::IntPtr luaL_newstate()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_NEWSTATE_OFFSET))();
		}

		static ::System::Void lua_close(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CLOSE_OFFSET))(L);
		}

		static ::System::Void luaopen_xlua(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_XLUA_OFFSET))(L);
		}

		static ::System::Void luaL_openlibs(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_OPENLIBS_OFFSET))(L);
		}

		static ::System::UInt32 xlua_objlen(::System::IntPtr L, ::System::Int32 stackPos)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_OBJLEN_OFFSET))(L, stackPos);
		}

		static ::System::Void lua_createtable(::System::IntPtr L, ::System::Int32 narr, ::System::Int32 nrec)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CREATETABLE_OFFSET))(L, narr, nrec);
		}

		static ::System::Void lua_newtable(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEWTABLE_OFFSET))(L);
		}

		static ::System::Int32 xlua_getglobal(::System::IntPtr L, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETGLOBAL_OFFSET))(L, name);
		}

		static ::System::Int32 xlua_setglobal(::System::IntPtr L, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_SETGLOBAL_OFFSET))(L, name);
		}

		static ::System::Void xlua_getloaders(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETLOADERS_OFFSET))(L);
		}

		static ::System::Void lua_settop(::System::IntPtr L, ::System::Int32 newTop)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETTOP_OFFSET))(L, newTop);
		}

		static ::System::Void lua_pop(::System::IntPtr L, ::System::Int32 amount)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_POP_OFFSET))(L, amount);
		}

		static ::System::Void lua_insert(::System::IntPtr L, ::System::Int32 newTop)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_INSERT_OFFSET))(L, newTop);
		}

		static ::System::Void lua_remove(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_REMOVE_OFFSET))(L, index);
		}

		static ::System::Int32 lua_rawget(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWGET_OFFSET))(L, index);
		}

		static ::System::Void lua_rawset(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWSET_OFFSET))(L, index);
		}

		static ::System::Int32 lua_setmetatable(::System::IntPtr L, ::System::Int32 objIndex)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETMETATABLE_OFFSET))(L, objIndex);
		}

		static ::System::Int32 lua_rawequal(::System::IntPtr L, ::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWEQUAL_OFFSET))(L, index1, index2);
		}

		static ::System::Void lua_pushvalue(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHVALUE_OFFSET))(L, index);
		}

		static ::System::Void lua_replace(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_REPLACE_OFFSET))(L, index);
		}

		static ::System::Int32 lua_gettop(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETTOP_OFFSET))(L);
		}

		static ::XLua::LuaTypes lua_type(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::XLua::LuaTypes(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TYPE_OFFSET))(L, index);
		}

		static ::System::Boolean lua_isnil(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISNIL_OFFSET))(L, index);
		}

		static ::System::Boolean lua_isnumber(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISNUMBER_OFFSET))(L, index);
		}

		static ::System::Boolean lua_isboolean(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISBOOLEAN_OFFSET))(L, index);
		}

		static ::System::Int32 luaL_ref(::System::IntPtr L, ::System::Int32 registryIndex)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_REF_OFFSET))(L, registryIndex);
		}

		static ::System::Int32 luaL_ref_1(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_REF_1_OFFSET))(L);
		}

		static ::System::Void xlua_rawgeti(::System::IntPtr L, ::System::Int32 tableIndex, ::System::Int64 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_RAWGETI_OFFSET))(L, tableIndex, index);
		}

		static ::System::Void xlua_rawseti(::System::IntPtr L, ::System::Int32 tableIndex, ::System::Int64 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_RAWSETI_OFFSET))(L, tableIndex, index);
		}

		static ::System::Void lua_getref(::System::IntPtr L, ::System::Int32 reference)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETREF_OFFSET))(L, reference);
		}

		static ::System::Int32 pcall_prepare(::System::IntPtr L, ::System::Int32 error_func_ref, ::System::Int32 func_ref)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_PCALL_PREPARE_OFFSET))(L, error_func_ref, func_ref);
		}

		static ::System::Void luaL_unref(::System::IntPtr L, ::System::Int32 registryIndex, ::System::Int32 reference)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_UNREF_OFFSET))(L, registryIndex, reference);
		}

		static ::System::Void lua_unref(::System::IntPtr L, ::System::Int32 reference)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_UNREF_OFFSET))(L, reference);
		}

		static ::System::Boolean lua_isstring(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISSTRING_OFFSET))(L, index);
		}

		static ::System::Boolean lua_isinteger(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINTEGER_OFFSET))(L, index);
		}

		static ::System::Void lua_pushnil(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHNIL_OFFSET))(L);
		}

		static ::System::Void lua_pushstdcallcfunction(::System::IntPtr L, ::XLua::LuaDLL::lua_CSFunction* function, ::System::Int32 n)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTDCALLCFUNCTION_OFFSET))(L, function, n);
		}

		static ::System::Int32 xlua_upvalueindex(::System::Int32 n)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UPVALUEINDEX_OFFSET))(n);
		}

		static ::System::Int32 lua_pcall(::System::IntPtr L, ::System::Int32 nArgs, ::System::Int32 nResults, ::System::Int32 errfunc)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PCALL_OFFSET))(L, nArgs, nResults, errfunc);
		}

		static ::System::Double lua_tonumber(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TONUMBER_OFFSET))(L, index);
		}

		static ::System::Int32 xlua_tointeger(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOINTEGER_OFFSET))(L, index);
		}

		static ::System::UInt32 xlua_touint(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOUINT_OFFSET))(L, index);
		}

		static ::System::Boolean lua_toboolean(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOBOOLEAN_OFFSET))(L, index);
		}

		static ::System::IntPtr lua_topointer(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOPOINTER_OFFSET))(L, index);
		}

		static ::System::IntPtr lua_tolstring(::System::IntPtr L, ::System::Int32 index, ::System::IntPtr& strLen)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOLSTRING_OFFSET))(L, index, strLen);
		}

		static ::System::String* lua_tostring(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOSTRING_OFFSET))(L, index);
		}

		static ::System::IntPtr lua_atpanic(::System::IntPtr L, ::XLua::LuaDLL::lua_CSFunction* panicf)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ATPANIC_OFFSET))(L, panicf);
		}

		static ::System::Void lua_pushnumber(::System::IntPtr L, ::System::Double number)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHNUMBER_OFFSET))(L, number);
		}

		static ::System::Void lua_pushboolean(::System::IntPtr L, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHBOOLEAN_OFFSET))(L, value);
		}

		static ::System::Void xlua_pushinteger(::System::IntPtr L, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHINTEGER_OFFSET))(L, value);
		}

		static ::System::Void xlua_pushuint(::System::IntPtr L, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHUINT_OFFSET))(L, value);
		}

		static ::System::Void lua_pushstring(::System::IntPtr L, ::System::String* str)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTRING_OFFSET))(L, str);
		}

		static ::System::Void xlua_pushlstring(::System::IntPtr L, ::Il2CppArray<::System::Byte>* str, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHLSTRING_OFFSET))(L, str, size);
		}

		static ::System::Void xlua_pushasciistring(::System::IntPtr L, ::System::String* str)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHASCIISTRING_OFFSET))(L, str);
		}

		static ::System::Void lua_pushstring_1(::System::IntPtr L, ::Il2CppArray<::System::Byte>* str)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTRING_1_OFFSET))(L, str);
		}

		static ::System::Void lua_pushfixstring(::System::IntPtr L, ::Il2CppArray<::System::Byte>* str, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHFIXSTRING_OFFSET))(L, str, length);
		}

		static ::Il2CppArray<::System::Byte>* lua_tobytes(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOBYTES_OFFSET))(L, index);
		}

		static ::System::Int32 luaL_newmetatable(::System::IntPtr L, ::System::String* meta)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_NEWMETATABLE_OFFSET))(L, meta);
		}

		static ::System::Int32 xlua_pgettable(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PGETTABLE_OFFSET))(L, idx);
		}

		static ::System::Int32 xlua_psettable(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PSETTABLE_OFFSET))(L, idx);
		}

		static ::System::Void luaL_getmetatable(::System::IntPtr L, ::System::String* meta)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_GETMETATABLE_OFFSET))(L, meta);
		}

		static ::System::Int32 xluaL_loadbuffer(::System::IntPtr L, ::Il2CppArray<::System::Byte>* buff, ::System::Int32 size, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_LOADBUFFER_OFFSET))(L, buff, size, name);
		}

		static ::System::Int32 luaL_loadbuffer(::System::IntPtr L, ::System::String* buff, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_LOADBUFFER_OFFSET))(L, buff, name);
		}

		static ::System::Int32 xlua_tocsobj_safe(::System::IntPtr L, ::System::Int32 obj)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOCSOBJ_SAFE_OFFSET))(L, obj);
		}

		static ::System::Int32 xlua_tocsobj_fast(::System::IntPtr L, ::System::Int32 obj)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOCSOBJ_FAST_OFFSET))(L, obj);
		}

		static ::System::Int32 lua_error(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ERROR_OFFSET))(L);
		}

		static ::System::Boolean lua_checkstack(::System::IntPtr L, ::System::Int32 extra)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CHECKSTACK_OFFSET))(L, extra);
		}

		static ::System::Int32 lua_next(::System::IntPtr L, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEXT_OFFSET))(L, index);
		}

		static ::System::Void lua_pushlightuserdata(::System::IntPtr L, ::System::IntPtr udata)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHLIGHTUSERDATA_OFFSET))(L, udata);
		}

		static ::System::IntPtr lua_newuserdatadtor(::System::IntPtr L, ::System::UInt64 sz, ::System::IntPtr dtor)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEWUSERDATADTOR_OFFSET))(L, sz, dtor);
		}

		static ::System::Void xlua_push_tag_csobj(::System::IntPtr L, ::System::Int32 key, ::System::Int32 meta_ref, ::System::Boolean need_cache, ::System::Int32 cache_ref, ::System::Int32 tag)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSH_TAG_CSOBJ_OFFSET))(L, key, meta_ref, need_cache, cache_ref, tag);
		}

		static ::System::Int32 lua_setuserdatadtor(::System::IntPtr L, ::System::Int32 tag, ::System::IntPtr dtor)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETUSERDATADTOR_OFFSET))(L, tag, dtor);
		}

		static ::System::IntPtr lua_getuserdatadtor(::System::IntPtr L, ::System::Int32 tag)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETUSERDATADTOR_OFFSET))(L, tag);
		}

		static ::System::Void xluaL_set_codegen(::System::Int32 cgSwitch)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_CODEGEN_OFFSET))(cgSwitch);
		}

		static ::System::Void xluaL_set_debug_level(::System::Int32 level)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_DEBUG_LEVEL_OFFSET))(level);
		}

		static ::System::Void xluaL_set_optimization_level(::System::Int32 level)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_OPTIMIZATION_LEVEL_OFFSET))(level);
		}

		static ::System::Int32 lua_beyondint(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_BEYONDINT_OFFSET))(L, idx);
		}

		static ::System::IntPtr xlua_tag()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TAG_OFFSET))();
		}

		static ::System::Void luaL_where(::System::IntPtr L, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_WHERE_OFFSET))(L, level);
		}

		static ::System::Int32 xlua_tryget_cachedud(::System::IntPtr L, ::System::Int32 key, ::System::Int32 cache_ref)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TRYGET_CACHEDUD_OFFSET))(L, key, cache_ref);
		}

		static ::System::Void xlua_pushcsobj(::System::IntPtr L, ::System::Int32 key, ::System::Int32 meta_ref, ::System::Boolean need_cache, ::System::Int32 cache_ref)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHCSOBJ_OFFSET))(L, key, meta_ref, need_cache, cache_ref);
		}

		static ::System::Int32 gen_obj_indexer(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_OBJ_INDEXER_OFFSET))(L);
		}

		static ::System::Int32 gen_obj_newindexer(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_OBJ_NEWINDEXER_OFFSET))(L);
		}

		static ::System::Int32 gen_cls_indexer(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_CLS_INDEXER_OFFSET))(L);
		}

		static ::System::Int32 gen_cls_newindexer(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_CLS_NEWINDEXER_OFFSET))(L);
		}

		static ::System::Int32 get_error_func_ref(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GET_ERROR_FUNC_REF_OFFSET))(L);
		}

		static ::System::Int32 load_error_func(::System::IntPtr L, ::System::Int32 Ref)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LOAD_ERROR_FUNC_OFFSET))(L, Ref);
		}

		static ::System::Int32 luaopen_i64lib(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_I64LIB_OFFSET))(L);
		}

		static ::System::Int32 luaopen_socket_core(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_SOCKET_CORE_OFFSET))(L);
		}

		static ::System::Void lua_pushint64_userdata(::System::IntPtr L, ::System::Int64 n)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHINT64_USERDATA_OFFSET))(L, n);
		}

		static ::System::Boolean lua_isint64_userdata(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINT64_USERDATA_OFFSET))(L, idx);
		}

		static ::System::Int64 lua_toint64_userdata(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOINT64_USERDATA_OFFSET))(L, idx);
		}

		static ::System::Void lua_pushuint64_userdata(::System::IntPtr L, ::System::UInt64 n)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHUINT64_USERDATA_OFFSET))(L, n);
		}

		static ::System::Boolean lua_isuint64_userdata(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISUINT64_USERDATA_OFFSET))(L, idx);
		}

		static ::System::Int64 lua_touint64_userdata(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUINT64_USERDATA_OFFSET))(L, idx);
		}

		static ::System::Void lua_pushint64(::System::IntPtr L, ::System::Int64 n)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHINT64_OFFSET))(L, n);
		}

		static ::System::Void lua_pushuint64(::System::IntPtr L, ::System::UInt64 n)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHUINT64_OFFSET))(L, n);
		}

		static ::System::Boolean lua_isint64(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINT64_OFFSET))(L, idx);
		}

		static ::System::Boolean lua_isuint64(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISUINT64_OFFSET))(L, idx);
		}

		static ::System::Int64 lua_toint64(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOINT64_OFFSET))(L, idx);
		}

		static ::System::UInt64 lua_touint64(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUINT64_OFFSET))(L, idx);
		}

		static ::System::Void xlua_push_csharp_function(::System::IntPtr L, ::System::IntPtr fn, ::System::Int32 n)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSH_CSHARP_FUNCTION_OFFSET))(L, fn, n);
		}

		static ::System::Int32 xlua_csharp_str_error(::System::IntPtr L, ::System::String* message)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_CSHARP_STR_ERROR_OFFSET))(L, message);
		}

		static ::System::Int32 xlua_csharp_error(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_CSHARP_ERROR_OFFSET))(L);
		}

		static ::System::Boolean xlua_pack_int8_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Byte field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT8_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_unpack_int8_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Byte& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT8_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_pack_int16_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Int16 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT16_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_unpack_int16_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Int16& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT16_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_pack_int32_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Int32 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT32_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_unpack_int32_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Int32& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT32_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_pack_int64_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Int64 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT64_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_unpack_int64_t(::System::IntPtr buff, ::System::Int32 offset, ::System::Int64& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT64_T_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_pack_float(::System::IntPtr buff, ::System::Int32 offset, ::System::Single field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_unpack_float(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_pack_double(::System::IntPtr buff, ::System::Int32 offset, ::System::Double field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_DOUBLE_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean xlua_unpack_double(::System::IntPtr buff, ::System::Int32 offset, ::System::Double& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_DOUBLE_OFFSET))(buff, offset, field);
		}

		static ::System::IntPtr xlua_pushstruct(::System::IntPtr L, ::System::UInt32 size, ::System::Int32 meta_ref)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHSTRUCT_OFFSET))(L, size, meta_ref);
		}

		static ::System::Void xlua_pushcstable(::System::IntPtr L, ::System::UInt32 field_count, ::System::Int32 meta_ref)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHCSTABLE_OFFSET))(L, field_count, meta_ref);
		}

		static ::System::IntPtr lua_touserdata(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUSERDATA_OFFSET))(L, idx);
		}

		static ::System::Int32 xlua_gettypeid(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETTYPEID_OFFSET))(L, idx);
		}

		static ::System::Int32 xlua_get_registry_index()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GET_REGISTRY_INDEX_OFFSET))();
		}

		static ::System::Int32 xlua_pgettable_bypath(::System::IntPtr L, ::System::Int32 idx, ::System::String* path)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PGETTABLE_BYPATH_OFFSET))(L, idx, path);
		}

		static ::System::Int32 xlua_psettable_bypath(::System::IntPtr L, ::System::Int32 idx, ::System::String* path)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PSETTABLE_BYPATH_OFFSET))(L, idx, path);
		}

		static ::System::Boolean xlua_pack_float2(::System::IntPtr buff, ::System::Int32 offset, ::System::Single f1, ::System::Single f2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT2_OFFSET))(buff, offset, f1, f2);
		}

		static ::System::Boolean xlua_unpack_float2(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& f1, ::System::Single& f2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT2_OFFSET))(buff, offset, f1, f2);
		}

		static ::System::Boolean xlua_pack_float3(::System::IntPtr buff, ::System::Int32 offset, ::System::Single f1, ::System::Single f2, ::System::Single f3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT3_OFFSET))(buff, offset, f1, f2, f3);
		}

		static ::System::Boolean xlua_unpack_float3(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& f1, ::System::Single& f2, ::System::Single& f3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT3_OFFSET))(buff, offset, f1, f2, f3);
		}

		static ::System::Boolean xlua_pack_float4(::System::IntPtr buff, ::System::Int32 offset, ::System::Single f1, ::System::Single f2, ::System::Single f3, ::System::Single f4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT4_OFFSET))(buff, offset, f1, f2, f3, f4);
		}

		static ::System::Boolean xlua_unpack_float4(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& f1, ::System::Single& f2, ::System::Single& f3, ::System::Single& f4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT4_OFFSET))(buff, offset, f1, f2, f3, f4);
		}

		static ::System::Boolean xlua_pack_float5(::System::IntPtr buff, ::System::Int32 offset, ::System::Single f1, ::System::Single f2, ::System::Single f3, ::System::Single f4, ::System::Single f5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT5_OFFSET))(buff, offset, f1, f2, f3, f4, f5);
		}

		static ::System::Boolean xlua_unpack_float5(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& f1, ::System::Single& f2, ::System::Single& f3, ::System::Single& f4, ::System::Single& f5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT5_OFFSET))(buff, offset, f1, f2, f3, f4, f5);
		}

		static ::System::Boolean xlua_pack_float6(::System::IntPtr buff, ::System::Int32 offset, ::System::Single f1, ::System::Single f2, ::System::Single f3, ::System::Single f4, ::System::Single f5, ::System::Single f6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT6_OFFSET))(buff, offset, f1, f2, f3, f4, f5, f6);
		}

		static ::System::Boolean xlua_unpack_float6(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& f1, ::System::Single& f2, ::System::Single& f3, ::System::Single& f4, ::System::Single& f5, ::System::Single& f6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT6_OFFSET))(buff, offset, f1, f2, f3, f4, f5, f6);
		}

		static ::System::Boolean xlua_pack_decimal(::System::IntPtr buff, ::System::Int32 offset, ::System::Decimal& dec)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_DECIMAL_OFFSET))(buff, offset, dec);
		}

		static ::System::Boolean xlua_unpack_decimal(::System::IntPtr buff, ::System::Int32 offset, ::System::Byte& scale, ::System::Byte& sign, ::System::Int32& hi32, ::System::UInt64& lo64)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&, ::System::Byte&, ::System::Int32&, ::System::UInt64&))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_DECIMAL_OFFSET))(buff, offset, scale, sign, hi32, lo64);
		}

		static ::System::Boolean xlua_is_eq_str(::System::IntPtr L, ::System::Int32 index, ::System::String* str)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_OFFSET))(L, index, str);
		}

		static ::System::Boolean xlua_is_eq_str_1(::System::IntPtr L, ::System::Int32 index, ::System::String* str, ::System::Int32 str_len)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_1_OFFSET))(L, index, str, str_len);
		}

		static ::System::IntPtr xlua_gl(::System::IntPtr L)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GL_OFFSET))(L);
		}
	};
}
