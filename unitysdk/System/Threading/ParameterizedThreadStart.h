#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E1F900)
#define SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E1F930)
#define SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E1F400)
#define SYSTEM_THREADING_PARAMETERIZEDTHREADSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1F3F0)

namespace System::Threading
{
	inline static constexpr unsigned int ParameterizedThreadStart_TypeDefinitionIndex = 824;

	class ParameterizedThreadStart : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PARAMETERIZEDTHREADSTART__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_INVOKE_OFFSET))(this, obj);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_BEGININVOKE_OFFSET))(this, obj, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
