#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS7115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15231760)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass7115_0_TypeDefinitionIndex = 50086;

	class ObjectTranslator___c__DisplayClass7115_0 : public ::System::Object
	{
	public:
		::System::Type* delegateType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS7115_0__CTOR_OFFSET))(this);
		}
	};
}
