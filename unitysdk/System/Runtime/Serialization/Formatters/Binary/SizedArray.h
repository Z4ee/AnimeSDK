#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x17A0C940)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A00E00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x17A0CB20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A0C990)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A0C860)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A0C8A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0C820)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SizedArray_TypeDefinitionIndex = 1186;

	class SizedArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* objects; // 0x10
		::Il2CppArray<::System::Object*>* negObjects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY__CTOR_1_OFFSET))(this, length);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY__CTOR_2_OFFSET))(this, sizedArray);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_CLONE_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void IncreaseCapacity(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_INCREASECAPACITY_OFFSET))(this, index);
		}
	};
}
