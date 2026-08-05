#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_COMPLETIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D235A90)
#define SYSTEM_NET_COMPLETIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D235AD0)
#define SYSTEM_NET_COMPLETIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D2354D0)
#define SYSTEM_NET_COMPLETIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2354B0)

namespace System::Net
{
	inline static constexpr unsigned int CompletionDelegate_TypeDefinitionIndex = 3456;

	class CompletionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPLETIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* responseBytes, ::System::Exception* exception, ::System::Object* State)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPLETIONDELEGATE_INVOKE_OFFSET))(this, responseBytes, exception, State);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* responseBytes, ::System::Exception* exception, ::System::Object* State, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPLETIONDELEGATE_BEGININVOKE_OFFSET))(this, responseBytes, exception, State, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPLETIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
