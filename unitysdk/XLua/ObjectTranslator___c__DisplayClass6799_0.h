#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6799_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157AC5A0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6799_0_TypeDefinitionIndex = 47873;

	class ObjectTranslator___c__DisplayClass6799_0 : public ::System::Object
	{
	public:
		::System::Type* delegateType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS6799_0__CTOR_OFFSET))(this);
		}
	};
}
