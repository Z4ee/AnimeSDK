#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Queue; }

#define SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD49F90)
#define SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD4A100)
#define SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AD4A030)
#define SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AD4A1C0)
#define SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD49C40)

namespace System::Collections
{
	inline static constexpr unsigned int Queue_QueueEnumerator_TypeDefinitionIndex = 1489;

	class Queue_QueueEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Queue* _q; // 0x10
		::System::Object* currentElement; // 0x18
		::System::Int32 _index; // 0x20
		::System::Int32 _version; // 0x24

		::System::Void _ctor(::System::Collections::Queue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Queue*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_QUEUEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
