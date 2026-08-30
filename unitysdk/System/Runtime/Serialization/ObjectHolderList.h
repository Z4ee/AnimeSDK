#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class ObjectHolder; }
namespace System::Runtime::Serialization { class ObjectHolderListEnumerator; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1BE2A8A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x1BE2A970)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GETFIXUPENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BE2A9F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BE2AA90)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BE2AA80)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE2A850)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2A800)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolderList_TypeDefinitionIndex = 1114;

	class ObjectHolderList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::Serialization::ObjectHolder*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Runtime::Serialization::ObjectHolder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ObjectHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ADD_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator()
		{
			return ((::System::Runtime::Serialization::ObjectHolderListEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GETFIXUPENUMERATOR_OFFSET))(this);
		}

		::System::Void EnlargeArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ENLARGEARRAY_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_VERSION_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_COUNT_OFFSET))(this);
		}
	};
}
