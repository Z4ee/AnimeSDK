#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x1BE0D6B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BE0D700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x1BE0D7F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BE0D750)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE0D5F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0D5B0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int IntSizedArray_TypeDefinitionIndex = 1195;

	class IntSizedArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* negObjects; // 0x10
		::Il2CppArray<::System::Int32>* objects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void IncreaseCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_INCREASECAPACITY_OFFSET))(this, a1);
		}
	};
}
