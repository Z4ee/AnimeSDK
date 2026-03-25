#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MemberDescriptor.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1868C840)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1868C980)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1868C990)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1868C830)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyDescriptor_TypeDefinitionIndex = 2605;

	class PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor
	{
	public:
		::Il2CppArray<::System::Object*>* editors; // 0x60
		::System::ComponentModel::TypeConverter* converter; // 0x68
		::Il2CppArray<::System::Type*>* editorTypes; // 0x70
		::System::Int32 editorCount; // 0x78

		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Attribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_OFFSET))(this, name, attrs);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Void FillAttributes(::System::Collections::IList* attributeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, attributeList);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}
	};
}
