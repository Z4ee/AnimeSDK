#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CategoryAttribute.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_SRCATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE0E50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SRCategoryAttribute_TypeDefinitionIndex = 3029;

	class SRCategoryAttribute : public ::System::ComponentModel::CategoryAttribute
	{
	public:
		::System::Void _ctor(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SRCATEGORYATTRIBUTE__CTOR_OFFSET))(this, category);
		}
	};
}
