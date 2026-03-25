#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_OBJECTTRANSLATOR_EXTRAPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1034EA30)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_ExtraParameter_TypeDefinitionIndex = 40395;

	class ObjectTranslator_ExtraParameter : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::Boolean IsEnum; // 0x18
		::System::Int32 EnumValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_EXTRAPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
