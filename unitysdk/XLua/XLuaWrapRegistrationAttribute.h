#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/XLuaWrapRegistrationKind.h"

#define XLUA_XLUAWRAPREGISTRATIONATTRIBUTE_GET_REGISTRATIONKIND_OFFSET UNITYSDK_OFFSET(0x15185A70)
#define XLUA_XLUAWRAPREGISTRATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15185A80)

namespace XLua
{
	inline static constexpr unsigned int XLuaWrapRegistrationAttribute_TypeDefinitionIndex = 50613;

	class XLuaWrapRegistrationAttribute : public ::System::Attribute
	{
	public:
		::XLua::XLuaWrapRegistrationKind _RegistrationKind_k__BackingField; // 0x10

		::System::Void _ctor(::XLua::XLuaWrapRegistrationKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::XLuaWrapRegistrationKind))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPREGISTRATIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::XLua::XLuaWrapRegistrationKind get_RegistrationKind()
		{
			return ((::XLua::XLuaWrapRegistrationKind(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPREGISTRATIONATTRIBUTE_GET_REGISTRATIONKIND_OFFSET))(this);
		}
	};
}
