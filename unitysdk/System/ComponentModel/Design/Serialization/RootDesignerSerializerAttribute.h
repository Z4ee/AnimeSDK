#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_RELOADABLE_OFFSET UNITYSDK_OFFSET(0x1C2E1B60)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1C2E1B80)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1C2E1B70)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1C2E1B90)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2E1B10)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C2E1B50)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E1AB0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int RootDesignerSerializerAttribute_TypeDefinitionIndex = 3115;

	class RootDesignerSerializerAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeId; // 0x10
		::System::String* serializerBaseTypeName; // 0x18
		::System::String* serializerTypeName; // 0x20
		::System::Boolean reloadable; // 0x28

		::System::Void _ctor(::System::Type* serializerType, ::System::Type* baseSerializerType, ::System::Boolean reloadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_OFFSET))(this, serializerType, baseSerializerType, reloadable);
		}

		::System::Void _ctor_1(::System::String* serializerTypeName, ::System::Type* baseSerializerType, ::System::Boolean reloadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_1_OFFSET))(this, serializerTypeName, baseSerializerType, reloadable);
		}

		::System::Void _ctor_2(::System::String* serializerTypeName, ::System::String* baseSerializerTypeName, ::System::Boolean reloadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE__CTOR_2_OFFSET))(this, serializerTypeName, baseSerializerTypeName, reloadable);
		}

		::System::Boolean get_Reloadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_RELOADABLE_OFFSET))(this);
		}

		::System::String* get_SerializerTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERTYPENAME_OFFSET))(this);
		}

		::System::String* get_SerializerBaseTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERBASETYPENAME_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}
	};
}
