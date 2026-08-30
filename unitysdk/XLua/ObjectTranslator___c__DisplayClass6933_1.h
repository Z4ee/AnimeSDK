#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }
namespace XLua { class ObjectTranslator___c__DisplayClass6933_0; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6933_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14F7E420)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6933_1__GETCREATORUSINGGENERIC_B__8_OFFSET UNITYSDK_OFFSET(0x14F87910)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6933_1_TypeDefinitionIndex = 50456;

	class ObjectTranslator___c__DisplayClass6933_1 : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator___c__DisplayClass6933_0* CS___8__locals1; // 0x10
		::System::Reflection::MethodInfo* methodInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6933_1__CTOR_OFFSET))(this);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__8(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6933_1__GETCREATORUSINGGENERIC_B__8_OFFSET))(this, a1);
		}
	};
}
