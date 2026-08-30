#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define XLUA_XLUAWRAPPERMACROATTRIBUTE_GET_MACRO_OFFSET UNITYSDK_OFFSET(0x1F014750)
#define XLUA_XLUAWRAPPERMACROATTRIBUTE_SET_MACRO_OFFSET UNITYSDK_OFFSET(0x1F014760)
#define XLUA_XLUAWRAPPERMACROATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F014740)

namespace XLua
{
	inline static constexpr unsigned int XLuaWrapperMacroAttribute_TypeDefinitionIndex = 5608;

	class XLuaWrapperMacroAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Macro_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPPERMACROATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Macro()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPPERMACROATTRIBUTE_GET_MACRO_OFFSET))(this);
		}

		::System::Void set_Macro(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUAWRAPPERMACROATTRIBUTE_SET_MACRO_OFFSET))(this, a1);
		}
	};
}
