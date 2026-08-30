#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter_SimplePropertyDescriptor.h"

namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C493470)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArrayConverter_ArrayPropertyDescriptor_TypeDefinitionIndex = 2560;

	class ArrayConverter_ArrayPropertyDescriptor : public ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor
	{
	public:
		::System::Int32 index; // 0x90

		::System::Void _ctor(::System::Type* a1, ::System::Type* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
