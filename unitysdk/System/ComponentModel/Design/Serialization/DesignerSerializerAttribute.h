#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x186850E0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x186850D0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int DesignerSerializerAttribute_TypeDefinitionIndex = 2648;

	class DesignerSerializerAttribute : public ::System::Attribute
	{
	public:
		::System::String* serializerTypeName; // 0x10
		::System::String* serializerBaseTypeName; // 0x18
		::System::String* typeId; // 0x20

		::System::Void _ctor(::System::String* serializerTypeName, ::System::String* baseSerializerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET))(this, serializerTypeName, baseSerializerTypeName);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}
	};
}
