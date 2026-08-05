#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EE1D4B0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EE1D520)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EE1D1B0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1D190)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobsUtility_DelegateCallback_TypeDefinitionIndex = 5075;

	class JobsUtility_DelegateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 dataID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK_INVOKE_OFFSET))(this, dataID);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 dataID, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK_BEGININVOKE_OFFSET))(this, dataID, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_DELEGATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
