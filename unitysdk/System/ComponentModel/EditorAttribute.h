#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF2A480)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF2A530)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1AF2A3F0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A350)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorAttribute_TypeDefinitionIndex = 2577;

	class EditorAttribute : public ::System::Attribute
	{
	public:
		::System::String* baseTypeName; // 0x10
		::System::String* typeName; // 0x18
		::System::String* typeId; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
