#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1AF28AE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF28AD0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int DesignerSerializerAttribute_TypeDefinitionIndex = 2649;

	class DesignerSerializerAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeId; // 0x10
		::System::String* serializerTypeName; // 0x18
		::System::String* serializerBaseTypeName; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}
	};
}
