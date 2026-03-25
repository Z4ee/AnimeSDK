#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class ListChangedEventArgs; }

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1868B070)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1868B0B0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1868AAF0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1868AAD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventHandler_TypeDefinitionIndex = 2599;

	class ListChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::ListChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
