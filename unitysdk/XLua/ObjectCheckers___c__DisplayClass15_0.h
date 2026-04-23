#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class ObjectCheck; }

#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11244290)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS15_0__GENNULLABLECHECKER_B__0_OFFSET UNITYSDK_OFFSET(0x11244C90)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheckers___c__DisplayClass15_0_TypeDefinitionIndex = 46427;

	class ObjectCheckers___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::XLua::ObjectCheck* oc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _genNullableChecker_b__0(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS15_0__GENNULLABLECHECKER_B__0_OFFSET))(this, L, idx);
		}
	};
}
