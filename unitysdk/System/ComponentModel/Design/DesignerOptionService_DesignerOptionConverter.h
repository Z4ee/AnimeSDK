#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1939A150)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x19399A50)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19399A60)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A1E0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerOptionService_DesignerOptionConverter_TypeDefinitionIndex = 3046;

	class DesignerOptionService_DesignerOptionConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* cxt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, cxt);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER_GETPROPERTIES_OFFSET))(this, cxt, value, attributes);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_DESIGNEROPTIONCONVERTER_CONVERTTO_OFFSET))(this, cxt, culture, value, destinationType);
		}
	};
}
