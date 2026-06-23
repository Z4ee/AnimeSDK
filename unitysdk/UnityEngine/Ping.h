#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PING_DESTROYPING_OFFSET UNITYSDK_OFFSET(0x1D4335D0)
#define UNITYENGINE_PING_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D433550)
#define UNITYENGINE_PING_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1D433610)
#define UNITYENGINE_PING_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1D433640)
#define UNITYENGINE_PING_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1D433540)
#define UNITYENGINE_PING_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D433600)
#define UNITYENGINE_PING_INTERNAL_ISDONE_OFFSET UNITYSDK_OFFSET(0x1D433630)
#define UNITYENGINE_PING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D433520)

namespace UnityEngine
{
	inline static constexpr unsigned int Ping_TypeDefinitionIndex = 5307;

	class Ping : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::String* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PING__CTOR_OFFSET))(this, address);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_FINALIZE_OFFSET))(this);
		}

		::System::Void DestroyPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_DESTROYPING_OFFSET))(this);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		static ::System::IntPtr Internal_Create(::System::String* address)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_INTERNAL_CREATE_OFFSET))(address);
		}

		::System::Boolean get_isDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean Internal_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_INTERNAL_ISDONE_OFFSET))(this);
		}

		::System::Int32 get_time()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PING_GET_TIME_OFFSET))(this);
		}
	};
}
