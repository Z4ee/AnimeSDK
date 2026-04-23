#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter_SimplePropertyDescriptor.h"

namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BB5E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArrayConverter_ArrayPropertyDescriptor_TypeDefinitionIndex = 2549;

	class ArrayConverter_ArrayPropertyDescriptor : public ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor
	{
	public:
		::System::Int32 index; // 0x90

		::System::Void _ctor(::System::Type* arrayType, ::System::Type* elementType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, arrayType, elementType, index);
		}
	};
}
