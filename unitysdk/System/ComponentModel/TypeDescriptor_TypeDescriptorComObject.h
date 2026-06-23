#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTORCOMOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48E8D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDescriptorComObject_TypeDefinitionIndex = 3007;

	class TypeDescriptor_TypeDescriptorComObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTORCOMOBJECT__CTOR_OFFSET))(this);
		}
	};
}
