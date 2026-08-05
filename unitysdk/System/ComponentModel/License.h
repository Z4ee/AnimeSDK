#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_LICENSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E283980)

namespace System::ComponentModel
{
	inline static constexpr unsigned int License_TypeDefinitionIndex = 2925;

	class License : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSE__CTOR_OFFSET))(this);
		}
	};
}
