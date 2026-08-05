#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class RunWorkerCompletedEventArgs; }

#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAB23E0)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAB2420)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAB1E50)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB1E30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RunWorkerCompletedEventHandler_TypeDefinitionIndex = 2978;

	class RunWorkerCompletedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::RunWorkerCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::RunWorkerCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::RunWorkerCompletedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::RunWorkerCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
