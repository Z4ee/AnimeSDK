#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class NotifyCollectionChangedEventArgs; }

#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18883020)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18883060)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18883010)
#define SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18882F20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyCollectionChangedEventHandler_TypeDefinitionIndex = 9226;

	class NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::ComponentModel::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::ComponentModel::NotifyCollectionChangedEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
