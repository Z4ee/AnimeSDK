#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaEnv; }

#define XLUA_DELEGATEBRIDGEBASE_ADDDELEGATE_OFFSET UNITYSDK_OFFSET(0xFF45280)
#define XLUA_DELEGATEBRIDGEBASE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0xFF45430)
#define XLUA_DELEGATEBRIDGEBASE_TRYGETDELEGATE_OFFSET UNITYSDK_OFFSET(0xFF451C0)
#define XLUA_DELEGATEBRIDGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF44E80)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridgeBase_TypeDefinitionIndex = 40479;

	class DelegateBridgeBase : public ::XLua::LuaBase
	{
	public:
		::System::Type* firstKey; // 0x20
		::System::Delegate* firstValue; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* bindTo; // 0x30
		::System::Int32 errorFuncRef; // 0x38

		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE__CTOR_OFFSET))(this, reference, luaenv);
		}

		::System::Boolean TryGetDelegate(::System::Type* key, ::System::Delegate*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Delegate*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE_TRYGETDELEGATE_OFFSET))(this, key, value);
		}

		::System::Void AddDelegate(::System::Type* key, ::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Delegate*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE_ADDDELEGATE_OFFSET))(this, key, value);
		}

		::System::Delegate* GetDelegateByType(::System::Type* type)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE_GETDELEGATEBYTYPE_OFFSET))(this, type);
		}
	};
}
