#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }
namespace XLua { class ObjectTranslator___c__DisplayClass6229_0; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6229_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10346940)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6229_1__GETDELEGATE_B__1_OFFSET UNITYSDK_OFFSET(0x1034E9F0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6229_1_TypeDefinitionIndex = 40410;

	class ObjectTranslator___c__DisplayClass6229_1 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* foundMethod; // 0x10
		::XLua::ObjectTranslator___c__DisplayClass6229_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6229_1__CTOR_OFFSET))(this);
		}

		::System::Delegate* _getDelegate_b__1(::XLua::DelegateBridgeBase* o)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6229_1__GETDELEGATE_B__1_OFFSET))(this, o);
		}
	};
}
