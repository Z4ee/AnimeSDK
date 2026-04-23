#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Object; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F56F20)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10F56550)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10F56A70)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F56540)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0x10F564F0)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int SystemCollectionsIEnumeratorBridge_TypeDefinitionIndex = 47764;

	class SystemCollectionsIEnumeratorBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE___CREATE_OFFSET))(reference, luaenv);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSIENUMERATORBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
