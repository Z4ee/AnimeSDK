#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::ComponentModel::Design { class DesignerOptionService_DesignerOptionCollection; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_CREATEOPTIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AA91D70)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_GETOPTIONPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AA91F20)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1AA91CD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_POPULATEOPTIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AA92160)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_SHOWDIALOG_OFFSET UNITYSDK_OFFSET(0x1AA92170)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNEROPTIONSERVICE_GETOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1AA92180)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNEROPTIONSERVICE_SETOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1AA921B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA921F0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerOptionService_TypeDefinitionIndex = 3043;

	class DesignerOptionService : public ::System::Object
	{
	public:
		::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* _options; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* get_Options()
		{
			return ((::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_GET_OPTIONS_OFFSET))(this);
		}

		::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* CreateOptionCollection(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* parent, ::System::String* name, ::System::Object* value)
		{
			return ((::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*(*)(::PVOID, ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_CREATEOPTIONCOLLECTION_OFFSET))(this, parent, name, value);
		}

		::System::ComponentModel::PropertyDescriptor* GetOptionProperty(::System::String* pageName, ::System::String* valueName)
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_GETOPTIONPROPERTY_OFFSET))(this, pageName, valueName);
		}

		::System::Void PopulateOptionCollection(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_POPULATEOPTIONCOLLECTION_OFFSET))(this, options);
		}

		::System::Boolean ShowDialog(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* options, ::System::Object* optionObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_SHOWDIALOG_OFFSET))(this, options, optionObject);
		}

		::System::Object* System_ComponentModel_Design_IDesignerOptionService_GetOptionValue(::System::String* pageName, ::System::String* valueName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNEROPTIONSERVICE_GETOPTIONVALUE_OFFSET))(this, pageName, valueName);
		}

		::System::Void System_ComponentModel_Design_IDesignerOptionService_SetOptionValue(::System::String* pageName, ::System::String* valueName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNEROPTIONSERVICE_SETOPTIONVALUE_OFFSET))(this, pageName, valueName, value);
		}
	};
}
