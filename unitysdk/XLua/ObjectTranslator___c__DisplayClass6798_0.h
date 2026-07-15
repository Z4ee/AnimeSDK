#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6798_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157AC000)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6798_0__GETCREATORUSINGGENERIC_B__7_OFFSET UNITYSDK_OFFSET(0x157B4C90)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6798_0_TypeDefinitionIndex = 47871;

	class ObjectTranslator___c__DisplayClass6798_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* genericMethodInfo; // 0x10
		::System::Type* delegateType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6798_0__CTOR_OFFSET))(this);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__7(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6798_0__GETCREATORUSINGGENERIC_B__7_OFFSET))(this, a1);
		}
	};
}
