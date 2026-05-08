#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x18BA8E90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18BA8EE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x18BA9000)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18BA8F50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BA8DB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA8D50)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int IntSizedArray_TypeDefinitionIndex = 1232;

	class IntSizedArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* negObjects; // 0x10
		::Il2CppArray<::System::Int32>* objects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_1_OFFSET))(this, sizedArray);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void IncreaseCapacity(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_INCREASECAPACITY_OFFSET))(this, index);
		}
	};
}
