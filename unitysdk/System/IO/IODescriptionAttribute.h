#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DescriptionAttribute.h"

namespace System { class String; }

#define SYSTEM_IO_IODESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D2337A0)
#define SYSTEM_IO_IODESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D233740)

namespace System::IO
{
	inline static constexpr unsigned int IODescriptionAttribute_TypeDefinitionIndex = 3227;

	class IODescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute
	{
	public:
		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IODESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IODESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}
	};
}
