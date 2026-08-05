#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter_SimplePropertyDescriptor.h"

namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C6F3EF0)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C6F3F70)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F3E60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArrayConverter_ArrayPropertyDescriptor_TypeDefinitionIndex = 2809;

	class ArrayConverter_ArrayPropertyDescriptor : public ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor
	{
	public:
		::System::Int32 index; // 0x98

		::System::Void _ctor(::System::Type* arrayType, ::System::Type* elementType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, arrayType, elementType, index);
		}

		::System::Object* GetValue(::System::Object* instance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(this, instance);
		}

		::System::Void SetValue(::System::Object* instance, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_ARRAYPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(this, instance, value);
		}
	};
}
