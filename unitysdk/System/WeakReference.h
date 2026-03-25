#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_WEAKREFERENCE_ALLOCATEHANDLE_OFFSET UNITYSDK_OFFSET(0x16276AF0)
#define SYSTEM_WEAKREFERENCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16276CB0)
#define SYSTEM_WEAKREFERENCE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x16276D60)
#define SYSTEM_WEAKREFERENCE_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x16276C40)
#define SYSTEM_WEAKREFERENCE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x16276C60)
#define SYSTEM_WEAKREFERENCE_GET_TRACKRESURRECTION_OFFSET UNITYSDK_OFFSET(0x16276CA0)
#define SYSTEM_WEAKREFERENCE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x16276C70)
#define SYSTEM_WEAKREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16276B20)
#define SYSTEM_WEAKREFERENCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16276B50)
#define SYSTEM_WEAKREFERENCE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16276B80)
#define SYSTEM_WEAKREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16276B10)

namespace System
{
	inline static constexpr unsigned int WeakReference_TypeDefinitionIndex = 453;

	class WeakReference : public ::System::Object
	{
	public:
		::System::Boolean isLongReference; // 0x10
		::System::Runtime::InteropServices::GCHandle gcHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_1_OFFSET))(this, target);
		}

		::System::Void _ctor_2(::System::Object* target, ::System::Boolean trackResurrection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_2_OFFSET))(this, target, trackResurrection);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Void AllocateHandle(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_ALLOCATEHANDLE_OFFSET))(this, target);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_ISALIVE_OFFSET))(this);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_SET_TARGET_OFFSET))(this, value);
		}

		::System::Boolean get_TrackResurrection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_TRACKRESURRECTION_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_FINALIZE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
