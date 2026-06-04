#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangingEventArgs; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x188831C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18883200)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x188831B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188830C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventHandler_TypeDefinitionIndex = 9228;

	class PropertyChangingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::ComponentModel::PropertyChangingEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangingEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::ComponentModel::PropertyChangingEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
