#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ComponentCollection; }
namespace System::ComponentModel { class ContainerFilterService; }
namespace System::ComponentModel { class IComponent; }
namespace System::ComponentModel { class ISite; }

#define SYSTEM_COMPONENTMODEL_CONTAINER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1DEB1160)
#define SYSTEM_COMPONENTMODEL_CONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1DEB1140)
#define SYSTEM_COMPONENTMODEL_CONTAINER_CREATESITE_OFFSET UNITYSDK_OFFSET(0x1DEB15F0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DEB16F0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DEB1640)
#define SYSTEM_COMPONENTMODEL_CONTAINER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DEB10D0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1DEB1A90)
#define SYSTEM_COMPONENTMODEL_CONTAINER_GET_COMPONENTS_OFFSET UNITYSDK_OFFSET(0x1DEB1AE0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_REMOVEWITHOUTUNSITING_OFFSET UNITYSDK_OFFSET(0x1DEB22B0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1DEB1F50)
#define SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DEB15E0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x1DEB22C0)
#define SYSTEM_COMPONENTMODEL_CONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB2760)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Container_TypeDefinitionIndex = 2842;

	class Container : public ::System::Object
	{
	public:
		::System::ComponentModel::ContainerFilterService* filter; // 0x10
		::System::Object* syncObj; // 0x18
		::System::ComponentModel::ComponentCollection* components; // 0x20
		::Il2CppArray<::System::ComponentModel::ISite*>* sites; // 0x28
		::System::Boolean checkedFilter; // 0x30
		::System::Int32 siteCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_FINALIZE_OFFSET))(this);
		}

		::System::Void Add(::System::ComponentModel::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_ADD_OFFSET))(this, component);
		}

		::System::Void Add_1(::System::ComponentModel::IComponent* component, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_ADD_1_OFFSET))(this, component, name);
		}

		::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent* component, ::System::String* name)
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_CREATESITE_OFFSET))(this, component, name);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Object* GetService(::System::Type* service)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_GETSERVICE_OFFSET))(this, service);
		}

		::System::ComponentModel::ComponentCollection* get_Components()
		{
			return ((::System::ComponentModel::ComponentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_GET_COMPONENTS_OFFSET))(this);
		}

		::System::Void Remove(::System::ComponentModel::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_OFFSET))(this, component);
		}

		::System::Void Remove_1(::System::ComponentModel::IComponent* component, ::System::Boolean preserveSite)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_1_OFFSET))(this, component, preserveSite);
		}

		::System::Void RemoveWithoutUnsiting(::System::ComponentModel::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_REMOVEWITHOUTUNSITING_OFFSET))(this, component);
		}

		::System::Void ValidateName(::System::ComponentModel::IComponent* component, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_VALIDATENAME_OFFSET))(this, component, name);
		}
	};
}
