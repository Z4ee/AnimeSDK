#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaEnv; }

#define XLUA_DELEGATEBRIDGEBASE_ADDDELEGATE_OFFSET UNITYSDK_OFFSET(0x11CDF800)
#define XLUA_DELEGATEBRIDGEBASE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x11CDF9B0)
#define XLUA_DELEGATEBRIDGEBASE_TRYGETDELEGATE_OFFSET UNITYSDK_OFFSET(0x11CDF750)
#define XLUA_DELEGATEBRIDGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CDF420)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridgeBase_TypeDefinitionIndex = 47948;

	class DelegateBridgeBase : public ::XLua::LuaBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Delegate*>* bindTo; // 0x20
		::System::Delegate* firstValue; // 0x28
		::System::Type* firstKey; // 0x30
		::System::Int32 errorFuncRef; // 0x38

		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetDelegate(::System::Type* a1, ::System::Delegate*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Delegate*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE_TRYGETDELEGATE_OFFSET))(this, a1, a2);
		}

		::System::Void AddDelegate(::System::Type* a1, ::System::Delegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Delegate*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE_ADDDELEGATE_OFFSET))(this, a1, a2);
		}

		::System::Delegate* GetDelegateByType(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGEBASE_GETDELEGATEBYTYPE_OFFSET))(this, a1);
		}
	};
}
