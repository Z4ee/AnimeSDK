#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTORINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3189C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_TypeDescriptorInterface_TypeDefinitionIndex = 3009;

	class TypeDescriptor_TypeDescriptorInterface : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_TYPEDESCRIPTORINTERFACE__CTOR_OFFSET))(this);
		}
	};
}
