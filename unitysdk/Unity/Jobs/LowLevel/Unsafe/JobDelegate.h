#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B653B90)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B653C00)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B653890)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B653880)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobDelegate_TypeDefinitionIndex = 5073;

	class JobDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 para)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE_INVOKE_OFFSET))(this, para);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 para, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE_BEGININVOKE_OFFSET))(this, para, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
