#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace XLua { class LuaEnv; }

#define XLUA_LUATABLE_GETKEYS_OFFSET UNITYSDK_OFFSET(0xFF6F320)
#define XLUA_LUATABLE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xFF6F010)
#define XLUA_LUATABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xFF6EFB0)
#define XLUA_LUATABLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xFF6F0D0)
#define XLUA_LUATABLE_PUSH_OFFSET UNITYSDK_OFFSET(0xFF6A770)
#define XLUA_LUATABLE_SETMETATABLE_OFFSET UNITYSDK_OFFSET(0xFF6F3A0)
#define XLUA_LUATABLE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xFF6F080)
#define XLUA_LUATABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xFF6EFC0)
#define XLUA_LUATABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFF6F710)
#define XLUA_LUATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6EFA0)

namespace XLua
{
	inline static constexpr unsigned int LuaTable_TypeDefinitionIndex = 40490;

	class LuaTable : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__CTOR_OFFSET))(this, reference, luaenv);
		}

		::System::Object* get_Item(::System::String* field)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_ITEM_OFFSET))(this, field);
		}

		::System::Void set_Item(::System::String* field, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SET_ITEM_OFFSET))(this, field, value);
		}

		::System::Object* get_Item_1(::System::Object* field)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_ITEM_1_OFFSET))(this, field);
		}

		::System::Void set_Item_1(::System::Object* field, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SET_ITEM_1_OFFSET))(this, field, value);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_LENGTH_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetKeys()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GETKEYS_OFFSET))(this);
		}

		::System::Void SetMetaTable(::XLua::LuaTable* metaTable)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SETMETATABLE_OFFSET))(this, metaTable);
		}

		::System::Void push(::System::IntPtr L)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_PUSH_OFFSET))(this, L);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_TOSTRING_OFFSET))(this);
		}
	};
}
