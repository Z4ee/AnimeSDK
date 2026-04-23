#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class DelegateBridge; }

#define XLUA_HOTFIXDELEGATEBRIDGE_GET_OFFSET UNITYSDK_OFFSET(0x1120F850)
#define XLUA_HOTFIXDELEGATEBRIDGE_SET_OFFSET UNITYSDK_OFFSET(0x1120F8C0)
#define XLUA_HOTFIXDELEGATEBRIDGE_XLUA_GET_HOTFIX_FLAG_OFFSET UNITYSDK_OFFSET(0x1120F7A0)

namespace XLua
{
	inline static constexpr unsigned int HotfixDelegateBridge_TypeDefinitionIndex = 46393;

	class HotfixDelegateBridge : public ::System::Object
	{
	public:
		static ::System::Boolean xlua_get_hotfix_flag(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEBRIDGE_XLUA_GET_HOTFIX_FLAG_OFFSET))(idx);
		}

		static ::XLua::DelegateBridge* Get(::System::Int32 idx)
		{
			return ((::XLua::DelegateBridge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEBRIDGE_GET_OFFSET))(idx);
		}

		static ::System::Void Set(::System::Int32 idx, ::XLua::DelegateBridge* val)
		{
			return ((::System::Void(*)(::System::Int32, ::XLua::DelegateBridge*))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEBRIDGE_SET_OFFSET))(idx, val);
		}
	};
}
