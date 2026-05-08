#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class AddingNewEventArgs; }

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B1E3270)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B1E32B0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1E2CF0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E2CE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventHandler_TypeDefinitionIndex = 2807;

	class AddingNewEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::AddingNewEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::AddingNewEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::AddingNewEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::AddingNewEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
