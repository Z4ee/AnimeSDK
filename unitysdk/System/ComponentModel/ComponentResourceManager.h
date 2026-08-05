#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Resources/ResourceManager.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_1_OFFSET UNITYSDK_OFFSET(0x1DD11180)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_OFFSET UNITYSDK_OFFSET(0x1DD11160)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_FILLRESOURCES_OFFSET UNITYSDK_OFFSET(0x1DD11D60)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_GET_NEUTRALRESOURCESCULTURE_OFFSET UNITYSDK_OFFSET(0x1DD110D0)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD11070)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD11010)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentResourceManager_TypeDefinitionIndex = 2841;

	class ComponentResourceManager : public ::System::Resources::ResourceManager
	{
	public:
		::System::Collections::Hashtable* _resourceSets; // 0x80
		::System::Globalization::CultureInfo* _neutralResourcesCulture; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER__CTOR_1_OFFSET))(this, t);
		}

		::System::Globalization::CultureInfo* get_NeutralResourcesCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_GET_NEUTRALRESOURCESCULTURE_OFFSET))(this);
		}

		::System::Void ApplyResources(::System::Object* value, ::System::String* objectName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_OFFSET))(this, value, objectName);
		}

		::System::Void ApplyResources_1(::System::Object* value, ::System::String* objectName, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_1_OFFSET))(this, value, objectName, culture);
		}

		::System::Collections::Generic::SortedList_2<::System::String*, ::System::Object*>* FillResources(::System::Globalization::CultureInfo* culture, ::System::Resources::ResourceSet*& resourceSet)
		{
			return ((::System::Collections::Generic::SortedList_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Resources::ResourceSet*&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_FILLRESOURCES_OFFSET))(this, culture, resourceSet);
		}
	};
}
