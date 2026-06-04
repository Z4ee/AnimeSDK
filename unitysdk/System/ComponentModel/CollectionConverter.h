#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1AF248D0)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AF27270)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AF27260)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF24D20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CollectionConverter_TypeDefinitionIndex = 2558;

	class CollectionConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER_CONVERTTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2, ::Il2CppArray<::System::Attribute*>* a3)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER_GETPROPERTIES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, a1);
		}
	};
}
