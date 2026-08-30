#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }
namespace XLua { class ObjectTranslator___c__DisplayClass6934_0; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6934_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14F7E9D0)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6934_1__GETDELEGATE_B__1_OFFSET UNITYSDK_OFFSET(0x14F87950)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6934_1_TypeDefinitionIndex = 50458;

	class ObjectTranslator___c__DisplayClass6934_1 : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator___c__DisplayClass6934_0* CS___8__locals1; // 0x10
		::System::Reflection::MethodInfo* foundMethod; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6934_1__CTOR_OFFSET))(this);
		}

		::System::Delegate* _getDelegate_b__1(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6934_1__GETDELEGATE_B__1_OFFSET))(this, a1);
		}
	};
}
