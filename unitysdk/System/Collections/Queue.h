#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_QUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x185B4B80)
#define SYSTEM_COLLECTIONS_QUEUE_CLONE_OFFSET UNITYSDK_OFFSET(0x185B4A40)
#define SYSTEM_COLLECTIONS_QUEUE_COPYTO_OFFSET UNITYSDK_OFFSET(0x185B4BE0)
#define SYSTEM_COLLECTIONS_QUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x185B5000)
#define SYSTEM_COLLECTIONS_QUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x185B4D90)
#define SYSTEM_COLLECTIONS_QUEUE_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x185B5140)
#define SYSTEM_COLLECTIONS_QUEUE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185B4F50)
#define SYSTEM_COLLECTIONS_QUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185B4A30)
#define SYSTEM_COLLECTIONS_QUEUE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185B4B30)
#define SYSTEM_COLLECTIONS_QUEUE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185B4B40)
#define SYSTEM_COLLECTIONS_QUEUE_PEEK_OFFSET UNITYSDK_OFFSET(0x185B50B0)
#define SYSTEM_COLLECTIONS_QUEUE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x185B4EA0)
#define SYSTEM_COLLECTIONS_QUEUE_TOARRAY_OFFSET UNITYSDK_OFFSET(0x185B5180)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185B4620)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185B44B0)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x185B4690)
#define SYSTEM_COLLECTIONS_QUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x185B4480)

namespace System::Collections
{
	inline static constexpr unsigned int Queue_TypeDefinitionIndex = 1484;

	class Queue : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x10
		::System::Object* _syncRoot; // 0x18
		::System::Int32 _tail; // 0x20
		::System::Int32 _growFactor; // 0x24
		::System::Int32 _head; // 0x28
		::System::Int32 _size; // 0x2C
		::System::Int32 _version; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE__CTOR_3_OFFSET))(this, a1);
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

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void Enqueue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_ENQUEUE_OFFSET))(this, a1);
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

		::System::Object* GetElement(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GETELEMENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_TOARRAY_OFFSET))(this);
		}

		::System::Void SetCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_SETCAPACITY_OFFSET))(this, a1);
		}
	};
}
