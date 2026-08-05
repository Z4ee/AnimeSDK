#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC04890)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC04880)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_AttributeProvider_TypeDefinitionIndex = 2995;

	class TypeDescriptor_AttributeProvider : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		::Il2CppArray<::System::Attribute*>* _attrs; // 0x20

		::System::Void _ctor(::System::ComponentModel::TypeDescriptionProvider* existingProvider, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::TypeDescriptionProvider*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER__CTOR_OFFSET))(this, existingProvider, attrs);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_ATTRIBUTEPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, objectType, instance);
		}
	};
}
