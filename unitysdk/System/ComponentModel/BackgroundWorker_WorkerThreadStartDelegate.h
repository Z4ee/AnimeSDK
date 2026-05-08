#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0F7470)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0F74A0)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0F6F70)
#define SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F6F60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BackgroundWorker_WorkerThreadStartDelegate_TypeDefinitionIndex = 2820;

	class BackgroundWorker_WorkerThreadStartDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE_INVOKE_OFFSET))(this, argument);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* argument, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE_BEGININVOKE_OFFSET))(this, argument, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BACKGROUNDWORKER_WORKERTHREADSTARTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
