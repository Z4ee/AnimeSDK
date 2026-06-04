#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace XLua { class LuaEnv; }

#define XLUA_LUATABLE_GETKEYS_OFFSET UNITYSDK_OFFSET(0x12E99ED0)
#define XLUA_LUATABLE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x12E99BC0)
#define XLUA_LUATABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x12E99B60)
#define XLUA_LUATABLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x12E99C80)
#define XLUA_LUATABLE_PUSH_OFFSET UNITYSDK_OFFSET(0x12E959D0)
#define XLUA_LUATABLE_SETMETATABLE_OFFSET UNITYSDK_OFFSET(0x12E99F50)
#define XLUA_LUATABLE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x12E99C30)
#define XLUA_LUATABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x12E99B70)
#define XLUA_LUATABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E9A2C0)
#define XLUA_LUATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12E99B50)

namespace XLua
{
	inline static constexpr unsigned int LuaTable_TypeDefinitionIndex = 46993;

	class LuaTable : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Item(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Item_1(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_LENGTH_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetKeys()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GETKEYS_OFFSET))(this);
		}

		::System::Void SetMetaTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SETMETATABLE_OFFSET))(this, a1);
		}

		::System::Void push(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_PUSH_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_TOSTRING_OFFSET))(this);
		}
	};
}
