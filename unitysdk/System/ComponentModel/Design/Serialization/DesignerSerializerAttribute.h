#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1939A290)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1939A280)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1939A2A0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1939A240)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1939A270)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A1F0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int DesignerSerializerAttribute_TypeDefinitionIndex = 3102;

	class DesignerSerializerAttribute : public ::System::Attribute
	{
	public:
		::System::String* serializerTypeName; // 0x10
		::System::String* typeId; // 0x18
		::System::String* serializerBaseTypeName; // 0x20

		::System::Void _ctor(::System::Type* serializerType, ::System::Type* baseSerializerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET))(this, serializerType, baseSerializerType);
		}

		::System::Void _ctor_1(::System::String* serializerTypeName, ::System::Type* baseSerializerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_1_OFFSET))(this, serializerTypeName, baseSerializerType);
		}

		::System::Void _ctor_2(::System::String* serializerTypeName, ::System::String* baseSerializerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE__CTOR_2_OFFSET))(this, serializerTypeName, baseSerializerTypeName);
		}

		::System::String* get_SerializerTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERTYPENAME_OFFSET))(this);
		}

		::System::String* get_SerializerBaseTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERBASETYPENAME_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}
	};
}
