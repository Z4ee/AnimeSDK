#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define XLUA_XLUAWRAPPERMACROATTRIBUTE_GET_MACRO_OFFSET UNITYSDK_OFFSET(0x17A6F890)
#define XLUA_XLUAWRAPPERMACROATTRIBUTE_SET_MACRO_OFFSET UNITYSDK_OFFSET(0x17A6F8A0)
#define XLUA_XLUAWRAPPERMACROATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F880)

namespace XLua
{
	inline static constexpr unsigned int XLuaWrapperMacroAttribute_TypeDefinitionIndex = 8634;

	class XLuaWrapperMacroAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Macro_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* macro)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPPERMACROATTRIBUTE__CTOR_OFFSET))(this, macro);
		}

		::System::String* get_Macro()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPPERMACROATTRIBUTE_GET_MACRO_OFFSET))(this);
		}

		::System::Void set_Macro(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPPERMACROATTRIBUTE_SET_MACRO_OFFSET))(this, value);
		}
	};
}
