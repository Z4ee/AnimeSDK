#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class AttributeCollection; }

#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET UNITYSDK_OFFSET(0x1868B290)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1868BBE0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1868BC90)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1868BEF0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1868B2F0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1868C020)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET UNITYSDK_OFFSET(0x1868B220)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1868BAB0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1868BBD0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18689B50)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1868B0C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MemberDescriptor_TypeDefinitionIndex = 2601;

	class MemberDescriptor : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Attribute*>* originalAttributes; // 0x18
		::Il2CppArray<::System::Attribute*>* attributes; // 0x20
		::System::ComponentModel::AttributeCollection* attributeCollection; // 0x28
		::System::Object* lockCookie; // 0x30
		::System::String* displayName; // 0x38
		::System::String* category; // 0x40
		::System::String* description; // 0x48
		::System::Boolean attributesFilled; // 0x50
		::System::Boolean attributesFiltered; // 0x51
		::System::Int32 nameHash; // 0x54
		::System::Int32 metadataVersion; // 0x58

		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_OFFSET))(this, name, attributes);
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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Void FillAttributes(::System::Collections::IList* attributeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, attributeList);
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
