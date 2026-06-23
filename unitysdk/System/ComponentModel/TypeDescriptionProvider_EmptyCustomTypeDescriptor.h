#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CustomTypeDescriptor.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_EMPTYCUSTOMTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC77F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProvider_EmptyCustomTypeDescriptor_TypeDefinitionIndex = 2992;

	class TypeDescriptionProvider_EmptyCustomTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_EMPTYCUSTOMTYPEDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}
