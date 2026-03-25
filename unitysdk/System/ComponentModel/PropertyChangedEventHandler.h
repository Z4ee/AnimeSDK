#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1868C7E0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1868C820)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1868C260)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1868C240)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangedEventHandler_TypeDefinitionIndex = 2604;

	class PropertyChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
