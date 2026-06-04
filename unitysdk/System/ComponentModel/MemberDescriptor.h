#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class AttributeCollection; }

#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET UNITYSDK_OFFSET(0x1AF2E7B0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF2F130)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF2F1E0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AF2F420)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1AF2E810)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF2F540)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET UNITYSDK_OFFSET(0x1AF2E740)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AF2F000)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF2F120)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF2D510)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2E5E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MemberDescriptor_TypeDefinitionIndex = 2602;

	class MemberDescriptor : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Attribute*>* originalAttributes; // 0x10
		::System::String* description; // 0x18
		::System::String* category; // 0x20
		::System::String* displayName; // 0x28
		::System::ComponentModel::AttributeCollection* attributeCollection; // 0x30
		::System::Object* lockCookie; // 0x38
		::Il2CppArray<::System::Attribute*>* attributes; // 0x40
		::System::String* name; // 0x48
		::System::Int32 nameHash; // 0x50
		::System::Boolean attributesFilled; // 0x54
		::System::Boolean attributesFiltered; // 0x55
		::System::Int32 metadataVersion; // 0x58

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::Attribute*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Attribute*>* get_AttributeArray()
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET))(this);
		}

		::System::ComponentModel::AttributeCollection* get_Attributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_NameHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET))(this);
		}

		::System::Void CheckAttributesValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET))(this);
		}

		::System::ComponentModel::AttributeCollection* CreateAttributeCollection()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Void FillAttributes(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Void FilterAttributesIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}
	};
}
