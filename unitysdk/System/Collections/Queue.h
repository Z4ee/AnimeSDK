#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_QUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D187C20)
#define SYSTEM_COLLECTIONS_QUEUE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D187A90)
#define SYSTEM_COLLECTIONS_QUEUE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D187C80)
#define SYSTEM_COLLECTIONS_QUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x1D188080)
#define SYSTEM_COLLECTIONS_QUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1D187E30)
#define SYSTEM_COLLECTIONS_QUEUE_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1D1881F0)
#define SYSTEM_COLLECTIONS_QUEUE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D188010)
#define SYSTEM_COLLECTIONS_QUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D187A80)
#define SYSTEM_COLLECTIONS_QUEUE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D187BD0)
#define SYSTEM_COLLECTIONS_QUEUE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D187BE0)
#define SYSTEM_COLLECTIONS_QUEUE_PEEK_OFFSET UNITYSDK_OFFSET(0x1D188150)
#define SYSTEM_COLLECTIONS_QUEUE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D187F40)
#define SYSTEM_COLLECTIONS_QUEUE_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1D188230)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D187620)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D187490)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D1876B0)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D187440)

namespace System::Collections
{
	inline static constexpr unsigned int Queue_TypeDefinitionIndex = 1481;

	class Queue : public ::System::Object
	{
	public:
		::System::Object* _syncRoot; // 0x10
		::Il2CppArray<::System::Object*>* _array; // 0x18
		::System::Int32 _size; // 0x20
		::System::Int32 _growFactor; // 0x24
		::System::Int32 _tail; // 0x28
		::System::Int32 _head; // 0x2C
		::System::Int32 _version; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Int32 capacity, ::System::Single growFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_2_OFFSET))(this, capacity, growFactor);
		}

		::System::Void _ctor_3(::System::Collections::ICollection* col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_3_OFFSET))(this, col);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GET_COUNT_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_CLEAR_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void Enqueue(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_ENQUEUE_OFFSET))(this, obj);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* Dequeue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_DEQUEUE_OFFSET))(this);
		}

		::System::Object* Peek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_PEEK_OFFSET))(this);
		}

		::System::Object* GetElement(::System::Int32 i)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GETELEMENT_OFFSET))(this, i);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_TOARRAY_OFFSET))(this);
		}

		::System::Void SetCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_SETCAPACITY_OFFSET))(this, capacity);
		}
	};
}
