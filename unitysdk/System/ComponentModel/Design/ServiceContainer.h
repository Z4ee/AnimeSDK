#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IServiceProvider; }
namespace System { class Type; }
namespace System::ComponentModel::Design { class IServiceContainer; }
namespace System::ComponentModel::Design { class ServiceCreatorCallback; }
namespace System::ComponentModel::Design { template <typename T> class ServiceContainer_ServiceCollection_1; }
namespace System::Diagnostics { class TraceSwitch; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_1_OFFSET UNITYSDK_OFFSET(0x1C6F75F0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_2_OFFSET UNITYSDK_OFFSET(0x1C6F79B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_3_OFFSET UNITYSDK_OFFSET(0x1C6F79D0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_OFFSET UNITYSDK_OFFSET(0x1C6F75D0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C6F7CD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6F7CB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1C6F7EE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x1C6F73D0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GET_DEFAULTSERVICES_OFFSET UNITYSDK_OFFSET(0x1C6F7500)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1C6F7560)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_REMOVESERVICE_1_OFFSET UNITYSDK_OFFSET(0x1C6F82E0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_REMOVESERVICE_OFFSET UNITYSDK_OFFSET(0x1C6F82C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F83F0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F73C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F73B0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ServiceContainer_TypeDefinitionIndex = 3089;

	class ServiceContainer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet__defaultServices()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceContainer_TypeDefinitionIndex)->GetStaticField(0x2B80);
		}
		static ::System::Diagnostics::TraceSwitch** StaticGet_TRACESERVICE()
		{
			return (::System::Diagnostics::TraceSwitch**)Il2CppClass::FromTypeDefinitionIndex(ServiceContainer_TypeDefinitionIndex)->GetStaticField(0x2B88);
		}
		::System::IServiceProvider* parentProvider; // 0x10
		::System::ComponentModel::Design::ServiceContainer_ServiceCollection_1<::System::Object*>* services; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IServiceProvider* parentProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::IServiceProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER__CTOR_1_OFFSET))(this, parentProvider);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER__CCTOR_OFFSET))();
		}

		::System::ComponentModel::Design::IServiceContainer* get_Container()
		{
			return ((::System::ComponentModel::Design::IServiceContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GET_CONTAINER_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* get_DefaultServices()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GET_DEFAULTSERVICES_OFFSET))(this);
		}

		::System::ComponentModel::Design::ServiceContainer_ServiceCollection_1<::System::Object*>* get_Services()
		{
			return ((::System::ComponentModel::Design::ServiceContainer_ServiceCollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GET_SERVICES_OFFSET))(this);
		}

		::System::Void AddService(::System::Type* serviceType, ::System::Object* serviceInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_OFFSET))(this, serviceType, serviceInstance);
		}

		::System::Void AddService_1(::System::Type* serviceType, ::System::Object* serviceInstance, ::System::Boolean promote)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_1_OFFSET))(this, serviceType, serviceInstance, promote);
		}

		::System::Void AddService_2(::System::Type* serviceType, ::System::ComponentModel::Design::ServiceCreatorCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::ComponentModel::Design::ServiceCreatorCallback*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_2_OFFSET))(this, serviceType, callback);
		}

		::System::Void AddService_3(::System::Type* serviceType, ::System::ComponentModel::Design::ServiceCreatorCallback* callback, ::System::Boolean promote)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::ComponentModel::Design::ServiceCreatorCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_ADDSERVICE_3_OFFSET))(this, serviceType, callback, promote);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Object* GetService(::System::Type* serviceType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_GETSERVICE_OFFSET))(this, serviceType);
		}

		::System::Void RemoveService(::System::Type* serviceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_REMOVESERVICE_OFFSET))(this, serviceType);
		}

		::System::Void RemoveService_1(::System::Type* serviceType, ::System::Boolean promote)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERVICECONTAINER_REMOVESERVICE_1_OFFSET))(this, serviceType, promote);
		}
	};
}
