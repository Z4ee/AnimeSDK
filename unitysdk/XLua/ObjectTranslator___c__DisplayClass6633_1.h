#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }
namespace XLua { class ObjectTranslator___c__DisplayClass6633_0; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6633_1__CTOR_OFFSET UNITYSDK_OFFSET(0x132B52A0)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6633_1__GETDELEGATE_B__1_OFFSET UNITYSDK_OFFSET(0x132BD890)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6633_1_TypeDefinitionIndex = 46909;

	class ObjectTranslator___c__DisplayClass6633_1 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* foundMethod; // 0x10
		::XLua::ObjectTranslator___c__DisplayClass6633_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6633_1__CTOR_OFFSET))(this);
		}

		::System::Delegate* _getDelegate_b__1(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6633_1__GETDELEGATE_B__1_OFFSET))(this, a1);
		}
	};
}
