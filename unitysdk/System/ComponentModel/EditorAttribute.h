#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18686A60)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18686B10)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x186869D0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18686930)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorAttribute_TypeDefinitionIndex = 2576;

	class EditorAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeName; // 0x10
		::System::String* typeId; // 0x18
		::System::String* baseTypeName; // 0x20

		::System::Void _ctor(::System::String* typeName, ::System::String* baseTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_OFFSET))(this, typeName, baseTypeName);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
