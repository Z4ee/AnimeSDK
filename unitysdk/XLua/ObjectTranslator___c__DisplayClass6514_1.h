#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }
namespace XLua { class ObjectTranslator___c__DisplayClass6514_0; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6514_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11644730)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6514_1__GETCREATORUSINGGENERIC_B__8_OFFSET UNITYSDK_OFFSET(0x1164D120)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6514_1_TypeDefinitionIndex = 46317;

	class ObjectTranslator___c__DisplayClass6514_1 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* methodInfo; // 0x10
		::XLua::ObjectTranslator___c__DisplayClass6514_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6514_1__CTOR_OFFSET))(this);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__8(::XLua::DelegateBridgeBase* o)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6514_1__GETCREATORUSINGGENERIC_B__8_OFFSET))(this, o);
		}
	};
}
