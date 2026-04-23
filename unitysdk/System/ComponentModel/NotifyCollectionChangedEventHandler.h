#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class NotifyCollectionChangedEventArgs; }

#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17AD4E70)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17AD4EB0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x17AD48F0)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD48D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyCollectionChangedEventHandler_TypeDefinitionIndex = 8323;

	class NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
