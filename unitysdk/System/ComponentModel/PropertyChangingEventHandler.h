#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangingEventArgs; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E2840D0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E284110)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E283B40)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E283B20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventHandler_TypeDefinitionIndex = 2961;

	class PropertyChangingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::PropertyChangingEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangingEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::PropertyChangingEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
