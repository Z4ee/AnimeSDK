#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel::Design { class IServiceContainer; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19202C50)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19202C90)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x192026B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x192026A0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ServiceCreatorCallback_TypeDefinitionIndex = 3089;

	class ServiceCreatorCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::ComponentModel::Design::IServiceContainer* container, ::System::Type* serviceType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::Design::IServiceContainer*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK_INVOKE_OFFSET))(this, container, serviceType);
		}

		::System::IAsyncResult* BeginInvoke(::System::ComponentModel::Design::IServiceContainer* container, ::System::Type* serviceType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ComponentModel::Design::IServiceContainer*, ::System::Type*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK_BEGININVOKE_OFFSET))(this, container, serviceType, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECREATORCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
