#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1867E3E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1867E420)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1867DE60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1867DE40)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedEventHandler_TypeDefinitionIndex = 2990;

	class NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
