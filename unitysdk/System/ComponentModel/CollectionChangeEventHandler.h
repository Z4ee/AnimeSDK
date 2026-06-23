#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }

#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1BF6E0)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1BF720)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1BF160)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BF140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CollectionChangeEventHandler_TypeDefinitionIndex = 2834;

	class CollectionChangeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
