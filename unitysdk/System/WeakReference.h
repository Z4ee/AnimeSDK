#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_WEAKREFERENCE_ALLOCATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1865D0D0)
#define SYSTEM_WEAKREFERENCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1865D290)
#define SYSTEM_WEAKREFERENCE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1865D340)
#define SYSTEM_WEAKREFERENCE_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1865D220)
#define SYSTEM_WEAKREFERENCE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1865D240)
#define SYSTEM_WEAKREFERENCE_GET_TRACKRESURRECTION_OFFSET UNITYSDK_OFFSET(0x1865D280)
#define SYSTEM_WEAKREFERENCE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1865D250)
#define SYSTEM_WEAKREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1865D100)
#define SYSTEM_WEAKREFERENCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1865D130)
#define SYSTEM_WEAKREFERENCE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1865D160)
#define SYSTEM_WEAKREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1865D0F0)

namespace System
{
	inline static constexpr unsigned int WeakReference_TypeDefinitionIndex = 452;

	class WeakReference : public ::System::Object
	{
	public:
		::System::Boolean isLongReference; // 0x10
		::System::Runtime::InteropServices::GCHandle gcHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void AllocateHandle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_ALLOCATEHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_ISALIVE_OFFSET))(this);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_TrackResurrection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_TRACKRESURRECTION_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_FINALIZE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
