#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class DelegateBridge; }

#define XLUA_HOTFIXDELEGATEBRIDGE_GET_OFFSET UNITYSDK_OFFSET(0x14B137A0)
#define XLUA_HOTFIXDELEGATEBRIDGE_SET_OFFSET UNITYSDK_OFFSET(0x14B13800)
#define XLUA_HOTFIXDELEGATEBRIDGE_XLUA_GET_HOTFIX_FLAG_OFFSET UNITYSDK_OFFSET(0x14B136F0)

namespace XLua
{
	inline static constexpr unsigned int HotfixDelegateBridge_TypeDefinitionIndex = 50464;

	class HotfixDelegateBridge : public ::System::Object
	{
	public:
		static ::System::Boolean xlua_get_hotfix_flag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEBRIDGE_XLUA_GET_HOTFIX_FLAG_OFFSET))(a1);
		}

		static ::XLua::DelegateBridge* Get(::System::Int32 a1)
		{
			return ((::XLua::DelegateBridge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEBRIDGE_GET_OFFSET))(a1);
		}

		static ::System::Void Set(::System::Int32 a1, ::XLua::DelegateBridge* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::XLua::DelegateBridge*))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEBRIDGE_SET_OFFSET))(a1, a2);
		}
	};
}
