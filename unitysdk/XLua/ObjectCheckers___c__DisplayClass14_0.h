#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectCheckers; }

#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11244200)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__0_OFFSET UNITYSDK_OFFSET(0x11244480)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__1_OFFSET UNITYSDK_OFFSET(0x11244650)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__2_OFFSET UNITYSDK_OFFSET(0x11244780)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__3_OFFSET UNITYSDK_OFFSET(0x112448B0)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__4_OFFSET UNITYSDK_OFFSET(0x112449E0)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__5_OFFSET UNITYSDK_OFFSET(0x11244AA0)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__6_OFFSET UNITYSDK_OFFSET(0x11244BD0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheckers___c__DisplayClass14_0_TypeDefinitionIndex = 46426;

	class ObjectCheckers___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::XLua::ObjectCheck* fixTypeCheck; // 0x10
		::XLua::ObjectCheckers* __4__this; // 0x18
		::System::Type* type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _genChecker_b__0(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__0_OFFSET))(this, L, idx);
		}

		::System::Boolean _genChecker_b__1(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__1_OFFSET))(this, L, idx);
		}

		::System::Boolean _genChecker_b__2(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__2_OFFSET))(this, L, idx);
		}

		::System::Boolean _genChecker_b__3(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__3_OFFSET))(this, L, idx);
		}

		::System::Boolean _genChecker_b__4(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__4_OFFSET))(this, L, idx);
		}

		::System::Boolean _genChecker_b__5(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__5_OFFSET))(this, L, idx);
		}

		::System::Boolean _genChecker_b__6(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__6_OFFSET))(this, L, idx);
		}
	};
}
