#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB763B0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB76460)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1DB76300)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORTYPENAME_OFFSET UNITYSDK_OFFSET(0x1DB76310)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1DB76320)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB76200)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DB76250)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DB762B0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB761E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorAttribute_TypeDefinitionIndex = 2873;

	class EditorAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeId; // 0x10
		::System::String* baseTypeName; // 0x18
		::System::String* typeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* typeName, ::System::String* baseTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_1_OFFSET))(this, typeName, baseTypeName);
		}

		::System::Void _ctor_2(::System::String* typeName, ::System::Type* baseType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_2_OFFSET))(this, typeName, baseType);
		}

		::System::Void _ctor_3(::System::Type* type, ::System::Type* baseType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE__CTOR_3_OFFSET))(this, type, baseType);
		}

		::System::String* get_EditorBaseTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORBASETYPENAME_OFFSET))(this);
		}

		::System::String* get_EditorTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORTYPENAME_OFFSET))(this);
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
