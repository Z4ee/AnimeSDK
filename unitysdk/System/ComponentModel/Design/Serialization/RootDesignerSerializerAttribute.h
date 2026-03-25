#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x18685B60)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18685B50)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int RootDesignerSerializerAttribute_TypeDefinitionIndex = 2650;

	class RootDesignerSerializerAttribute : public ::System::Attribute
	{
	public:
		::System::String* serializerTypeName; // 0x10
		::System::String* serializerBaseTypeName; // 0x18
		::System::String* typeId; // 0x20
		::System::Boolean reloadable; // 0x28

		::System::Void _ctor(::System::String* serializerTypeName, ::System::String* baseSerializerTypeName, ::System::Boolean reloadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET))(this, serializerTypeName, baseSerializerTypeName, reloadable);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}
	};
}
