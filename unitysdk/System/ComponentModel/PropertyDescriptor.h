#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MemberDescriptor.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB0F5C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AB0F810)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB0F820)
#define SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0F5B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyDescriptor_TypeDefinitionIndex = 2617;

	class PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor
	{
	public:
		::Il2CppArray<::System::Type*>* editorTypes; // 0x60
		::Il2CppArray<::System::Object*>* editors; // 0x68
		::System::ComponentModel::TypeConverter* converter; // 0x70
		::System::Int32 editorCount; // 0x78

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::Attribute*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Void FillAttributes(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}
	};
}
